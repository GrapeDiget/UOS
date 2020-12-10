`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:09:14 12/01/2020 
// Design Name: 
// Module Name:    Time_module 
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
module Time_module(RESET, CLK, NUM_SYNC, MODE, TIME_DATA, MERIDIEM, HOUR, MIN, SEC);
	input RESET, CLK;
	input [3:0] NUM_SYNC, MODE;
	output [255:0] TIME_DATA;
	output MERIDIEM;
	output [6:0] HOUR, MIN, SEC;
	
	//Time_set_module의 enable이 될 값 생성
	reg en;
	always @(*) begin
		if(MODE == 4'b0001)	en = 1;
		else						en = 0;
	end	
	
	//LINE1에 들어갈 내용
	wire [119:16] time_set_data;
	
	//하위 모듈을 통해 시간 정보와 LCD_DATA 정보를 입력받는다.
	Time_set_module module1 (RESET, CLK, NUM_SYNC, en, MERIDIEM, HOUR, MIN, SEC, time_set_data);
	
	//MERIDIEM, HOUR, MIN, SEC을 1자리의 십진수 숫자로 변환할 변수
	reg [7:0] mer;
	wire [7:0] h10, h1, m10, m1, s10, s1;
	
	//mer, h10, h1, m1, m10, s10, s1에 값을 입력
	always @(*) begin
		if(!RESET)
			mer = 8'h41;
		else begin
			if(MERIDIEM)
				mer = 8'h50;
			else
				mer = 8'h41;
		end
	end
		
	Clock_sep U0 (HOUR, h10, h1);
	Clock_sep U1 (MIN, m10, m1);
	Clock_sep U2 (SEC, s10, s1);
	
	//mer, h10, h1, m1, m10, s10, s1을 이용하여 LCD_DATA에 들어갈 값 지정
	assign TIME_DATA[7:0] = 8'h20,
 			 TIME_DATA[15:8] = 8'h20,
			 TIME_DATA[23:16] = time_set_data[23:16],
			 TIME_DATA[31:24] = time_set_data[31:24],
			 TIME_DATA[39:32] = time_set_data[39:32],
			 TIME_DATA[47:40] = time_set_data[47:40],
			 TIME_DATA[55:48] = time_set_data[55:48],
			 TIME_DATA[63:56] = time_set_data[63:56],
			 TIME_DATA[71:64] = time_set_data[71:64],
			 TIME_DATA[79:72] = time_set_data[79:72],
			 TIME_DATA[87:80] = time_set_data[87:80],
			 TIME_DATA[95:88] = time_set_data[95:88],
			 TIME_DATA[103:96] = time_set_data[103:96],
			 TIME_DATA[111:104] = time_set_data[111:104],
			 TIME_DATA[119:112] = time_set_data[119:112],
			 TIME_DATA[127:120] = 8'h20,
			 TIME_DATA[135:128] = 8'h20,
			 TIME_DATA[143:136] = 8'h20,
			 TIME_DATA[151:144] = 8'h20,
			 TIME_DATA[159:152] = 8'h20,
			 TIME_DATA[167:160] = mer,
			 TIME_DATA[175:168] = 8'h4D,
			 TIME_DATA[183:176] = 8'h20,
			 TIME_DATA[191:184] = h10,
			 TIME_DATA[199:192] = h1,
			 TIME_DATA[207:200] = 8'h3A,
			 TIME_DATA[215:208] = m10,
			 TIME_DATA[223:216] = m1,
			 TIME_DATA[231:224] = 8'h3A,
			 TIME_DATA[239:232] = s10,
			 TIME_DATA[247:240] = s1,
			 TIME_DATA[255:248] = 8'h20;
	 
endmodule
