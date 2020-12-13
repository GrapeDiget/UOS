`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:38:28 12/06/2020 
// Design Name: 
// Module Name:    Mode_date 
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
module Mode_date(RESET, CLK, NUM_SYNC, MODE, MERIDIEM, HOUR, MIN, SEC, RW_OUTPUT, RS_OUTPUT, DATA_OUTPUT);
   input RESET, CLK;
	input [3:0] NUM_SYNC, MODE;
	input MERIDIEM;
	input [6:0] HOUR, MIN, SEC;
	output reg RW_OUTPUT, RS_OUTPUT;
	output reg [7:0] DATA_OUTPUT;
	
	//현재 날짜 정보
	reg [3:0] year_1000, year_100, year_10, year_1;
	reg [6:0] month;
	reg [6:0] day;
	
	//윤년 및 윤일 지정
	reg leap_year;
	
	always @(*) begin
		if(!RESET)
			leap_year = 0;	//기본적으로 평년으로 가정
		else begin
			if(year_1000[0] == 0 && (year_100 == 0 || year_100 == 4 || year_100 == 8) && year_10 == 0 && year_1 == 0)	//400으로 나누어 떨어지면 윤년
				leap_year = 1;
			else if(year_1000[0] == 1 && (year_100 == 2 || year_100 == 6) && year_10 == 0 && year_1 == 0)					//400으로 나누어 떨어지면 윤년
				leap_year = 1;
			else if(year_10 == 0 && year_1 == 0)	//100으로 나누어 떨어지면 평년
				leap_year = 0;
			else if(year_10[0] == 0 && (year_1 == 0 || year_1 == 4 || year_1 == 8))	//4로 나누어 떨어지면 윤년
				leap_year = 1;
			else if(year_10[0] == 1 && (year_1 == 2 || year_1 == 6))						//4로 나누어 떨어지면 윤년
				leap_year = 1;
			else
				leap_year = 0;		//그 외의 해는 모두 평년
		end
	end
	
	//현재 날짜 정보를 1자리의 10진수를 표현하는 코드로 변환
	wire [7:0] y1000, y100, y10, y1, mon10, mon1, d10, d1;
	
	Number_to_code Y0 (year_1000, y1000), Y1 (year_100, y100), Y2 (year_10, y10), Y3 (year_1, y1);
	Clock_sep Mon0 (month, mon10, mon1);
	Clock_sep D0 (day, d10, d1);
	
	//Mode_date_set
	wire [2:0] cursor;
	wire [3:0] year1000_set, year100_set, year10_set, year1_set;
	wire [6:0] month_set;
	wire [6:0] day_set;
	
	Mode_date_set M3 (RESET, CLK, NUM_SYNC, MODE, cursor, year1000_set, year100_set, year10_set, year1_set, month_set, day_set);
	
	//화면에 표시할 cursor의 위치
	reg [6:0] cursor_position;
	
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
				6 : cursor_position = 6'd7;
				7 : cursor_position = 6'd6;
				default : cursor_position = 6'd15;
			endcase
		end
	end
	
	//날짜의 경과를 제어
	reg tomorrow;
	reg tomorrow_cnt;
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			tomorrow = 0;
			tomorrow_cnt = 0;
		end
		else begin									//mode != time_set이고 오후 11시 59분 59초999일때 하루가 경과
				if(SEC >= 59 && MIN >= 59 && HOUR >= 11 && MERIDIEM >= 1 && MODE != 4'b0000) begin
					if(tomorrow_cnt >= 999) begin
						tomorrow = 1;
						tomorrow_cnt = 0;
					end
					else
						tomorrow_cnt = tomorrow_cnt + 1;
				end
				else begin
					tomorrow = 0;
					tomorrow_cnt = 0;
				end
		end
	end
	
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			year_1000 = 2;
			year_100 = 0;
			year_10 = 2;
			year_1 = 0;
			month = 1;
			day = 1;
		end
		else begin
			if(MODE == 4'b0000) begin 			//mode = date_set이면 시간값에 date_set 모듈의 출력을 입력
				year_1000 = year1000_set;
				year_100 = year100_set;
				year_10 = year10_set;
				year_1 = year1_set;
				month = month_set;
				day = day_set;
			end
			else if(tomorrow == 1) begin
				if(day == 31) begin
					day = 1;
					if(month == 12) begin
						month = 1;
						if(year_1 == 9) begin
							year_1 = 0;
							if(year_10 == 9) begin
								year_10 = 0;
								if(year_100 == 9) begin
									year_100 = 0;
									if(year_1000 == 9)
										year_1000 = 0;
									else
										year_1000 = year_1000 + 1;
								end
								else
									year_100 = year_100 + 1;
							end
							else
								year_10 = year_10 + 1;
						end
						else
							year_1 = year_1 + 1;
					end
					else
						month = month + 1;
				end
				else if(day == 30 && (month == 4 || month == 6 || month == 9 || month == 11)) begin
					day = 1;
					month = month + 1;
				end
				else if(day == 29 && month == 2) begin
					day = 1;
					month = month + 1;
				end
				else if(day == 28 && month == 2 && leap_year == 0) begin
					day = 1;
					month = month + 1;
				end				
				else
					day = day + 1;
			end
		end	
	end
		
	//화면 출력을 위한 cnt
	reg [5:0] cnt;
	
	always @(negedge RESET, posedge CLK) begin
		if(!RESET)
			cnt = 0;
		else begin
			if(MODE == 4'b0000 || MODE == 4'b0000) begin
				if(cnt >= 35)
					cnt = 0;
				else
					cnt = cnt + 1;
			end
			else	cnt = 0;
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
			if(MODE == 4'b0000) begin					//mode = date
				RW_OUTPUT = 1'b0;
					case(cnt)
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
							DATA_OUTPUT = 8'h54;			//T
						end
						3 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h6F;			//o
						end
						4 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h64;			//d
						end
						5 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h61;			//a
						end
						6 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h79;			//y
						end
						7 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						8 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h69;			//i
						end
						9 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h73;			//s
						end
						10 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						11 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						12 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						13 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
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
							DATA_OUTPUT = y1000;
						end
						24 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = y100;
						end
						25 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = y10;
						end
						26 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = y1;
						end
						27 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h2D;			//-
						end
						28 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = mon10;
						end
						29 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = mon1;
						end
						30 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h2D;			//-
						end
						31 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = d10;
						end
						32 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = d1;
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

			else if(MODE == 4'b0000) begin			//mode = date_set
					RW_OUTPUT = 1'b0;
					case(cnt)
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
							DATA_OUTPUT = y1000;
						end
						24 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = y100;
						end
						25 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = y10;
						end
						26 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = y1;
						end
						27 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h2D;			//-
						end
						28 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = mon10;
						end
						29 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = mon1;
						end
						30 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h2D;			//-
						end
						31 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = d10;
						end
						32 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = d1;
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
