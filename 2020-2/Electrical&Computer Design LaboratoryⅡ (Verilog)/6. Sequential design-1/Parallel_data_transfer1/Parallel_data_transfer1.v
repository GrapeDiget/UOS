`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:50:21 10/24/2020 
// Design Name: 
// Module Name:    Parallel_data_transfer1 
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
module Parallel_data_transfer1(data_in, clk, a, b);
	input [3:0] data_in;
	input clk;
	output reg [3:0] a, b;
	
	always @ (posedge clk) begin
		a = data_in;
	end
	
	always @ (posedge clk) begin
		b = a;
	end
endmodule
