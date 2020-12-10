`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:42:22 12/01/2020 
// Design Name: 
// Module Name:    Number_to_code 
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
module Number_to_code(NUMBER, CODE);
	input [3:0] NUMBER;
	output reg [7:0] CODE;
	
	always @(NUMBER) begin
		case(NUMBER)
			4'd0 : CODE = 8'h30;
			4'd1 : CODE = 8'h31;
			4'd2 : CODE = 8'h32;
			4'd3 : CODE = 8'h33;
			4'd4 : CODE = 8'h34;
			4'd5 : CODE = 8'h35;
			4'd6 : CODE = 8'h36;
			4'd7 : CODE = 8'h37;
			4'd8 : CODE = 8'h38;
			4'd9 : CODE = 8'h39;
			default : CODE = 8'h20;
		endcase
	end
	
endmodule
