`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:46:34 11/01/2020
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
	reg a;
	reg b;
	reg clk;
	reg resetn;

	// Outputs
	wire out;
	wire [2:0] state;

	// Instantiate the Unit Under Test (UUT)
	application uut (
		.a(a), 
		.b(b), 
		.clk(clk), 
		.resetn(resetn), 
		.out(out), 
		.state(state)
	);

	always begin
		#10 clk <= !clk;
	end

	initial begin
		a = 0;
		b = 0;
		clk = 0;
		resetn = 0;
		
		#15 resetn = 1;
		#5  a = 1; #30 a = 0;
		#20 b = 1; #30 b = 0;
		#20 a = 1; #30 a = 0;
		#20 a = 1; #30 a = 0;
		#20 b = 1; #30 b = 0;
		#20 a = 1; #30 a = 0;
		#20 a = 1; #30 a = 0;
		#20 a = 1; #30 a = 0;
		#20 b = 1; #30 b = 0;
		#20 a = 1; #30 a = 0;
		#20 a = 1; #30 a = 0;
		#20 b = 1; #30 b = 0;
		#20 b = 1; #30 b = 0;
		#20 a = 1; #30 a = 0;
		#20 b = 1; #30 b = 0;
		#20 a = 1; #30 a = 0;
		#20 a = 1; #30 a = 0;
	end
      
endmodule

