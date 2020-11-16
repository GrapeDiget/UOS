`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:18:39 09/19/2020 
// Design Name: 
// Module Name:    my_and4 
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
module my_and4(a, b, x);
	input a, b;
	output x;
	reg x;
	
	always @(a, b) begin
	if(a == 1 && b == 1)
		x = 1'b1;
	else
		x = 1'b0;
	end
endmodule
