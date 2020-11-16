`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:35:37 09/20/2020
// Design Name:   four_bit_xor3
// Module Name:   E:/OneDrive/my_xilinx/four_bit_xor3/four_bit_xor3_tb.v
// Project Name:  four_bit_xor3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: four_bit_xor3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module four_bit_xor3_tb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [3:0] x;

	// Instantiate the Unit Under Test (UUT)
	four_bit_xor3 uut (
		.a(a), 
		.b(b), 
		.x(x)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100 a[3:0] <= 3; b[3:0] <= 5;
		#100 a = 0;       b = 0;
        
		// Add stimulus here

	end
      
endmodule

