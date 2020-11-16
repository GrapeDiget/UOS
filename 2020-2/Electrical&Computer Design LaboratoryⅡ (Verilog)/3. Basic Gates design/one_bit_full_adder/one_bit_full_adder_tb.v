`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:42:49 09/20/2020
// Design Name:   one_bit_full_adder
// Module Name:   E:/OneDrive/my_xilinx/one_bit_full_adder/one_bit_full_adder_tb.v
// Project Name:  one_bit_full_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: one_bit_full_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module one_bit_full_adder_tb;

	// Inputs
	reg a;
	reg b;
	reg cin;
	integer k;

	// Outputs
	wire s;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	one_bit_full_adder uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.s(s), 
		.cout(cout)
	);

	initial begin
		forever
			for(k = 0; k < 8; k = k+1) begin
				cin = k/4;
				b	 = (k%4)/2;
				a	 = k%2;
				#10;
			end
	end
		      
endmodule

