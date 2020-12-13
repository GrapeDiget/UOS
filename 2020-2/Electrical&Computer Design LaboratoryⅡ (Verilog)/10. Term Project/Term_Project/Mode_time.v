`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:21:22 12/06/2020 
// Design Name: 
// Module Name:    Mode_time 
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
module Mode_time(RESET, CLK, NUM_SYNC, CHAR_SYNC, MODE, EN, RW_OUTPUT, RS_OUTPUT, DATA_OUTPUT, MERIDIEM, HOUR, MIN, SEC);
	input RESET, CLK, EN;
	input [3:0] NUM_SYNC, MODE;
	input [1:0] CHAR_SYNC;
	output reg RW_OUTPUT, RS_OUTPUT;
	output reg [7:0] DATA_OUTPUT;
	output reg MERIDIEM;
	output reg [6:0] HOUR, MIN, SEC;

	//MERIDIEM, HOUR, MIN, SEC을 1자리의 십진수 숫자로 변환할 변수
	reg [7:0] mer;
	wire [7:0] h10, h1, m10, m1, s10, s1;
	
	//mer, h10, h1, m1, m10, s10, s1에 값을 입력
	always @(*) begin
		if(!RESET)
			mer = 8'h41;
		else begin
			if(MERIDIEM)		//meridiem = 1이면 P, meridiem = 0이면 A
				mer = 8'h50;
			else
				mer = 8'h41;
		end
	end
		
	Clock_sep U0 (HOUR, h10, h1);
	Clock_sep U1 (MIN, m10, m1);
	Clock_sep U2 (SEC, s10, s1);
	
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
	
	//Mode_time_set
	wire [2:0] cursor;
	wire meridiem_set;
	wire [6:0] hour_set, min_set, sec_set;
	
	Mode_time_set M1 (RESET, CLK, NUM_SYNC, MODE, cursor, meridiem_set, hour_set, min_set, sec_set);
	
	//화면에 표시할 cursor의 위치
	reg [5:0] cursor_position;
	
	always @(*) begin
		if(!RESET)
			cursor_position = 6'd15;
		else begin
			case(cursor)
				0 : cursor_position = 6'd15;
				1 : cursor_position = 6'd14;
				2 : cursor_position = 6'd12;
				3 : cursor_position = 6'd11;
				4 : cursor_position = 6'd9;
				5 : cursor_position = 6'd8;
				6 : cursor_position = 6'd5;
				default : cursor_position = 6'd15;
			endcase
		end
	end
	
	//시간의 경과를 제어
	integer clock_cnt;
	reg pause;
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			clock_cnt = 0;
			colon = 0;
			pause = 0;
		end
		else begin
			if(pause == 1) begin
				if(CHAR_SYNC[1] == 1)			//B를 누르면 시간 흐름 재개
					pause = 0;
			end
			else begin
				if(CHAR_SYNC[0] == 1)			//A를 누르면 시간 흐름 일시 정지
					pause = 1;
				else if(MODE == 4'b0000)		//mode = time_set이면 카운트 초기화
					clock_cnt = 0;
				else begin		
					if(clock_cnt >= 999) begin		  
						clock_cnt = 0;	colon = 0;
					end
					else if(clock_cnt >= 499) begin
						colon = 1; clock_cnt = clock_cnt + 1;
					end
					else
						clock_cnt = clock_cnt + 1;
				end
			end
		end
	end
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			MERIDIEM = 0;
			HOUR = 0;
			MIN = 0;
			SEC = 0;
		end
		else begin
			if(MODE == 4'b0000) begin 			//mode = time_set이면 시간값에 time_set 모듈의 출력을 입력
				MERIDIEM = meridiem_set;
				HOUR = hour_set;
				MIN = min_set;
				SEC = sec_set;
			end
			else begin								//그 외의 mode에서는 자동으로 시간이 증가
				if(clock_cnt >= 999) begin
						if(SEC >= 59) begin	SEC = 0;
								if(MIN >= 59) begin	MIN = 0;
									if(HOUR >= 11) begin	HOUR = 0;
										if(MERIDIEM >= 1)		MERIDIEM = 0;
										else						MERIDIEM = 1;
									end
									else						HOUR = HOUR + 1;
								end
								else						MIN = MIN + 1;
						end
						else						SEC = SEC + 1;
				end
			end
		end	
	end
	
	//화면 출력을 위한 cnt
	reg [5:0] time_cnt;
	
	always @(negedge RESET, posedge CLK) begin
		if(!RESET)
			time_cnt = 0;
		else if(!EN)
			time_cnt = 0;
		else begin
			if(MODE == 4'b0000 || MODE == 4'b0000) begin
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
			if(MODE == 4'b0000) begin					//mode = main
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
							DATA_OUTPUT = 8'h4D;			//M
						end
						4 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h49;			//I
						end
						5 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4E;			//N
						end
						6 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h48;			//H
						end
						7 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4F;			//O
						end
						8 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h27;			//'
						end
						9 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h53;			//S
						end
						10 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						11 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h43;			//C
						end
						12 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4C;			//L
						end
						13 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4F;			//O
						end
						14 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h43;			//C
						end
						15 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4B;			//K
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
							DATA_OUTPUT = mer;			//A 또는 P
						end
						23 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4D;			//M
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

			else if(MODE == 4'b0000) begin			//mode = time_set
					RW_OUTPUT = 1'b0;
					case(time_cnt)
						0 : begin							//LINE1 작성
							RS_OUTPUT = 1'b0;
							DATA_OUTPUT = 8'b10000000;
						end
						cursor_position : begin			//cursor의 위치에만 화살표 출력, 나머지는 blank
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h19;
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
							DATA_OUTPUT = mer;			//A 또는 P
						end
						23 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4D;			//M
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
