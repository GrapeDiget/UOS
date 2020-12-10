`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:01:47 12/06/2020 
// Design Name: 
// Module Name:    note 
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
module note(RESET, CLK_1M, NOTE, BUFF);
	input RESET, CLK_1M;
	input [3:0] NOTE;
	output reg BUFF;
	
	//°èÀÌ¸§ Á¤ÀÇ
	integer cnt_sound;
	
	always @(negedge RESET or posedge CLK_1M) begin
		if(!RESET) begin
			BUFF = 1'b0;
			cnt_sound = 0;
		end
		
		else begin
			case(NOTE)
				4'd0 : begin               		// 4¿Á µµ
					if (cnt_sound >= 1911) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd1 : begin               		// 4¿Á ·¹
					if (cnt_sound >= 1703) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd2 : begin               		// 4¿Á ¹Ì
					if (cnt_sound >= 1517) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd3 : begin               		// 4¿Á ¼Ö
					if (cnt_sound >= 1276) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd4 : begin               		// 4¿Á ¶ó
					if (cnt_sound >= 1136) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd5 : begin               		// 5¿Á µµ
					if (cnt_sound >= 956) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd6 : begin               		// 5¿Á ·¹
					if (cnt_sound >= 851) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd7 : begin               		// 5¿Á ¹Ì
					if (cnt_sound >= 758) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd8 : begin               		// 5¿Á ÆÄ
					if (cnt_sound >= 716) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd9 : begin               		// 5¿Á ¼Ö
					if (cnt_sound >= 638) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd10 : begin               		// 5¿Á ¶ó
					if (cnt_sound >= 568) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd11 : begin               		// 5¿Á ½Ã
					if (cnt_sound >= 506) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd12 : begin               		// 6¿Á µµ
					if (cnt_sound >= 478) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd13 : begin               		// 6¿Á µµ#
					if (cnt_sound >= 451) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd14 : begin               		// 6¿Á ·¹
					if (cnt_sound >= 426) begin
						cnt_sound = 0;
						BUFF = ~BUFF;
					end
					else begin
						cnt_sound = cnt_sound + 1;
					end
				end
				4'd15 : begin               		// ¹«À½
					BUFF = 1'b0;
				end
				default : begin
					BUFF = 1'b0;
					cnt_sound = 0;
				end
			endcase
		end
	end
	
endmodule
