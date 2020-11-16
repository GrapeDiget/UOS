`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:46:45 10/11/2020 
// Design Name: 
// Module Name:    mux 
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
module mux(a, b, s, q);
	input [1:0] a, b;
	input s;
	output reg [1:0] q;
	
	always @(*) begin
		case(s)
			1'b0 : 	 q = a;
			1'b1 : 	 q = b;
			default : q = 2'bxx;
		endcase
	end
endmodule
