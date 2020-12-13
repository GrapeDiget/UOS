`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:20:15 12/06/2020 
// Design Name: 
// Module Name:    Mode_time_set 
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
module Mode_time_set(RESET, CLK, NUM_SYNC, MODE, CURSOR, MERIDIEM, HOUR, MIN, SEC);
	input RESET, CLK;
	input [3:0] NUM_SYNC, MODE;
	output reg [2:0] CURSOR;
	output reg MERIDIEM;
	output reg [6:0] HOUR, MIN, SEC;
	
	// num_sync 입력에 따라 커서의 위치를 변화시킨다.
	always @(negedge RESET or posedge CLK) begin
		if(!RESET)
			CURSOR = 0;
		else begin
			if(MODE == 4'b0000) begin
				if(NUM_SYNC[2] == 1 && NUM_SYNC[3] == 0) begin
					if(CURSOR == 6)	CURSOR = 0;
					else					CURSOR = CURSOR + 1;
				end
				else if(NUM_SYNC[2] == 0 && NUM_SYNC[3] == 1) begin
					if(CURSOR == 0)	CURSOR = 6;
					else					CURSOR = CURSOR - 1;
				end
			end
			else
				CURSOR = 0;
		end
	end
	
	//커서의 위치에 있는 시간값을 변화시킨다.
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			MERIDIEM = 0;
			HOUR = 0;
			MIN = 0;
			SEC = 0;
		end
		else begin
			if(MODE == 4'b0000) begin
				if(NUM_SYNC[0] == 1 && NUM_SYNC[1] == 0) begin
					case (CURSOR)
						0 : begin
							if(SEC == 9 || SEC == 19 || SEC == 29 || SEC == 39 || SEC == 49 || SEC == 59)
								SEC = SEC - 9;
							else					SEC = SEC + 1;
						end
						1 : begin
							if(SEC >= 50)	SEC = SEC - 50;
							else				SEC = SEC + 10;
						end
						2 : begin
							if(MIN == 9 || MIN == 19 || MIN == 29 || MIN == 39 || MIN == 49 || MIN == 59)
								MIN = MIN - 9;
							else					MIN = MIN + 1;
						end
						3 : begin
							if(MIN >= 50)	MIN = MIN - 50;
							else				MIN = MIN + 10;
						end
						4 : begin
							if(HOUR >= 11)		HOUR = 10;
							else if(HOUR == 9)HOUR = HOUR - 9;
							else					HOUR = HOUR + 1;
						end
						5 : begin
							if(HOUR >= 10)		HOUR = HOUR - 10;
							else if(HOUR >= 3)HOUR = HOUR;
							else					HOUR = HOUR + 10;
						end
						6 : begin
							if(MERIDIEM >= 1)	MERIDIEM = 0;
							else					MERIDIEM = 1;
						end
						default : begin
							MERIDIEM = 0;
							HOUR = 0;
							MIN = 0;
							SEC = 0;
						end
					endcase
				end
				else if(NUM_SYNC[0] == 0 && NUM_SYNC[1] == 1) begin
					case (CURSOR)
						0 : begin
							if(SEC == 0 || SEC == 10 || SEC == 20 || SEC == 30 || SEC == 40 || SEC == 50)
								SEC = SEC + 9;
							else					SEC = SEC - 1;
						end
						1 : begin
							if(SEC < 10)		SEC = SEC + 50;
							else					SEC = SEC - 10;
						end
						2 : begin
							if(MIN == 0 || MIN == 10 || SEC == 20 || SEC == 30 || SEC == 40 || SEC == 50)
								MIN = MIN + 9;
							else					MIN = MIN - 1;
						end
						3 : begin
							if(MIN < 0)			MIN = MIN + 50;
							else					MIN = MIN - 10;
						end
						4 : begin
							if(HOUR >= 11)		HOUR = 10;
							else if(HOUR == 10)	HOUR = 11;
							else if(HOUR == 0)HOUR = HOUR + 9;
							else					HOUR = HOUR - 1;
						end
						5 : begin
							if(HOUR >= 10)		HOUR = HOUR - 10;
							else if(HOUR >= 3)HOUR = HOUR;
							else					HOUR = HOUR + 10;
						end
						6 : begin
							if(MERIDIEM >= 1)	MERIDIEM = 0;
							else					MERIDIEM = 1;
						end
						default : begin
							MERIDIEM = 0;
							HOUR = 0;
							MIN = 0;
							SEC = 0;
						end
					endcase
				end
			end
		end
	end

endmodule
