`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:46:31 11/08/2020
// Design Name:   lab_06
// Module Name:   E:/OneDrive/my_xilinx/lab_06/lab_06_tb.v
// Project Name:  lab_06
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab_06
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab_06_tb;

	// Inputs
	reg clk_1;
	reg clk_1k;
	reg resetn;
	reg [1:0] mode_in;
	reg [7:0] data_in;
	reg load;

	// Outputs
	wire [1:0] mode_out;
	wire [3:0] seg_com;
	wire [7:0] seg_data;

	// Instantiate the Unit Under Test (UUT)
	lab_06 uut (
		.clk_1(clk_1), 
		.clk_1k(clk_1k), 
		.resetn(resetn), 
		.mode_in(mode_in), 
		.mode_out(mode_out), 
		.data_in(data_in), 
		.load(load), 
		.seg_com(seg_com), 
		.seg_data(seg_data)
	);
	
	always begin
		#1 clk_1k = ~clk_1k;
	end
	
	always begin
		#10 clk_1 = ~clk_1;
	end

	initial begin
		// Initialize Inputs
		clk_1 = 0;
		clk_1k = 0;
		resetn = 0;
		mode_in = 0;
		data_in = 0;
		load = 0;
		
		#5 resetn = 1;
		#300 data_in = 8'b11000000;
		#50 load = 1;
		#50 load = 0;
		#300 mode_in = 2'b01;
		#5 mode_in = 0;

        

	end
      
endmodule

