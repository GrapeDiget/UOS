`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:44:46 10/12/2020 
// Design Name: 
// Module Name:    application2 
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
module application2(a, b, c, d, f);
	input a, b, c, d;
	output f;
	
	assign f = ({a, b, c, d} == 4'b0010) || 
				  ({a, b, c, d} == 4'b0101) || 
				  ({a, b, c, d} == 4'b0111) || 
				  ({a, b, c, d} == 4'b1011) || 					
				  ({a, b, c, d} == 4'b1101) || 
				  ({a, b, c, d} == 4'b1110)	? 1 : 0;
endmodule
