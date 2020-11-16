`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:35:17 11/08/2020
// Design Name:   lab_02
// Module Name:   E:/OneDrive/my_xilinx/lab_02/lab_02_tb.v
// Project Name:  lab_02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab_02
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab_02_tb;

	// Inputs
	reg clk;
	reg resetn;
	reg [7:0] in;

	// Outputs
	wire piezo;
	wire [6:0] segment;

	// Instantiate the Unit Under Test (UUT)
	lab_02 uut (
		.clk(clk), 
		.resetn(resetn), 
		.in(in), 
		.piezo(piezo), 
		.segment(segment)
	);
	
	always begin
		#0.1 clk = !clk;
	end
	
	initial begin
		// Initialize Inputs
		clk = 0;
		resetn = 0;
		in = 0;

		#5 resetn = 1;
		
		#10 in = 8'b00000001;
		#5000 in = 0;

	end
      
endmodule

