`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:01:06 10/11/2020 
// Design Name: 
// Module Name:    decoder24 
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
module decoder24(a, y);
	input [1:0] a;
	output reg [3:0] y;
	
	always @(*) begin
		case (a)
			2'b00: y = 4'b0001;
			2'b01: y = 4'b0010;
			2'b10: y = 4'b0100;
			2'b11: y = 4'b1000;
		endcase
	end
endmodule
