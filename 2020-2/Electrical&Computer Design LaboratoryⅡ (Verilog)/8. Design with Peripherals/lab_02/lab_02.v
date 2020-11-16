`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:00:53 11/08/2020 
// Design Name: 
// Module Name:    lab_02 
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
module lab_02(clk, resetn, in, piezo, segment);
	input clk, resetn;
	input [7:0] in;
	output piezo;
	output [6:0] segment;
	
	reg BUFF;
	reg [3:0] num;
	integer CNT_SOUND;
	
	always @(negedge resetn or posedge clk) begin
		if(~resetn) begin
			BUFF = 1'b0;
			CNT_SOUND = 0;
			num = 4'b0000;
		end
		
		else begin
			case(in)
				8'b10000000 : begin               // sw1, 도
					if (CNT_SOUND >= 1910) begin
						CNT_SOUND = 0;
						BUFF = ~BUFF;
					end
					else begin
						CNT_SOUND = CNT_SOUND + 1;
					end
					num = 4'b0001;
				end
				8'b01000000 : begin               // sw2, 레
					if (CNT_SOUND >= 1703) begin
						CNT_SOUND = 0;
						BUFF = ~BUFF;
					end
					else begin
						CNT_SOUND = CNT_SOUND + 1;
					end
					num = 4'b0010;
				end
				8'b00100000 : begin               // sw3, 미
					if (CNT_SOUND >= 1517) begin
						CNT_SOUND = 0;
						BUFF = ~BUFF;
					end
					else begin
						CNT_SOUND = CNT_SOUND + 1;
					end
					num = 4'b0011;
				end
				8'b00010000 : begin               // sw4, 파
					if (CNT_SOUND >= 1432) begin
						CNT_SOUND = 0;
						BUFF = ~BUFF;
					end
					else begin
						CNT_SOUND = CNT_SOUND + 1;
					end
					num = 4'b0100;
				end
				8'b00001000 : begin               // sw5, 솔
					if (CNT_SOUND >= 1276) begin
						CNT_SOUND = 0;
						BUFF = ~BUFF;
					end
					else begin
						CNT_SOUND = CNT_SOUND + 1;
					end
					num = 4'b0101;
				end
				8'b00000100 : begin               // sw6, 라
					if (CNT_SOUND >= 1136) begin
						CNT_SOUND = 0;
						BUFF = ~BUFF;
					end
					else begin
						CNT_SOUND = CNT_SOUND + 1;
					end
					num = 4'b0110;
				end
				8'b00000010 : begin               // sw7, 시
					if (CNT_SOUND >= 1012) begin
						CNT_SOUND = 0;
						BUFF = ~BUFF;
					end
					else begin
						CNT_SOUND = CNT_SOUND + 1;
					end
					num = 4'b0111;
				end
				8'b00000001 : begin               // sw8, 도
					if (CNT_SOUND >= 955) begin
						CNT_SOUND = 0;
						BUFF = ~BUFF;
					end
					else begin
						CNT_SOUND = CNT_SOUND + 1;
					end
					num = 4'b1000;
				end
				default : begin
					BUFF = 1'b0;
					CNT_SOUND = 0;
					num = 4'b0000;
				end
			endcase
		end
	end
	
	assign piezo = BUFF;
	
	seven_segment u0 (.in(num), .DECODE(segment));

endmodule
