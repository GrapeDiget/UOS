`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:26:27 10/12/2020 
// Design Name: 
// Module Name:    demux 
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
module demux(f, s1, s2, q);
	input f, s1, s2;
	output reg [3:0] q;
	
	always @(*) begin
		q = 4'b0000;
		if({s1, s2} == 2'b00) 	   q[0] = f;
		else if({s1, s2} == 2'b01)	q[1] = f;
		else if({s1, s2} == 2'b10)	q[2] = f;
		else                     	q[3] = f;
	end
endmodule
