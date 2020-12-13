`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:58:54 12/10/2020 
// Design Name: 
// Module Name:    Mode_timer 
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
module Mode_timer(RESET, CLK, NUM_SYNC, MODE, CHAR_SYNC, SOUND, RW_OUTPUT, RS_OUTPUT, DATA_OUTPUT);
	input RESET, CLK;
	input [3:0] NUM_SYNC, MODE;
	input [2:0] CHAR_SYNC;
	output reg SOUND;
	output reg RW_OUTPUT, RS_OUTPUT;
	output reg [7:0] DATA_OUTPUT;
	
	//타이머에 표시될 시간
	reg [6:0] timer_hour, timer_min, timer_sec;
	
	//timer_hour, timer_min, timer_sec을 1자리의 십진수 숫자로 변환할 변수
	wire [7:0] t_h10, t_h1, t_m10, t_m1, t_s10, t_s1;

	Clock_sep U0 (timer_hour, t_h10, t_h1);
	Clock_sep U1 (timer_min, t_m10, t_m1);
	Clock_sep U2 (timer_sec, t_s10, t_s1);
	
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
	
	//Mode_timer_set
	wire [2:0] cursor;
	wire [6:0] hour_set, min_set, sec_set;
	
	Mode_timer_set M10 (RESET, CLK, NUM_SYNC, MODE, cursor, hour_set, min_set, sec_set);
	
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
				default : cursor_position = 6'd15;
			endcase
		end
	end
	
	//시간의 경과를 제어
	integer timer_cnt;
	reg pause;
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			timer_cnt = 0;
			colon = 0;
			pause = 1;
		end
		else begin
			if(MODE == 4'b0000) begin
				if(pause == 1) begin
					if(CHAR_SYNC[1] == 1)			//B를 누르면 시간 흐름 재개
						pause = 0;
				end
				else begin
					if(CHAR_SYNC[0] == 1)			//A를 누르면 시간 흐름 일시 정지
						pause = 1;
					else if(MODE == 4'b0000)		//mode = timer_set이면 카운트 초기화
						timer_cnt = 0;	
					else begin		
						if(timer_cnt >= 999) begin		  
							timer_cnt = 0;	colon = 0;
						end
						else if(timer_cnt >= 499) begin
							colon = 1; timer_cnt = timer_cnt + 1;
						end
						else
							timer_cnt = timer_cnt + 1;
					end
				end
			end
		end
	end
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			timer_hour = 0;
			timer_min = 0;
			timer_sec = 0;
		end
		else begin
			if(MODE == 4'b0000) begin 			//mode = timer_set이면 시간값에 timer_set 모듈의 출력을 입력
				timer_hour = hour_set;
				timer_min = min_set;
				timer_sec = sec_set;
			end
			else begin								//그 외의 mode에서는 자동으로 시간이 감소
				if(timer_cnt >= 999) begin
						if(timer_sec <= 0) begin
								if(timer_min <= 0) begin
									if(timer_hour <= 0) begin
										timer_hour = 0;
										timer_min = 0;
										timer_sec = 0;
									end
									else begin
										timer_hour = timer_hour - 1;
										timer_min = 59;
										timer_sec = 59;
									end
								end
								else begin	
										timer_min = timer_min - 1;
										timer_sec = 59;
								end										
						end
						else begin	
								timer_sec = timer_sec - 1;
						end
				end
			end
		end	
	end
	
	//멜로디 재생 여부 조절
	reg sound_en;
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			SOUND = 0;
			sound_en = 0;
		end
		else begin
			if(sound_en == 1 && {timer_hour, timer_min, timer_sec} == {7'd0, 7'd0, 7'd0}) begin
				SOUND = 1;
				sound_en = 0;
			end
			else if(timer_sec == 1)
				sound_en = 1;
			else if(SOUND == 1 && CHAR_SYNC[2] == 1)
				SOUND = 0;
		end
	end
	
	//화면 출력을 위한 cnt
	reg [5:0] time_cnt;
	
	always @(negedge RESET, posedge CLK) begin
		if(!RESET)
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
			if(MODE == 4'b0000) begin					//mode = timer
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
							DATA_OUTPUT = 8'h20;			//blank
						end
						5 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						6 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						7 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						8 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						9 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						10 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						11 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h54;			//T
						end
						12 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h49;			//I
						end
						13 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4D;			//M
						end
						14 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h45;			//E
						end
						15 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h52;			//R
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
							DATA_OUTPUT = t_h10;			//t_h10
						end
						26 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = t_h1;			//t_h1
						end
						27 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						28 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = t_m10;			//t_m10
						end
						29 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = t_m1;			//t_m1
						end
						30 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						31 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = t_s10;			//t_s10
						end
						32 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = t_s1;			//t_s1
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

			else if(MODE == 4'b0000) begin			//mode = timer_set
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
							DATA_OUTPUT = t_h10;			//t_h10
						end
						26 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = t_h1;			//t_h1
						end
						27 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						28 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = t_m10;			//t_m10
						end
						29 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = t_m1;			//t_m1
						end
						30 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						31 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = t_s10;			//t_s10
						end
						32 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = t_s1;			//t_s1
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
