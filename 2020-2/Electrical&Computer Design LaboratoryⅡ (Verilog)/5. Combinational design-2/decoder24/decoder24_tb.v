`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:05:44 10/11/2020
// Design Name:   decoder24
// Module Name:   E:/OneDrive/my_xilinx/decoder24/decoder24_tb.v
// Project Name:  decoder24
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder24
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decoder24_tb;

	// Inputs
	reg [1:0] a;

	// Outputs
	wire [3:0] y;

	// Instantiate the Unit Under Test (UUT)
	decoder24 uut (
		.a(a), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 0;

		// Wait 100 ns for global reset to finish
		#100;	a = 2'b01;
		#100;	a = 2'b10;
		#100;	a = 2'b11;
		#100;	a = 0;
        
		// Add stimulus here

	end
      
endmodule

