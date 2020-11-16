`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:43:42 10/04/2020 
// Design Name: 
// Module Name:    four_bit_full_adder 
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
module four_bit_full_adder(a, b, s, c);
	input [3:0] a, b;
	output [3:0] s;
	output c;
	reg [3:0] s;
	reg c;
	
	always @(*) begin
		s = a + b;
		if(a+b > 5'b01111)
			c = 1'b1;
		else
			c = 1'b0;
	end
endmodule
