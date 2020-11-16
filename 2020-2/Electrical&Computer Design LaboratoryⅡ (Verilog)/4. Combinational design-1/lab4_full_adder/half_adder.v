`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:35:12 10/04/2020 
// Design Name: 
// Module Name:    half_adder 
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
module half_adder(a, b, s, c);
	input a, b;
	output s, c;
	reg s, c;
	
	always @(*) begin
		if(a == b)
			s = 1'b0;
		else
			s = 1'b1;
		
		if(a == 1 && b == 1)
			c = 1'b1;
		else
			c = 1'b0;
	end
	
endmodule
