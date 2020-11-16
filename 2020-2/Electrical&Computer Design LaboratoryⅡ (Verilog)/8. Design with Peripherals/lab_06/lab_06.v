`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:18:40 11/08/2020 
// Design Name: 
// Module Name:    lab_06 
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
module lab_06(clk_1, clk_1k, resetn, mode_in, mode_out, data_in, load, seg_com, seg_data);
	input clk_1, clk_1k, resetn;
	input [1:0] mode_in;
	input [7:0] data_in;
	input load;
	output reg [1:0] mode_out;
	output [3:0] seg_com;
	output [7:0] seg_data;
	
	reg mode;
	reg [7:0] binary;
	
	//mode 변경 코드
	always @(negedge resetn or posedge clk_1k) begin
		if(!resetn) begin
			mode = 1'b1;
			mode_out = 2'b10;
		end
		else begin
			if (mode_in == 2'b10) begin
				mode = 1'b1;
				mode_out = 2'b10;
			end
			else if (mode_in == 2'b01) begin
				mode = 1'b0;
				mode_out = 2'b01;
			end
		end
	end
	
	//binary 결정 코드
	always @(negedge resetn or posedge clk_1) begin
		if(~resetn)
			binary = 8'b00000000;
		else begin
			if(load == 1)
				binary = data_in;
			else begin
				if(mode == 1)
					binary = binary + 1;
				else
					binary = binary - 1;
			end
		end
	end
	
	//결정된 binary를 fnd array로 출력
	bin2bcd A0 (clk_1k, resetn, binary, seg_com, seg_data);
	
endmodule
