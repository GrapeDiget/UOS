`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:37:59 10/04/2020
// Design Name:   half_adder
// Module Name:   E:/OneDrive/my_xilinx/lab4_full_adder/half_adder_tb.v
// Project Name:  lab4_full_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: half_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module half_adder_tb;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire s;
	wire c;

	// Instantiate the Unit Under Test (UUT)
	half_adder uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		
		// Add stimulus here
		#100 a <= 1; b <= 0;
		#100 a <= 0; b <= 1;
		#100 a <= 1; b <= 1;
        
	end
      
endmodule

