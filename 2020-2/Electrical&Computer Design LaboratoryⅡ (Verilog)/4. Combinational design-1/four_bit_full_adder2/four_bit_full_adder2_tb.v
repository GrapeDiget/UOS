`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:14:02 10/06/2020
// Design Name:   four_bit_full_adder2
// Module Name:   C:/Users/vmfos/OneDrive/my_xilinx/four_bit_full_adder2/four_bit_full_adder2_tb.v
// Project Name:  four_bit_full_adder2
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: four_bit_full_adder2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module four_bit_full_adder2_tb;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [3:0] s;
	wire c;

	// Instantiate the Unit Under Test (UUT)
	four_bit_full_adder2 uut (
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
		#100; a <= 4'b1001; b <= 4'b1100;
		#100; a <= 4'b0011; b <= 4'b1010;
		#100; a <= 0; b <= 0;
        
		// Add stimulus here

	end
      
endmodule

