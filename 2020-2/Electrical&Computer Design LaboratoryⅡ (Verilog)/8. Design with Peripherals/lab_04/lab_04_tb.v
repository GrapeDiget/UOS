`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:43:29 11/08/2020
// Design Name:   lab_04
// Module Name:   E:/OneDrive/my_xilinx/lab_04/lab_04_tb.v
// Project Name:  lab_04
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab_04
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab_04_tb;

	// Inputs
	reg clk_1k;
	reg resetn;

	// Outputs
	wire [3:0] seg_com;
	wire [7:0] seg_data;

	// Instantiate the Unit Under Test (UUT)
	lab_04 uut (
		.clk_1k(clk_1k), 
		.resetn(resetn), 
		.seg_com(seg_com), 
		.seg_data(seg_data)
	);
	
	always begin
		#10 clk_1k = ~clk_1k;
	end
	
	initial begin
		// Initialize Inputs
		clk_1k = 0;
		resetn = 0;

		#5 resetn = 1;

	end
      
endmodule

