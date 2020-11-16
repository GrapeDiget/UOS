`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:55:16 09/19/2020
// Design Name:   my_and2
// Module Name:   E:/OneDrive/my_xilinx/my_and2/my_and2_tb.v
// Project Name:  my_and2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: my_and2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module my_and2_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire x;

	// Instantiate the Unit Under Test (UUT)
	my_and2 uut (
		.a(a), 
		.b(b), 
		.x(x)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100 a <= 1;	b <= 0;
		#100 a <= 0;   b <= 1;
		#100 a <= 1;	b <= 1;        
		// Add stimulus here

	end
      
endmodule

