`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:18:11 11/08/2020 
// Design Name: 
// Module Name:    bin2bcd 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module bin2bcd(clk_1k, resetn, binary, seg_com, seg_data);
	input clk_1k, resetn;
	input [7:0] binary;
	output [3:0] seg_com;
	output [7:0] seg_data;
	
	reg [7:0] natural;
	reg sign;
	reg [3:0] hundreds;
	reg [3:0] tens;
	reg [3:0] ones;
	
	//binary to bcd
	integer i;
	
	always @(*) begin
		sign = 1'b0;
		hundreds = 4'd0;
		tens = 4'd0;
		ones = 4'd0;
		
		if(binary[7] == 1) begin
			natural = 9'b100000000 - binary;
			sign = 1'b1;
		end
		else
			natural = binary;
		
		for(i=7; i>=0; i = i-1) begin
			if (hundreds >= 5)
				hundreds = hundreds + 3;
			if (tens >= 5)
				tens = tens + 3;
			if (ones >= 5)
				ones = ones + 3;
			
			hundreds = hundreds << 1;
			hundreds[0] = tens[3];
			tens = tens << 1;
			tens[0] = ones[3];
			ones = ones << 1;
			ones[0] = natural[i];
		end
	end
	
	fnd_array B0 (clk_1k, resetn, sign, hundreds, tens, ones, seg_com, seg_data);
	
endmodule
