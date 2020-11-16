`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:08:14 10/24/2020 
// Design Name: 
// Module Name:    four_bit_counter 
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
module four_bit_counter(clk, resetn, en, mode, data_in, load, q);
	input clk, resetn, en, mode, load;
	input [3:0] data_in;
	output reg [3:0] q;
	
	always @ (negedge resetn or posedge clk) begin
		if(~resetn)
			q <= 4'b0000;
		else begin
			if(load == 1)
				q <= data_in;
			else begin
				if(en == 1) begin
					if(mode == 1)
						q <= q + 1;
					else
						q <= q - 1;
				end
			end
		end
	end
	
endmodule
