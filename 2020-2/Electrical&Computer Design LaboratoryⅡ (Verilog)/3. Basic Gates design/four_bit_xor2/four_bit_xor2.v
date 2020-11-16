`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:21:18 09/20/2020 
// Design Name: 
// Module Name:    four_bit_xor2 
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
module four_bit_xor2(a, b, x);
	input [3:0] a, b;
	output [3:0] x;
	
	xor u0(x[0], a[0], b[0]), (x[1], a[1], b[1]), (x[2], a[2], b[2]), (x[3], a[3], b[3]);
endmodule
