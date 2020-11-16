`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:24:28 09/19/2020
// Design Name:   my_and4
// Module Name:   E:/OneDrive/my_xilinx/my_and4/my_and4_tb.v
// Project Name:  my_and4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: my_and4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module my_and4_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire x;

	// Instantiate the Unit Under Test (UUT)
	my_and4 uut (
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

