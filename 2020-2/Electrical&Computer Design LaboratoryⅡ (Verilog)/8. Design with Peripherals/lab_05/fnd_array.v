`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:00:30 11/08/2020 
// Design Name: 
// Module Name:    fnd_array 
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
module fnd_array(clk_1k, resetn, sign, hundreds, tens, ones, seg_com, seg_data);
	input clk_1k, resetn;
	input sign;
	input [3:0] hundreds;
	input [3:0] tens;
	input [3:0] ones;	
	output reg [3:0] seg_com;
	output reg [7:0] seg_data;
	

	wire [7:0] s_segment;
	assign s_segment = sign ? 8'b00000010 : 8'b00000000;  //부호를 fnd 숫자로 변환
	wire [7:0] h_segment;
	fnd_decoder U0 (.bcd(hundreds), .out(h_segment));     //bcd를 fnd 숫자로 변환
	wire [7:0] t_segment;
	fnd_decoder U1 (.bcd(tens), .out(t_segment));			//bcd를 fnd 숫자로 변환
	wire [7:0] o_segment;
	fnd_decoder U2 (.bcd(ones), .out(o_segment));			//bcd를 fnd 숫자로 변환
	
	integer CNT_SCAN;
	
	always @(negedge resetn or posedge clk_1k) begin
		if(~resetn)
			CNT_SCAN = 0;
		else begin
			if(CNT_SCAN >= 3)
				CNT_SCAN = 0;
			else
				CNT_SCAN = CNT_SCAN + 1;
		end
	end
	
	always @(negedge resetn or posedge clk_1k) begin
		if(~resetn) begin
			seg_com = 4'hF;
			seg_data = 8'h00;
		end
		else begin
			case (CNT_SCAN)
				0 : begin
					seg_com = 4'b0111;
					seg_data = s_segment;
				end
				1 : begin
					seg_com = 4'b1011;
					seg_data = h_segment;
				end
				2: begin
					seg_com = 4'b1101;
					seg_data = t_segment;
				end
				3 : begin
					seg_com = 4'b1110;
					seg_data = o_segment;
				end
				default : begin
					seg_com = 4'hF;
					seg_data = 8'h00;
				end
			endcase
		end
	end

endmodule
