`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:38:21 10/12/2020
// Design Name:   application1
// Module Name:   E:/OneDrive/my_xilinx/application1/application1_tb.v
// Project Name:  application1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: application1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module application1_tb;

	// Inputs
	reg a;
	reg b;
	reg c;
	reg d;

	// Outputs
	wire f;

	// Instantiate the Unit Under Test (UUT)
	application1 uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.f(f)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;
		d = 0;

		// Wait 100 ns for global reset to finish
		#100;	{a, b, c, d} <= 4'b0001;
		#100;	{a, b, c, d} <= 4'b0010;
		#100;	{a, b, c, d} <= 4'b0101;
		#100;	{a, b, c, d} <= 4'b1001;
		#100;	{a, b, c, d} <= 4'b1111;
		#100;	{a, b, c, d} <= 4'b0000;
        
		// Add stimulus here

	end
      
endmodule

