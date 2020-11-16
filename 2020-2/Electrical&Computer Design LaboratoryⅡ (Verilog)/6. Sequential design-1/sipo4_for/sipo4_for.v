`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:57:05 10/24/2020 
// Design Name: 
// Module Name:    sipo4_for 
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
module sipo4_for(clk, resetn, data_in, q);
	input clk, resetn;
	input data_in;
	output reg [3:0] q;
	
	integer i;
	
	always @ (negedge resetn or posedge clk) begin
		if (~resetn)
			q <= 4'b0000;
		else begin
			for(i = 0; i < 3; i = i+1)
				q[i] <= q[i+1];
			q[3] <= data_in;
		end
	end

endmodule
