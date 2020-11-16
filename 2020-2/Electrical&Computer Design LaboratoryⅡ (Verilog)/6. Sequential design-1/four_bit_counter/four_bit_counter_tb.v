`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:19:12 10/24/2020
// Design Name:   four_bit_counter
// Module Name:   E:/OneDrive/my_xilinx/four_bit_counter/four_bit_counter_tb.v
// Project Name:  four_bit_counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: four_bit_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module four_bit_counter_tb;

	// Inputs
	reg clk;
	reg resetn;
	reg en;
	reg mode;
	reg [3:0] data_in;
	reg load;

	// Outputs
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	four_bit_counter uut (
		.clk(clk), 
		.resetn(resetn), 
		.en(en), 
		.mode(mode), 
		.data_in(data_in), 
		.load(load), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		resetn = 0;
		en = 0;
		mode = 0;
		data_in = 4'b0101;
		load = 0;
		
								#5; mode = 1; resetn = 1; en = 1;
		#5;  clk = !clk;  
		#10; clk = !clk;
		#10; clk = !clk; 
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;  #5; mode = 0;
		#5;  clk = !clk;  
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;  #5; load = 1;
		#5;  clk = !clk;		
		#10;  clk = !clk;  #5; load = 0;
		#5; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;  #5; mode = 1;
		#5;  clk = !clk;  #5; resetn = 0;
		#5;  clk = !clk;  #5; resetn = 1;
		#5; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;  #5; en = 0;
		#5; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;
		#10; clk = !clk;

	end
      
endmodule

