`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:23:08 10/04/2020 
// Design Name: 
// Module Name:    full_adder 
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
module full_adder(a, b, cin, s, cout);
	input a, b, cin;
	output s, cout;
	
	wire s1;
	wire c1, c2;
	
	half_adder U1 (.a(a), .b(b), .s(s1), .c(c1));
	half_adder U2 (.a(cin), .b(s1), .s(s), .c(c2));
	
	assign cout = c1 | c2;
	
endmodule
