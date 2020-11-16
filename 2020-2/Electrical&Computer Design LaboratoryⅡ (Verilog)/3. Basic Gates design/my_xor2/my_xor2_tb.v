`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:46:02 09/20/2020
// Design Name:   my_xor2
// Module Name:   E:/OneDrive/my_xilinx/my_xor2/my_xor2_tb.v
// Project Name:  my_xor2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: my_xor2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module my_xor2_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire x;

	// Instantiate the Unit Under Test (UUT)
	my_xor2 uut (
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

