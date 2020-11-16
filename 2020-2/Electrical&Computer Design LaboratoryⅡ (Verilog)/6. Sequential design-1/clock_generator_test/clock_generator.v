`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:49:20 10/24/2020 
// Design Name: 
// Module Name:    clock_generator 
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
module clock_generator(clk, resetn, main, two, four);
	input clk, resetn;
	output reg two, four;
	output main;
	
	reg [1:0] cnt;
	
	always @ (negedge resetn, posedge clk) begin
		if(~resetn) begin
			cnt = 0;
			two = 0;
			four = 0;
		end
		else begin
			if(cnt == 2) begin
				cnt = 0;
				four = !four;
			end
			cnt = cnt + 1;
			two = !two;
		end
	end
	
	assign main = resetn*clk;

endmodule
