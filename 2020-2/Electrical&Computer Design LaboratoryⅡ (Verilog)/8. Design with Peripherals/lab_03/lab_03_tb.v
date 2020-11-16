`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:06:30 11/08/2020
// Design Name:   lab_03
// Module Name:   E:/OneDrive/my_xilinx/lab_03/lab_03_tb.v
// Project Name:  lab_03
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: lab_03
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module lab_03_tb;

	// Inputs
	reg [3:0] bcd;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	lab_03 uut (
		.bcd(bcd), 
		.out(out)
	);
	
	initial begin
		// Initialize Inputs
		bcd = 0;

		// Wait 100 ns for global reset to finish
		#100;	bcd = 4'b0010;
		#100;	bcd = 4'b0110;
		#100;	bcd = 4'b1010;
		#100;	bcd = 4'b0000;
        
		// Add stimulus here

	end
      
endmodule

