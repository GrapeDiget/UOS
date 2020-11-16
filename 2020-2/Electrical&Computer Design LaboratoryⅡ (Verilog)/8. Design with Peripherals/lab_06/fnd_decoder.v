`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:17:16 11/08/2020 
// Design Name: 
// Module Name:    fnd_decoder 
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
module fnd_decoder(bcd, out);
	input [3:0] bcd;
	output reg [7:0] out;
	
	always @(bcd) begin
		case(bcd)
			4'b0000 : out = 8'b11111100; //0
			4'b0001 : out = 8'b01100000; //1
			4'b0010 : out = 8'b11011010; //2
			4'b0011 : out = 8'b11110010; //3
			4'b0100 : out = 8'b01100110; //4
			4'b0101 : out = 8'b10110110; //5
			4'b0110 : out = 8'b10111110; //6
			4'b0111 : out = 8'b11100000; //7
			4'b1000 : out = 8'b11111110; //8
			4'b1001 : out = 8'b11110110; //9
			default : out = 8'b00000000; //default
		endcase
	end

endmodule