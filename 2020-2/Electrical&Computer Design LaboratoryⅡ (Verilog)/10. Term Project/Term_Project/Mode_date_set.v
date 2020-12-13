`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:57:37 12/06/2020 
// Design Name: 
// Module Name:    Mode_date_set 
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
module Mode_date_set(RESET, CLK, NUM_SYNC, MODE, CURSOR, YEAR1000, YEAR100, YEAR10, YEAR1, MONTH, DAY);
	input RESET, CLK;
	input [3:0] NUM_SYNC, MODE;
	output reg [2:0] CURSOR;
	output reg [3:0] YEAR1000, YEAR100, YEAR10, YEAR1;
	output reg [6:0] MONTH;
	output reg [6:0] DAY;
	
	//윤년 및 윤일 지정
	reg leap_year;
	
	always @(*) begin
		if(!RESET)
			leap_year = 0;	//기본적으로 평년으로 가정
		else begin
			if(YEAR1000[0] == 0 && (YEAR100 == 0 || YEAR100 == 4 || YEAR100 == 8) && YEAR10 == 0 && YEAR1 == 0)	//400으로 나누어 떨어지면 윤년
				leap_year = 1;
			else if(YEAR1000[0] == 1 && (YEAR100 == 2 || YEAR100 == 6) && YEAR10 == 0 && YEAR1 == 0)					//400으로 나누어 떨어지면 윤년
				leap_year = 1;
			else if(YEAR10 == 0 && YEAR1 == 0)	//100으로 나누어 떨어지면 평년
				leap_year = 0;
			else if(YEAR10[0] == 0 && (YEAR1 == 0 || YEAR1 == 4 || YEAR1 == 8))	//4로 나누어 떨어지면 윤년
				leap_year = 1;
			else if(YEAR10[0] == 1 && (YEAR1 == 2 || YEAR1 == 6))						//4로 나누어 떨어지면 윤년
				leap_year = 1;
			else
				leap_year = 0;		//그 외의 해는 모두 평년
		end
	end
	
	// num_sync 입력에 따라 커서의 위치를 변화시킨다.
	always @(negedge RESET or posedge CLK) begin
		if(!RESET)
			CURSOR = 0;
		else begin
			if(MODE == 4'b0000) begin
				if(NUM_SYNC[2] == 1 && NUM_SYNC[3] == 0) begin
					if(CURSOR == 7)	CURSOR = 0;
					else					CURSOR = CURSOR + 1;
				end
				else if(NUM_SYNC[2] == 0 && NUM_SYNC[3] == 1) begin
					if(CURSOR == 0)	CURSOR = 7;
					else					CURSOR = CURSOR - 1;
				end
			end
		end
	end
	
	//커서의 위치에 있는 날짜를 변화시킨다.
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			YEAR1000 = 2;
			YEAR100 = 0;
			YEAR10 = 2;
			YEAR1 = 0;
			MONTH = 1;
			DAY = 1;
		end
		else begin
			if(MODE == 4'b0000) begin
				if(NUM_SYNC[0] == 1 && NUM_SYNC[1] == 0) begin
					case (CURSOR)
						0 : begin
							if(DAY >= 28 && MONTH == 2 && leap_year == 0)
								DAY = 20;
							else if(DAY == 9 || DAY == 19 || DAY == 29)
								DAY = DAY - 9;
							else if(DAY == 30 && (MONTH == 4 || MONTH == 6 || MONTH == 9 || MONTH == 11))
								DAY = DAY;
							else if(DAY == 31)
								DAY = 30;
							else	DAY = DAY + 1;
						end
						1 : begin
							if(DAY >= 30)	DAY = DAY - 30;
							else				DAY = DAY + 10;
						end
						2 : begin
							if(MONTH >= 12)		MONTH = 10;
							else if(MONTH == 9)	MONTH = 1;
							else						MONTH = MONTH + 1;
						end
						3 : begin
							if(MONTH >= 10)		MONTH = MONTH - 10;
							else if(MONTH >= 3)	MONTH = MONTH;
							else						MONTH = MONTH + 10;
						end
						4 : begin
							if(YEAR1 >= 9)		YEAR1 = 0;
							else					YEAR1 = YEAR1 + 1;
						end
						5 : begin
							if(YEAR10 >= 9)	YEAR10 = 0;
							else					YEAR10 = YEAR10 + 1;
						end
						6 : begin
							if(YEAR100 >= 9)	YEAR100 = 0;
							else					YEAR100 = YEAR100 + 1;
						end
						7 : begin
							if(YEAR1000 >= 9)	YEAR1000 = 0;
							else					YEAR1000 = YEAR1000 + 1;
						end
						default : begin
							YEAR1000 = 2;
							YEAR100 = 0;
							YEAR10 = 2;
							YEAR1 = 0;
							MONTH = 1;
							DAY = 1;
						end
					endcase
				end
				else if(NUM_SYNC[0] == 0 && NUM_SYNC[1] == 1) begin
					case (CURSOR)
						0 : begin
							if(DAY == 20 && MONTH == 2 && leap_year == 0)
								DAY = 28;
							else if(DAY == 0 || DAY == 10 || DAY == 20)
								DAY = DAY + 9;
							else if(DAY == 30 && (MONTH == 4 || MONTH == 6 || MONTH == 9 || MONTH == 11))
								DAY = DAY;
							else if(DAY == 31)
								DAY = 30;
							else	DAY = DAY - 1;
						end
						1 : begin
							if(DAY < 10)	DAY = DAY + 30;
							else				DAY = DAY - 10;
						end
						2 : begin
							if(MONTH <= 1)			MONTH = 9;
							else if(MONTH == 10)	MONTH = 11;
							else						MONTH = MONTH - 1;
						end
						3 : begin
							if(MONTH >= 10)		MONTH = MONTH - 10;
							else if(MONTH >= 3)	MONTH = MONTH;
							else						MONTH = MONTH + 10;
						end
						4 : begin
							if(YEAR1 <= 0)		YEAR1 = 9;
							else					YEAR1 = YEAR1 - 1;
						end
						5 : begin
							if(YEAR10 <= 0)	YEAR10 = 9;
							else					YEAR10 = YEAR10 - 1;
						end
						6 : begin
							if(YEAR100 <= 0)	YEAR100 = 9;
							else					YEAR100 = YEAR100 - 1;
						end
						7 : begin
							if(YEAR1000 <= 0)	YEAR1000 = 9;
							else					YEAR1000 = YEAR1000 - 1;
						end
						default : begin
							YEAR1000 = 2;
							YEAR100 = 0;
							YEAR10 = 2;
							YEAR1 = 0;
							MONTH = 1;
							DAY = 1;
						end
					endcase
				end
			end
		end
	end
	
endmodule
