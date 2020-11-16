`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:37:43 09/20/2020 
// Design Name: 
// Module Name:    one_bit_full_adder 
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
module one_bit_full_adder(a, b, cin, s, cout);
	input a, b, cin;
	output s, cout;
	wire w1, w2, w3;
	
	xor (w1, a, b);
	xor (s, w1, cin);
	
	and (w2, w1, cin);
	and (w3, a, b);
	or (cout, w2, w3);
endmodule
