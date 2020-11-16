`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:35:09 10/12/2020 
// Design Name: 
// Module Name:    application1 
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
module application1(a, b, c, d, f);
	input a, b, c, d;
	output reg f;
	
	always @(*) begin
		if({a, b, c, d} == 4'b0010)      f = 1'b1;
		else if({a, b, c, d} == 4'b0101) f = 1'b1;
		else if({a, b, c, d} == 4'b0111) f = 1'b1;
		else if({a, b, c, d} == 4'b1011) f = 1'b1;
		else if({a, b, c, d} == 4'b1101) f = 1'b1;
		else if({a, b, c, d} == 4'b1110) f = 1'b1;
		else  									f = 1'b0;
	end
endmodule
