`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:20:10 10/24/2020
// Design Name:   clock_generator
// Module Name:   E:/OneDrive/my_xilinx/clock_generator/clock_generator_tb.v
// Project Name:  clock_generator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock_generator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clock_generator_tb;

	// Inputs
	reg clk;
	reg resetn;

	// Outputs
	wire main;
	wire two;
	wire four;

	// Instantiate the Unit Under Test (UUT)
	clock_generator uut (
		.clk(clk), 
		.resetn(resetn), 
		.main(main), 
		.two(two), 
		.four(four)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		resetn = 0;

		// Wait 100 ns for global reset to finish
								#5; resetn = 1;
		#5; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;  #5; resetn = 0;
		#5; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;  #5; resetn = 1;
		#5; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
        
		// Add stimulus here

	end
      
endmodule

