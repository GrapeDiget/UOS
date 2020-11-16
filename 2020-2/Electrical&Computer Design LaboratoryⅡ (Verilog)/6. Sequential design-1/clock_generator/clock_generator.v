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
	output reg main, two, four;
	
	reg [2:0] cnt;
	
	always @ (negedge resetn, posedge clk) begin
		if(~resetn) begin
			cnt <= 0;
			main <= 0;
			two <= 0;
			four <= 0;
		end
		else begin
			if(cnt == 4) begin
				cnt <= 1;
				main <= main + 1;
				two <= two + 1;
				four <= four + 1;
			end
			else if(cnt == 2) begin
				cnt <= cnt + 1;
				main <= main + 1;
				two <= two + 1;
			end
			else begin
				cnt <= cnt + 1;
				main <= main + 1;
			end
		end
	end

endmodule
