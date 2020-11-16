`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:46:45 10/04/2020
// Design Name:   four_bit_full_adder
// Module Name:   E:/OneDrive/my_xilinx/four_bit_full_adder/four_bit_full_adder_tb.v
// Project Name:  four_bit_full_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: four_bit_full_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module four_bit_full_adder_tb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [3:0] s;
	wire c;

	// Instantiate the Unit Under Test (UUT)
	four_bit_full_adder uut (
		.a(a), 
		.b(b), 
		.s(s), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100; a <= 4'b0111; b <= 4'b1100;
		#100; a <= 4'b0000; b <= 4'b0000;
        
		// Add stimulus here

	end
      
endmodule

