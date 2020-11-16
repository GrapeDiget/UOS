`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:48:31 09/20/2020 
// Design Name: 
// Module Name:    my_xor3 
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
module my_xor3(a, b, x);
	input a, b;
	output x;
	reg x;
	
	always @(a, b) begin
		if(a != b)
			x = 1'b1;
		else
			x = 1'b0;
	end
endmodule
