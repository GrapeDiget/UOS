`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:27:37 10/12/2020
// Design Name:   demux
// Module Name:   E:/OneDrive/my_xilinx/demux/demux_tb.v
// Project Name:  demux
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module demux_tb;

	// Inputs
	reg f;
	reg s1;
	reg s2;

	// Outputs
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	demux uut (
		.f(f), 
		.s1(s1), 
		.s2(s2), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		f = 1;
		s1 = 0;
		s2 = 0;

		// Wait 100 ns for global reset to finish
		#100; {s1, s2} = 2'b01;
		#100; {s1, s2} = 2'b10;
		#100; {s1, s2} = 2'b11;
		#100; {s1, s2} = 2'b00;
        
		// Add stimulus here

	end
      
endmodule

