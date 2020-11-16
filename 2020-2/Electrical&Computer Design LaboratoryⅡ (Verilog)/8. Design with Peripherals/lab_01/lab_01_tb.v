`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:49:13 11/08/2020
// Design Name:   lab_01
// Module Name:   E:/OneDrive/my_xilinx/lab_01/lab_01_tb.v
// Project Name:  lab_01
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab_01
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab_01_tb;

	// Inputs
	reg clk;
	reg resetn;

	// Outputs
	wire a;
	wire b;
	wire c;
	wire d;
	wire e;
	wire f;
	wire g;

	// Instantiate the Unit Under Test (UUT)
	lab_01 uut (
		.clk(clk), 
		.resetn(resetn), 
		.a(a), 
		.b(b), 
		.c(c), 
		.d(d), 
		.e(e), 
		.f(f), 
		.g(g)
	);
	
	always begin
		#10 clk = !clk;
	end

	initial begin
		// Initialize Inputs
		clk = 0;
		resetn = 0;

		#5 resetn = 1;

	end
      
endmodule

