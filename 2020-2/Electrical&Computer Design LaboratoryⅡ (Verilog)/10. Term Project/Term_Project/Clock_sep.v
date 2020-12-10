`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:34:17 12/01/2020 
// Design Name: 
// Module Name:    Clock_sep 
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
module Clock_sep(NUMBER, N10, N1);
	input [6:0] NUMBER;
	output [7:0] N10, N1;
	
	reg [3:0] number10, number1;
	
	always @(*) begin
		if(NUMBER <= 9) begin
			number10 = 0;
			number1 = NUMBER[3:0];
		end
		else if (NUMBER <= 19) begin
			number10 = 1;
			number1 = NUMBER - 10;
		end
		else if (NUMBER <= 29) begin
			number10 = 2;
			number1 = NUMBER - 20;
		end
		else if (NUMBER <= 39) begin
			number10 = 3;
			number1 = NUMBER - 30;
		end
		else if (NUMBER <= 49) begin
			number10 = 4;
			number1 = NUMBER - 40;
		end
		else if (NUMBER <= 59) begin
			number10 = 5;
			number1 = NUMBER - 50;
		end
		else if (NUMBER <= 69) begin
			number10 = 6;
			number1 = NUMBER - 60;
		end
		else if (NUMBER <= 79) begin
			number10 = 7;
			number1 = NUMBER - 70;
		end
		else if (NUMBER <= 89) begin
			number10 = 8;
			number1 = NUMBER - 80;
		end
		else if (NUMBER <= 99) begin
			number10 = 9;
			number1 = NUMBER - 90;
		end
		else begin
			number10 = 0;
			number1 = 0;
		end
	end
	
	Number_to_code U0 (number10, N10);
	Number_to_code U1 (number1, N1);

endmodule
