`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:21:31 11/03/2020
// Design Name:   application2
// Module Name:   C:/Users/vmfos/OneDrive/my_xilinx/application2/application2_tb.v
// Project Name:  application2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: application2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module application2_tb;

	// Inputs
	reg a;
	reg b;
	reg clk;
	reg resetn;

	// Outputs
	wire out;
	wire [2:0] state;

	// Instantiate the Unit Under Test (UUT)
	application2 uut (
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

