`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:42:17 11/01/2020
// Design Name:   In_sync
// Module Name:   E:/OneDrive/my_xilinx/In_sync/In_sync_tb.v
// Project Name:  In_sync
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: In_sync
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module In_sync_tb;

	// Inputs
	reg in;
	reg clk;

	// Outputs
	wire in_sync;

	// Instantiate the Unit Under Test (UUT)
	In_sync uut (
		.in(in), 
		.clk(clk), 
		.in_sync(in_sync)
	);
	
	always begin
		#10 clk <= !clk;
	end

	initial begin
		in = 0;
		clk = 0;
		
		#25 in <= 1;
		#125 in <= 0;
		#145 in <= 1;
		#185 in <= 0;


	end
      
endmodule

