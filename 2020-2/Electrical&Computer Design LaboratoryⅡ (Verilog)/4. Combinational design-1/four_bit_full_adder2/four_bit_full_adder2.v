`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:10:42 10/06/2020 
// Design Name: 
// Module Name:    four_bit_full_adder2 
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
module four_bit_full_adder2(a, b, s, c);
	input [3:0] a, b;
	output [3:0] s;
	output c;
	
	assign {c, s} = a + b;

endmodule
