`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:49:22 10/11/2020
// Design Name:   encoder42
// Module Name:   E:/OneDrive/my_xilinx/encoder42/encoder42_tb.v
// Project Name:  encoder42
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: encoder42
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module encoder42_tb;

	// Inputs
	reg [3:0] a;

	// Outputs
	wire [1:0] y;

	// Instantiate the Unit Under Test (UUT)
	encoder42 uut (
		.a(a), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		a = 0;

		// Wait 100 ns for global reset to finish
		a = 4'b0001;
		#100;	a = 4'b0010;
		#100;	a = 4'b0100;
		#100;	a = 4'b1000;
		#100; a = 0;
        
		// Add stimulus here

	end
      
endmodule

