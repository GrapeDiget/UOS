`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:10:27 09/19/2020
// Design Name:   my_and3
// Module Name:   E:/OneDrive/my_xilinx/my_and3/my_and3_tb.v
// Project Name:  my_and3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: my_and3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module my_and3_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire x;

	// Instantiate the Unit Under Test (UUT)
	my_and3 uut (
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

