`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:31:15 09/20/2020 
// Design Name: 
// Module Name:    four_bit_xor3 
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
module four_bit_xor3(a, b, x);
	input [3:0] a, b;
	output [3:0] x;
	reg [3:0] x;
	integer i;
	
	always @(a, b) begin
		for(i=0; i<4; i= i+1) begin
			if (a[i] != b[i])
				x[i] = 1;
			else
				x[i] = 0;
		end
	end
endmodule
