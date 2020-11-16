`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:23:58 10/04/2020
// Design Name:   full_adder
// Module Name:   E:/OneDrive/my_xilinx/lab4_full_adder2/full_adder_tb.v
// Project Name:  lab4_full_adder2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_adder_tb;

	// Inputs
	reg a;
	reg b;
	reg cin;

	// Outputs
	wire s;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	full_adder uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.s(s), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		cin = 0;

		// Wait 100 ns for global reset to finish
		#100 a <= 1; b <= 0;
		#100 a <= 0; b <= 1;
		#100 a <= 1; b <= 1;
		#100 a <= 0; b <= 0; cin <= 1;
		#100 a <= 1; b <= 0;
		#100 a <= 0; b <= 1;
		#100 a <= 1; b <= 1;
	end
      
endmodule

