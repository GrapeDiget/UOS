`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:43:38 10/24/2020 
// Design Name: 
// Module Name:    sipo4 
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
module sipo4(clk, resetn, data_in, q);
	input clk, resetn;
	input data_in;
	output reg [3:0] q;
	
	always @ (negedge resetn or posedge clk) begin
		if(~resetn)
			q <= 4'b0000;
		else begin
			q[2:0] <= q[3:1];
			q[3] <= data_in;
		end
	end
	
endmodule
