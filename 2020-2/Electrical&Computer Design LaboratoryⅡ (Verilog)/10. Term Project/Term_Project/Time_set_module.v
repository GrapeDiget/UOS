`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:13:34 12/01/2020 
// Design Name: 
// Module Name:    Time_set_module 
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
module Time_set_module(RESET, CLK, NUM_SYNC, EN, MERIDIEM, HOUR, MIN, SEC, TIME_SET_DATA);
	input RESET, CLK, EN;
	input [3:0] NUM_SYNC;
	output reg MERIDIEM;
	output reg [6:0] HOUR, MIN, SEC;
	output reg [119:16] TIME_SET_DATA;
	
	//1초를 세기 위한 카운터 변수
	integer cnt;
	
	// 현재 커서를 나타내는 변수
	integer cursor;
	
	// num_sync 입력에 따라 커서의 위치를 변화시킨다.
	always @(*) begin
		if(!RESET)
			cursor = 0;
		else begin
			if(EN) begin
				if(NUM_SYNC[2] == 1 && NUM_SYNC[3] == 0)
					if(cursor == 6)	cursor = 0;
					else					cursor = cursor + 1;
				else if(NUM_SYNC[2] == 0 && NUM_SYNC[3] == 1)
					if(cursor == 0)	cursor = 6;
					else					cursor = cursor - 1;
			end
		end
	end
	
	//en에 따른 작동 변화
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			MERIDIEM = 0;
			HOUR = 0;
			MIN = 0;
			SEC = 0;
		end
		else begin
			if(!EN) begin		//en이 1이라면 시간은 자동으로 늘어난다.
				if(cnt >= 999) begin
					cnt = 0;
					if(SEC >= 59) begin
						SEC = 0;
						if(MIN >= 59) begin
							MIN = 0;
							if(HOUR >= 11) begin 
								HOUR = 0;
								if(MERIDIEM >= 1)	MERIDIEM = 0;
								else					MERIDIEM = MERIDIEM + 1;
							end
							else
								HOUR = HOUR + 1;
						end
						else
							MIN = MIN + 1;
					end
					else
						SEC = SEC + 1;
				end
				else
					cnt = cnt + 1;
			end
			else begin		//en이 1이라면 커서의 위치에 있는 시간값을 변화시킨다.
				if(NUM_SYNC[0] == 1 && NUM_SYNC[1] == 0) begin
					case (cursor)
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
							if(MIN >= 5)	MIN = MIN - 50;
							else				MIN = MIN + 10;
						end
						4 : begin
							if(HOUR == 11)		HOUR = HOUR - 1;
							else if(HOUR == 9)HOUR = HOUR - 9;
							else					HOUR = HOUR + 1;
						end
						5 : begin
							if(HOUR >= 10)		HOUR = HOUR - 10;
							else					HOUR = HOUR + 10;
						end
						6 : begin
							if(MERIDIEM == 1)	MERIDIEM = 0;
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
					case (cursor)
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
							if(HOUR == 11)		HOUR = 10;
							else if(HOUR == 10) HOUR = 11;
							else if(HOUR == 0)HOUR = HOUR + 9;
							else					HOUR = HOUR - 1;
						end
						5 : begin
							if(HOUR >= 10)		HOUR = HOUR - 10;
							else					HOUR = HOUR + 10;
						end
						6 : begin
							if(MERIDIEM == 1)	MERIDIEM = 0;
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
	
	always @(*) begin
		if(!EN) begin
			TIME_SET_DATA[23:16] = 8'h4D;
			TIME_SET_DATA[31:24] = 8'h49;
			TIME_SET_DATA[39:32] = 8'h4E;
			TIME_SET_DATA[47:40] = 8'h48;
			TIME_SET_DATA[55:48] = 8'h4F;
			TIME_SET_DATA[63:56] = 8'h27;
			TIME_SET_DATA[71:64] = 8'h53;
			TIME_SET_DATA[79:72] = 8'h20;
			TIME_SET_DATA[87:80] = 8'h43;
			TIME_SET_DATA[95:88] = 8'h4C;
			TIME_SET_DATA[103:96] = 8'h4F;
			TIME_SET_DATA[111:104] = 8'h43;
			TIME_SET_DATA[119:112] = 8'h4B;
		end
		else begin
			TIME_SET_DATA[23:16] = 8'h20;
			TIME_SET_DATA[31:24] = 8'h20;
			TIME_SET_DATA[39:32] = 8'h20;
			TIME_SET_DATA[47:40] = 8'h20;
			TIME_SET_DATA[55:48] = 8'h20;
			TIME_SET_DATA[63:56] = 8'h20;
			TIME_SET_DATA[71:64] = 8'h20;
			TIME_SET_DATA[79:72] = 8'h20;
			TIME_SET_DATA[87:80] = 8'h20;
			TIME_SET_DATA[95:88] = 8'h20;
			TIME_SET_DATA[103:96] = 8'h20;
			TIME_SET_DATA[111:104] = 8'h20;
			TIME_SET_DATA[119:112] = 8'h20;
			case (cursor)
				0 :	TIME_SET_DATA[119:112] = 8'h19;
				1 :	TIME_SET_DATA[111:104] = 8'h19;
				2 :	TIME_SET_DATA[95:88] = 8'h19;
				3 :	TIME_SET_DATA[87:80] = 8'h19;
				4 :	TIME_SET_DATA[71:64] = 8'h19;
				5 :	TIME_SET_DATA[63:56] = 8'h19;
				6 :	TIME_SET_DATA[39:32] = 8'h19;
				default :	TIME_SET_DATA[119:112] = 8'h19;
			endcase
		end
	end

endmodule
