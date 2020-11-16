`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:24:39 11/08/2020
// Design Name:   lab_05
// Module Name:   E:/OneDrive/my_xilinx/lab_05/lab_05_tb.v
// Project Name:  lab_05
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab_05
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab_05_tb;

	// Inputs
	reg clk_1k;
	reg resetn;
	reg [7:0] binary;

	// Outputs
	wire [3:0] seg_com;
	wire [7:0] seg_data;

	// Instantiate the Unit Under Test (UUT)
	lab_05 uut (
		.clk_1k(clk_1k), 
		.resetn(resetn), 
		.binary(binary), 
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
		binary = 0;

		#5 resetn = 1;
		#5 binary = 8'b11000000;
		#200 binary = 8'b11000000;
		#200 binary = 8'b10000001;
		#200 binary = 8'b10000000;
		#200 binary = 8'b00000000;
		
		
		
	end
      
endmodule

