`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:19:30 10/24/2020
// Design Name:   Parallel_data_transfer2
// Module Name:   E:/OneDrive/my_xilinx/Parallel_data_transfer2/Parallel_data_transfer2_tb.v
// Project Name:  Parallel_data_transfer2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Parallel_data_transfer2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Parallel_data_transfer2_tb;

	// Inputs
	reg [3:0] data_in;
	reg clk;

	// Outputs
	wire [3:0] a;
	wire [3:0] b;

	// Instantiate the Unit Under Test (UUT)
	Parallel_data_transfer2 uut (
		.data_in(data_in), 
		.clk(clk), 
		.a(a), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;
		clk = 0;

		#50 clk = !clk; #25 data_in = 0;
		#25 clk = !clk; #25 data_in = 1;
		#25 clk = !clk; #25 data_in = 2;
		#25 clk = !clk; #25 data_in = 3;
		#25 clk = !clk; #25 data_in = 4;
		#25 clk = !clk; #25 data_in = 5;
		#25 clk = !clk; #25 data_in = 6;
		#25 clk = !clk; #25 data_in = 7;
		#25 clk = !clk; #25 data_in = 4'b0000;
		#25 clk = !clk;
						
	end

      
endmodule

