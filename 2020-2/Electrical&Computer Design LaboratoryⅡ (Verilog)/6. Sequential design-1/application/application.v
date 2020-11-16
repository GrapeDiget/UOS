`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:49:42 10/24/2020 
// Design Name: 
// Module Name:    application 
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
module application(clk, resetn, q);
	input clk, resetn;
	output reg [4:0] q;
	
	always @(negedge resetn or posedge clk) begin
		if(~resetn)
			q <= 5'b10111;
		else begin
			q[0:3] <= q[1:4];
			q[4] <= (q[3] != q[0]);
		end
	end

endmodule
