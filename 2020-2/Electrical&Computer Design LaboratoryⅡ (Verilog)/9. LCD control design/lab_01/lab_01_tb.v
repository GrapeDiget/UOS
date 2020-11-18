`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:51:43 11/14/2020
// Design Name:   lab_01
// Module Name:   E:/OneDrive/my_xilinx/lab_01/lab_01_tb.v
// Project Name:  lab_01
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab_01
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab_01_tb;

	// Inputs
	reg RESETN;
	reg CLK;

	// Outputs
	wire LCD_E;
	wire LCD_RS;
	wire LCD_RW;
	wire [7:0] LCD_DATA;

	// Instantiate the Unit Under Test (UUT)
	lab_01 uut (
		.RESETN(RESETN), 
		.CLK(CLK), 
		.LCD_E(LCD_E), 
		.LCD_RS(LCD_RS), 
		.LCD_RW(LCD_RW), 
		.LCD_DATA(LCD_DATA)
	);
	
	always begin
		#1 CLK = !CLK;
	end

	initial begin
		// Initialize Inputs
		RESETN = 0;
		CLK = 0;
		
		#2 RESETN = 1;

	end
      
endmodule

