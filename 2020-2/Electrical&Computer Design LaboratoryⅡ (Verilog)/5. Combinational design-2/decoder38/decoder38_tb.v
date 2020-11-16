`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:35:36 10/11/2020
// Design Name:   decoder38
// Module Name:   E:/OneDrive/my_xilinx/decoder38/decoder38_tb.v
// Project Name:  decoder38
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder38
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decoder38_tb;

	// Inputs
	reg a;
	reg b;
	reg c;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	decoder38 uut (
		.a(a), 
		.b(b), 
		.c(c), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		c = 0;

		// Wait 100 ns for global reset to finish
		#100;	{a, b, c} <= 3'b001;
		#100;	{a, b, c} <= 3'b010;
		#100;	{a, b, c} <= 3'b011;
		#100;	{a, b, c} <= 3'b100;
		#100;	{a, b, c} <= 3'b101;
		#100;	{a, b, c} <= 3'b110;
		#100;	{a, b, c} <= 3'b111;
		#100;	{a, b, c} <= 3'b000;
        
		// Add stimulus here

	end
      
endmodule

