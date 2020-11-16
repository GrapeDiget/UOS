`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:02:21 10/24/2020
// Design Name:   sipo4_for
// Module Name:   E:/OneDrive/my_xilinx/sipo4_for/sipo4_for_tb.v
// Project Name:  sipo4_for
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sipo4_for
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sipo4_for_tb;

	// Inputs
	reg clk;
	reg resetn;
	reg data_in;

	// Outputs
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	sipo4_for uut (
		.clk(clk), 
		.resetn(resetn), 
		.data_in(data_in), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		resetn = 0;
		data_in = 0;

		#50 clk = !clk; #25 data_in = 1; resetn = 1;
		#25 clk = !clk; #25 data_in = 1; 
		#25 clk = !clk; #25 data_in = 0;
		#25 clk = !clk; #25 data_in = 1;
		#25 clk = !clk; #25 data_in = 0;
		#25 clk = !clk; #25 data_in = 0;
		#25 clk = !clk; #25 data_in = 1;
		#25 clk = !clk; #25 data_in = 1;
		#25 clk = !clk; #25 data_in = 0;
		#25 clk = !clk; #25 data_in = 0;
		
	end
      
endmodule

