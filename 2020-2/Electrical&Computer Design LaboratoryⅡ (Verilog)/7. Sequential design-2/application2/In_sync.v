`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:08:44 11/03/2020 
// Design Name: 
// Module Name:    In_sync 
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
module In_sync(in, clk, in_sync);
	input in, clk;
	output reg in_sync;
	
	reg cnt;
	
	always @(negedge clk) begin
		if(in == 1) begin
			in_sync <= in * !cnt;
			cnt <= 1;
		end
		else begin
			in_sync <= 0;
			cnt <= 0;
		end
	end

endmodule
