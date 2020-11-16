`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:31:16 10/11/2020 
// Design Name: 
// Module Name:    decoder38 
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
module decoder38(a, b, c, out);
	input a, b, c;
	output reg [7:0] out;
	
	always @(*) begin
		if({a, b, c} == 3'b000)		  out = 8'b00000001;
		else if({a, b, c} == 3'b001) out = 8'b00000010;
		else if({a, b, c} == 3'b010) out = 8'b00000100;
		else if({a, b, c} == 3'b011) out = 8'b00001000;
		else if({a, b, c} == 3'b100) out = 8'b00010000;
		else if({a, b, c} == 3'b101) out = 8'b00100000;
		else if({a, b, c} == 3'b110) out = 8'b01000000;
		else 								  out = 8'b10000000;
	end
endmodule
