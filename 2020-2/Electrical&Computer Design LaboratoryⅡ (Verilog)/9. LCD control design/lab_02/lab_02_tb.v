`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:53:09 11/14/2020
// Design Name:   lab_02
// Module Name:   E:/OneDrive/my_xilinx/lab_02/lab_02_tb.v
// Project Name:  lab_02
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab_02
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab_02_tb;

	// Inputs
	reg RESETN;
	reg CLK;

	// Outputs
	wire LCD_E;
	wire LCD_RS;
	wire LCD_RW;
	wire [7:0] LCD_DATA;

	// Instantiate the Unit Under Test (UUT)
	lab_02 uut (
		.RESETN(RESETN), 
		.CLK(CLK), 
		.LCD_E(LCD_E), 
		.LCD_RS(LCD_RS), 
		.LCD_RW(LCD_RW), 
		.LCD_DATA(LCD_DATA)
	);
	
	always begin
		#500000 CLK = ~CLK;
	end

	initial begin
		// Initialize Inputs
		RESETN = 0;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100 RESETN = 1;
        
		// Add stimulus here

	end
      
endmodule

