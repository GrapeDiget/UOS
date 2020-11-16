`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:56:08 10/04/2020 
// Design Name: 
// Module Name:    four_bit_comparator 
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
module four_bit_comparator(a, b, agb, eq, alb);
	input signed [3:0] a, b;
	output agb, eq, alb;
	reg agb, eq, alb;
	
	always @(*) begin
		if(a > b) begin
			eq <= 0; agb <= 1; alb <= 0;
		end
		else if (a == b) begin
			eq <= 1; agb <= 0; alb <= 0;
		end
		else begin
			eq <= 0; agb <= 0; alb <= 1;
		end
	end
endmodule
