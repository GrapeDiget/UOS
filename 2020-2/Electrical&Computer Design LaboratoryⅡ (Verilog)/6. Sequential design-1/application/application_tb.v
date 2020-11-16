`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:56:43 10/24/2020
// Design Name:   application
// Module Name:   E:/OneDrive/my_xilinx/application/application_tb.v
// Project Name:  application
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: application
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module application_tb;

	// Inputs
	reg clk;
	reg resetn;

	// Outputs
	wire [4:0] q;

	// Instantiate the Unit Under Test (UUT)
	application uut (
		.clk(clk), 
		.resetn(resetn), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		resetn = 0;

		// Wait 100 ns for global reset to finish
		#10; clk <= !clk; resetn = 1;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
		#10; clk <= !clk;
        
		// Add stimulus here

	end
      
endmodule

