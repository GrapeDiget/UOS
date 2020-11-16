`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:41:16 09/20/2020
// Design Name:   my_xor
// Module Name:   E:/OneDrive/my_xilinx/my_xor/my_xor_td.v
// Project Name:  my_xor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: my_xor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module my_xor_td;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire x;

	// Instantiate the Unit Under Test (UUT)
	my_xor uut (
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

