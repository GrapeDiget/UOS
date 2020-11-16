`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:15:29 10/11/2020 
// Design Name: 
// Module Name:    encoder42_2 
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
module encoder42_2(a, y);
	input [3:0] a;
	output reg [1:0] y;
	
	always @(*) begin
		case (a)
			4'b0001 : y = 2'b00;
			4'b0010 : y = 2'b01;
			4'b0100 : y = 2'b10;
			4'b1000 : y = 2'b11;
			default : y = 2'bxx;
		endcase
	end
endmodule
