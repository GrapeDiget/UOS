`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:50:49 10/11/2020
// Design Name:   mux
// Module Name:   E:/OneDrive/my_xilinx/mux/mux_tb.v
// Project Name:  mux
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_tb;

	// Inputs
	reg [1:0] a;
	reg [1:0] b;
	reg s;

	// Outputs
	wire [1:0] q;

	// Instantiate the Unit Under Test (UUT)
	mux uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		a = 2'b10;
		b = 2'b01;
		s = 0;

		// Wait 100 ns for global reset to finish
		#100;	s = 1;
		#100; a = 0; b = 0; s = 0;
        
		// Add stimulus here

	end
      
endmodule

