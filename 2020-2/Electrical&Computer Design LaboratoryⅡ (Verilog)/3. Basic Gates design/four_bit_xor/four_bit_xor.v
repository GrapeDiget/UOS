`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:53:18 09/20/2020 
// Design Name: 
// Module Name:    four_bit_xor 
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
module four_bit_xor(a, b, x);
	input [3:0] a, b;
	output [3:0] x;
	
	assign x = a ^ b;
endmodule
