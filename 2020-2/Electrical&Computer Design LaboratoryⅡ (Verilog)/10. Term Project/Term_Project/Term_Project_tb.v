`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:07:20 12/06/2020
// Design Name:   Digital_watch
// Module Name:   E:/OneDrive/my_xilinx/Term_Project/Term_Project_tb.v
// Project Name:  Term_Project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Digital_watch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Term_Project_tb;

	// Inputs
	reg RESET;
	reg CLK_1k;
	reg CLK_1M;
	reg [7:0] BUS_INPUT;
	reg [3:0] NUM_INPUT;
	reg [5:0] CHAR_INPUT;

	// Outputs
	wire LCD_E;
	wire LCD_RS;
	wire LCD_RW;
	wire [7:0] LCD_DATA;
	wire PIEZO;

	// Instantiate the Unit Under Test (UUT)
	Digital_watch uut (
		.RESET(RESET), 
		.CLK_1k(CLK_1k), 
		.CLK_1M(CLK_1M), 
		.BUS_INPUT(BUS_INPUT), 
		.NUM_INPUT(NUM_INPUT), 
		.CHAR_INPUT(CHAR_INPUT), 
		.LCD_E(LCD_E), 
		.LCD_RS(LCD_RS), 
		.LCD_RW(LCD_RW), 
		.LCD_DATA(LCD_DATA), 
		.PIEZO(PIEZO)
	);
	
	always begin
		#500000 CLK_1k = !CLK_1k;
	end
	
	always begin
		#500 CLK_1M = !CLK_1M;
	end
	
	initial begin
		RESET = 0;
		CLK_1k = 0;
		CLK_1M = 0;
		BUS_INPUT = 0;
		NUM_INPUT = 0;
		CHAR_INPUT = 0;

		#1 RESET = 1;
		#2000000000 BUS_INPUT = 4'b0100;	//2段
						CHAR_INPUT[5] = 1;
		#1000000000 CHAR_INPUT[5] = 0;	//3段
		#1000000000 BUS_INPUT = 4'b0101;	//4段
						CHAR_INPUT[5] = 1;
		#1000000000 CHAR_INPUT[5] = 0;	//5段
						NUM_INPUT[2] = 1;
		#500000000 	NUM_INPUT[2] = 0;		//5.5段
		#500000000 	NUM_INPUT[2] = 1;		//6段
		#500000000 	NUM_INPUT[2] = 0;		//6.5段
		#500000000 	NUM_INPUT[2] = 1;		//7段
		#500000000 	NUM_INPUT[2] = 0;		//7.5段
		#500000000 	NUM_INPUT[1] = 1;		//8段
		#500000000 	NUM_INPUT[1] = 0;		//8.5段
		#500000000 	NUM_INPUT[1] = 1;		//9段
		#500000000 	NUM_INPUT[1] = 0;		//9.5段
		#500000000 	NUM_INPUT[1] = 1;		//10段
		#500000000 	NUM_INPUT[1] = 0;		//10.5段
		#500000000	CHAR_INPUT[3] = 1;	//11段
		#1000000000 BUS_INPUT = 4'b0110;	//12段
						CHAR_INPUT[5] = 1;
		#1000000000 CHAR_INPUT[5] = 0;	//13段
						NUM_INPUT[2] = 1;
						
		

	end
      
endmodule

