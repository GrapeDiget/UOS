`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:36:50 10/04/2020
// Design Name:   four_bit_comparator
// Module Name:   E:/OneDrive/my_xilinx/four_bit_comparator/four_bit_comparator_tb.v
// Project Name:  four_bit_comparator
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: four_bit_comparator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module four_bit_comparator_tb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire agb;
	wire eq;
	wire alb;

	// Instantiate the Unit Under Test (UUT)
	four_bit_comparator uut (
		.a(a), 
		.b(b), 
		.agb(agb), 
		.eq(eq), 
		.alb(alb)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100; a <= 4'b0001; b <= 4'b0000;
		#100; a <= 4'b1000; b <= 4'b0000;
		#100; a <= 4'b0000; b <= 4'b0000;
        
		// Add stimulus here

	end
      
endmodule

