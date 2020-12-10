`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:56:39 12/10/2020 
// Design Name: 
// Module Name:    Mode_stopwatch 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Mode_stopwatch(RESET, CLK, CHAR_SYNC, MODE, RW_OUTPUT, RS_OUTPUT, DATA_OUTPUT);
	input RESET, CLK;
	input [1:0] CHAR_SYNC;
	input [3:0] MODE;
	output reg RW_OUTPUT, RS_OUTPUT;
	output reg [7:0] DATA_OUTPUT;
	
	//스톱워치에 표시될 시간
	reg [6:0] hour, min, sec;
	wire [7:0] h10, h1, m10, m1, s10, s1;
	
	Clock_sep U0 (hour, h10, h1);
	Clock_sep U1 (min, m10, m1);
	Clock_sep U2 (sec, s10, s1);
	
	//: 의 표현을 위한 변수
	reg [7:0] col;
	reg colon;
	
	always @(*) begin
		if(!RESET)
			col = 8'h3A;
		else begin
			if(colon)			//colon = 1이면 blank, colon = 0이면 :
				col = 8'h20;
			else
				col = 8'h3A;
		end
	end
	
	//시간의 경과를 제어
	integer stopwatch_cnt;
	reg pause;
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			stopwatch_cnt = 0;
			colon = 0;
			pause = 1;
		end
		else begin
			if(MODE == 4'b1000) begin
				if(pause == 1) begin
					if(CHAR_SYNC[1] == 1)			//B를 누르면 시간 흐름 재개
						pause = 0;
				end
				else begin
					if(CHAR_SYNC[0] == 1)			//A를 누르면 시간 흐름 일시 정지
						pause = 1;
					else begin		
						if(stopwatch_cnt >= 999) begin		  
							stopwatch_cnt = 0;	colon = 0;
						end
						else if(stopwatch_cnt >= 499) begin
							colon = 1; stopwatch_cnt = stopwatch_cnt + 1;
						end
						else
							stopwatch_cnt = stopwatch_cnt + 1;
					end
				end
			end
		end
	end
	
	//stopwatch_cnt에 따라 시간이 증가
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			hour = 0;
			min = 0;
			sec = 0;
		end
		else begin
			if(pause == 1) begin
				if(CHAR_SYNC[0] == 1) begin
					hour = 0;
					min = 0;
					sec = 0;
				end
			end
			else if(stopwatch_cnt >= 999) begin
					if(sec >= 59) begin	sec = 0;
							if(min >= 59) begin	min = 0;
								if(hour >= 99) 		hour = 0;
								else						hour = hour + 1;
							end
							else						min = min + 1;
					end
					else						sec = sec + 1;
			end
		end	
	end
	
	//화면 출력을 위한 cnt
	reg [5:0] time_cnt;
	
	always @(negedge RESET, posedge CLK) begin
		if(!RESET)
			time_cnt = 0;
		else begin
			if(MODE == 4'b1000) begin
				if(time_cnt >= 35)
					time_cnt = 0;
				else
					time_cnt = time_cnt + 1;
			end
			else	time_cnt = 0;
		end
	end
	
	//mode에 따라 RW_OUTPUT, RS_OUTPUT, DATA_OUTPUT 지정
	always @(negedge RESET, posedge CLK) begin
		if(!RESET) begin
			RW_OUTPUT = 1;
			RS_OUTPUT = 1;
			DATA_OUTPUT = 8'b00000010;	
		end
		else begin
			if(MODE == 4'b1000) begin					//mode = stopwatch
				RW_OUTPUT = 1'b0;
					case(time_cnt)
						0 : begin							//LINE1 작성
							RS_OUTPUT = 1'b0;
							DATA_OUTPUT = 8'b10000000;
						end
						1 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						2 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						3 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						4 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h53;			//S
						end
						5 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h54;			//T
						end
						6 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4F;			//O
						end
						7 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h50;			//P
						end
						8 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						9 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h57;			//W
						end
						10 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h41;			//A
						end
						11 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h54;			//T
						end
						12 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h43;			//C
						end
						13 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h48;			//H
						end
						14 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						15 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						16 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						17 : begin							//LINE2로 이동
							RS_OUTPUT = 1'b0;
							DATA_OUTPUT = 8'b11000000;
						end
						18 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						19 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						20 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						21 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						22 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						23 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						24 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						25 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = h10;			//h10
						end
						26 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = h1;				//h1
						end
						27 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						28 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = m10;			//m10
						end
						29 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = m1;				//m1
						end
						30 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						31 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = s10;			//s10
						end
						32 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = s1;				//s1
						end
						33 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						default : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
					endcase
			end				
			else begin
				RW_OUTPUT = 1;
				RS_OUTPUT = 1;
				DATA_OUTPUT = 8'b00000010;
			end
		end
	end

endmodule
