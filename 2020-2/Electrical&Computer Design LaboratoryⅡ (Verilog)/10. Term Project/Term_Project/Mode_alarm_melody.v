`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:14:57 12/06/2020 
// Design Name: 
// Module Name:    Mode_alarm_melody 
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
module Mode_alarm_melody(RESET, CLK, CLK_1M, NUM_SYNC, MODE, EN, MELODY_SEL, PIEZO);
	input RESET, CLK, CLK_1M;
	input [3:2] NUM_SYNC;
	input [3:0] MODE;
	input EN;
	output reg [1:0] MELODY_SEL;
	output PIEZO;
	
	//소리 출력 설정
	reg [3:0] note;
	wire buff;
	
	note U0 (RESET, CLK_1M, note, buff);
	
	assign PIEZO = buff;
	
	//멜로디 선택
	parameter normal = 2'b00,
				 bear = 2'b01,
				 good_morning = 2'b10,
				 school_bell = 2'b11;
	
	//입력에 따라 멜로디 선택
	always @(negedge RESET or posedge CLK) begin
		if(!RESET)
			MELODY_SEL = normal;
		else begin
			if(MODE == 4'b0000) begin
				if(NUM_SYNC[2] == 1 && NUM_SYNC[3] == 0) begin
					if(MELODY_SEL == normal)	MELODY_SEL = school_bell;
					else								MELODY_SEL = MELODY_SEL - 1;
				end
				else if(NUM_SYNC[2] == 0 && NUM_SYNC[3] == 1) begin
					if(MELODY_SEL == school_bell)	MELODY_SEL = normal;
					else									MELODY_SEL = MELODY_SEL + 1;
				end
				else 
					MELODY_SEL = MELODY_SEL;
			end
		end
	end
	
	//박자 위한 카운트
	reg [3:0] melody_cnt;
	integer cnt;

	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			melody_cnt = 0;
			cnt = 0;
		end
		else begin
			if(EN == 1) begin
				if(melody_cnt >= 16) begin
					melody_cnt = 0;
					cnt = 0;
				end
				else if(cnt >= 124) begin
					melody_cnt = melody_cnt + 1;
					cnt = 0;
				end
				else
					cnt = cnt + 1;
			end
			else begin
				melody_cnt = 0;
				cnt = 0;
			end
		end
	end
	
	//마디 표시 변수
	integer bar1, bar2, bar3;
	
	//선택된 멜로디에 따라 음악 연주
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			note = 4'd15;
			bar1 = 0;
			bar2 = 0;
			bar3 = 0;
		end
		else begin
			if(EN) begin
				case(MELODY_SEL)
					normal : begin
						bar1 = 0;
						bar2 = 0;
						bar3 = 0;
						case (melody_cnt)
							0 : 		 note = 4'd5;
							1 : 		 note = 4'd15;
							2 : 		 note = 4'd5;
							3 : 		 note = 4'd15;
							4 : 		 note = 4'd5;
							5 : 		 note = 4'd15;
							6 : 		 note = 4'd5;
							default : note = 4'd15;
						endcase
					end
					
					bear : begin
						bar2 = 0;
						bar3 = 0;
						case(bar1)
							0 : begin
								case (melody_cnt)
									0 : 		 note = 4'd0;
									1 : 		 note = 4'd0;
									2 : 		 note = 4'd0;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd0;
									5 : 		 note = 4'd15;
									6 : 		 note = 4'd0;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd0;
									9 : 		 note = 4'd0;
									10: 		 note = 4'd0;
									11: 		 note = 4'd15;
									12: 		 note = 4'd0;
									13: 		 note = 4'd0;
									14: 		 note = 4'd0;
									15: begin note = 4'd15;  bar1 = bar1 + 1; end
								endcase
							end
							1 : begin
								case (melody_cnt)
									0 : 		 note = 4'd2;
									1 : 		 note = 4'd2;
									2 : 		 note = 4'd2;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd15;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd2;
									9 : 		 note = 4'd2;
									10: 		 note = 4'd2;
									11: 		 note = 4'd15;
									12: 		 note = 4'd0;
									13: 		 note = 4'd0;
									14: 		 note = 4'd0;
									15: begin note = 4'd15;  bar1 = bar1 + 1; end
								endcase
							end
							2 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd15;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd2;
									5 : 		 note = 4'd2;
									6 : 		 note = 4'd2;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd3;
									9 : 		 note = 4'd15;
									10: 		 note = 4'd3;
									11: 		 note = 4'd15;
									12: 		 note = 4'd2;
									13: 		 note = 4'd2;
									14: 		 note = 4'd2;
									15: begin note = 4'd15;  bar1 = bar1 + 1; end
								endcase
							end
							3 : begin
								case (melody_cnt)
									0 : 		 note = 4'd0;
									1 : 		 note = 4'd0;
									2 : 		 note = 4'd0;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd0;
									5 : 		 note = 4'd0;
									6 : 		 note = 4'd0;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd0;
									9 : 		 note = 4'd0;
									10: 		 note = 4'd0;
									11: 		 note = 4'd0;
									12: 		 note = 4'd0;
									13: 		 note = 4'd0;
									14: 		 note = 4'd15;
									15: begin note = 4'd15;  bar1 = bar1 + 1; end
								endcase
							end
							4 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd3;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd3;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd2;
									9 : 		 note = 4'd2;
									10: 		 note = 4'd2;
									11: 		 note = 4'd15;
									12: 		 note = 4'd0;
									13: 		 note = 4'd0;
									14: 		 note = 4'd0;
									15: begin note = 4'd15;  bar1 = bar1 + 1; end
								endcase
							end
							5 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd3;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd3;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd3;
									9 : 		 note = 4'd3;
									10: 		 note = 4'd3;
									11: 		 note = 4'd3;
									12: 		 note = 4'd3;
									13: 		 note = 4'd3;
									14: 		 note = 4'd15;
									15: begin note = 4'd15;  bar1 = bar1 + 1; end
								endcase
							end
							6 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd3;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd3;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd2;
									9 : 		 note = 4'd2;
									10: 		 note = 4'd2;
									11: 		 note = 4'd15;
									12: 		 note = 4'd0;
									13: 		 note = 4'd0;
									14: 		 note = 4'd0;
									15: begin note = 4'd15;  bar1 = bar1 + 1; end
								endcase
							end
							7 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd3;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd3;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd3;
									9 : 		 note = 4'd3;
									10: 		 note = 4'd3;
									11: 		 note = 4'd3;
									12: 		 note = 4'd3;
									13: 		 note = 4'd3;
									14: 		 note = 4'd15;
									15: begin note = 4'd15;  bar1 = bar1 + 1; end
								endcase
							end
							8 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd3;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd3;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd2;
									9 : 		 note = 4'd2;
									10: 		 note = 4'd2;
									11: 		 note = 4'd15;
									12: 		 note = 4'd0;
									13: 		 note = 4'd0;
									14: 		 note = 4'd0;
									15: begin note = 4'd15;  bar1 = bar1 + 1; end
								endcase
							end
							9 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd15;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd15;
									6 : 		 note = 4'd4;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd3;
									9 : 		 note = 4'd3;
									10: 		 note = 4'd3;
									11: 		 note = 4'd3;
									12: 		 note = 4'd3;
									13: 		 note = 4'd3;
									14: 		 note = 4'd15;
									15: begin note = 4'd15;  bar1 = bar1 + 1; end
								endcase
							end
							10 : begin
								case (melody_cnt)
									0 : 		 note = 4'd5;
									1 : 		 note = 4'd5;
									2 : 		 note = 4'd5;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd3;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd5;
									9 : 		 note = 4'd5;
									10: 		 note = 4'd5;
									11: 		 note = 4'd15;
									12: 		 note = 4'd3;
									13: 		 note = 4'd3;
									14: 		 note = 4'd3;
									15: begin note = 4'd15;  bar1 = bar1 + 1; end
								endcase
							end
							11 : begin
								case (melody_cnt)
									0 : 		 note = 4'd2;
									1 : 		 note = 4'd2;
									2 : 		 note = 4'd2;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd1;
									5 : 		 note = 4'd1;
									6 : 		 note = 4'd1;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd0;
									9 : 		 note = 4'd0;
									10: 		 note = 4'd0;
									11: 		 note = 4'd0;
									12: 		 note = 4'd0;
									13: 		 note = 4'd0;
									14: 		 note = 4'd15;
									15: begin note = 4'd15;  bar1 = 0; end
								endcase
							end
							default : note = 4'd15;
						endcase
					end		
					
					good_morning : begin
						bar1 = 0;
						bar3 = 0;
						case(bar2)
							0 : begin
								case (melody_cnt)
									0 : 		 note = 4'd9;
									1 : 		 note = 4'd9;
									2 : 		 note = 4'd9;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd7;
									5 : 		 note = 4'd7;
									6 : 		 note = 4'd7;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd6;
									9 : 		 note = 4'd6;
									10: 		 note = 4'd6;
									11: 		 note = 4'd6;
									12: 		 note = 4'd6;
									13: 		 note = 4'd6;
									14: 		 note = 4'd15;
									15: begin note = 4'd15;  bar2 = bar2 + 1; end
								endcase
							end
							1 : begin
								case (melody_cnt)
									0 : 		 note = 4'd15;
									1 : 		 note = 4'd15;
									2 : 		 note = 4'd15;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd9;
									5 : 		 note = 4'd9;
									6 : 		 note = 4'd9;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd7;
									9 : 		 note = 4'd7;
									10: 		 note = 4'd7;
									11: 		 note = 4'd15;
									12: 		 note = 4'd6;
									13: 		 note = 4'd6;
									14: 		 note = 4'd6;
									15: begin note = 4'd15;  bar2 = bar2 + 1; end
								endcase
							end
							2 : begin
								case (melody_cnt)
									0 : 		 note = 4'd15;
									1 : 		 note = 4'd15;
									2 : 		 note = 4'd9;
									3 : 		 note = 4'd9;
									4 : 		 note = 4'd9;
									5 : 		 note = 4'd15;
									6 : 		 note = 4'd7;
									7 : 		 note = 4'd7;
									8 : 		 note = 4'd7;
									9 : 		 note = 4'd15;
									10: 		 note = 4'd6;
									11: 		 note = 4'd6;
									12: 		 note = 4'd6;
									13: 		 note = 4'd6;
									14: 		 note = 4'd6;
									15: begin note = 4'd15;  bar2 = bar2 + 1; end
								endcase
							end
							3 : begin
								case (melody_cnt)
									0 : 		 note = 4'd15;
									1 : 		 note = 4'd15;
									2 : 		 note = 4'd6;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd7;
									5 : 		 note = 4'd15;
									6 : 		 note = 4'd9;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd11;
									9 : 		 note = 4'd11;
									10: 		 note = 4'd11;
									11: 		 note = 4'd15;
									12: 		 note = 4'd9;
									13: 		 note = 4'd9;
									14: 		 note = 4'd9;
									15: begin note = 4'd15;  bar2 = bar2 + 1; end
								endcase
							end
							4 : begin
								case (melody_cnt)
									0 : 		 note = 4'd7;
									1 : 		 note = 4'd15;
									2 : 		 note = 4'd7;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd9;
									5 : 		 note = 4'd15;
									6 : 		 note = 4'd11;
									7 : 		 note = 4'd11;
									8 : 		 note = 4'd11;
									9 : 		 note = 4'd15;
									10: 		 note = 4'd9;
									11: 		 note = 4'd9;
									12: 		 note = 4'd9;
									13: 		 note = 4'd15;
									14: 		 note = 4'd7;
									15: begin note = 4'd15;  bar2 = bar2 + 1; end
								endcase
							end
							5 : begin
								case (melody_cnt)
									0 : 		 note = 4'd15;
									1 : 		 note = 4'd15;
									2 : 		 note = 4'd6;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd7;
									5 : 		 note = 4'd15;
									6 : 		 note = 4'd9;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd11;
									9 : 		 note = 4'd11;
									10: 		 note = 4'd11;
									11: 		 note = 4'd15;
									12: 		 note = 4'd9;
									13: 		 note = 4'd9;
									14: 		 note = 4'd9;
									15: begin note = 4'd15;  bar2 = bar2 + 1; end
								endcase
							end
							6 : begin
								case (melody_cnt)
									0 : 		 note = 4'd7;
									1 : 		 note = 4'd15;
									2 : 		 note = 4'd7;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd9;
									5 : 		 note = 4'd15;
									6 : 		 note = 4'd11;
									7 : 		 note = 4'd11;
									8 : 		 note = 4'd11;
									9 : 		 note = 4'd11;
									10: 		 note = 4'd11;
									11: 		 note = 4'd11;
									12: 		 note = 4'd15;
									13: 		 note = 4'd15;
									14: 		 note = 4'd15;
									15: begin note = 4'd15;  bar2 = bar2 + 1; end
								endcase
							end
							7 : begin
								case (melody_cnt)
									0 : 		 note = 4'd15;
									1 : 		 note = 4'd15;
									2 : 		 note = 4'd6;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd7;
									5 : 		 note = 4'd15;
									6 : 		 note = 4'd9;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd11;
									9 : 		 note = 4'd11;
									10: 		 note = 4'd11;
									11: 		 note = 4'd15;
									12: 		 note = 4'd9;
									13: 		 note = 4'd9;
									14: 		 note = 4'd9;
									15: begin note = 4'd15;  bar2 = bar2 + 1; end
								endcase
							end
							8 : begin
								case (melody_cnt)
									0 : 		 note = 4'd7;
									1 : 		 note = 4'd15;
									2 : 		 note = 4'd7;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd9;
									5 : 		 note = 4'd9;
									6 : 		 note = 4'd9;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd14;
									9 : 		 note = 4'd15;
									10: 		 note = 4'd13;
									11: 		 note = 4'd15;
									12: 		 note = 4'd12;
									13: 		 note = 4'd15;
									14: 		 note = 4'd11;
									15: begin note = 4'd11;  bar2 = bar2 + 1; end
								endcase
							end
							9 : begin
								case (melody_cnt)
									0 : 		 note = 4'd11;
									1 : 		 note = 4'd11;
									2 : 		 note = 4'd11;
									3 : 		 note = 4'd11;
									4 : 		 note = 4'd11;
									5 : 		 note = 4'd11;
									6 : 		 note = 4'd15;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd10;
									9 : 		 note = 4'd15;
									10: 		 note = 4'd10;
									11: 		 note = 4'd15;
									12: 		 note = 4'd10;
									13: 		 note = 4'd15;
									14: 		 note = 4'd10;
									15: begin note = 4'd15;  bar2 = bar2 + 1; end
								endcase
							end
							10: begin
								case (melody_cnt)
									0 : 		 note = 4'd10;
									1 : 		 note = 4'd15;
									2 : 		 note = 4'd11;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd9;
									5 : 		 note = 4'd9;
									6 : 		 note = 4'd9;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd7;
									9 : 		 note = 4'd7;
									10: 		 note = 4'd7;
									11: 		 note = 4'd15;
									12: 		 note = 4'd6;
									13: 		 note = 4'd6;
									14: 		 note = 4'd6;
									15: begin note = 4'd6;  bar2 = bar2 + 1; end
								endcase
							end
							11 : begin
								case (melody_cnt)
									0 : 		 note = 4'd6;
									1 : 		 note = 4'd6;
									2 : 		 note = 4'd6;
									3 : 		 note = 4'd6;
									4 : 		 note = 4'd6;
									default: begin
												 note = 4'd15;  bar2 = 0; end
								endcase
							end
							default : note = 4'd15;
						endcase
					end
					
					school_bell : begin
						bar1 = 0;
						bar2 = 0;
						case(bar3)
							0 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd3;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd3;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd4;
									9 : 		 note = 4'd4;
									10: 		 note = 4'd4;
									11: 		 note = 4'd15;
									12: 		 note = 4'd4;
									13: 		 note = 4'd4;
									14: 		 note = 4'd4;
									15: begin note = 4'd15;  bar3 = bar3 + 1; end
								endcase
							end
							1 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd3;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd3;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd2;
									9 : 		 note = 4'd2;
									10: 		 note = 4'd2;
									11: 		 note = 4'd2;
									12: 		 note = 4'd2;
									13: 		 note = 4'd2;
									14: 		 note = 4'd15;
									15: begin note = 4'd15;  bar3 = bar3 + 1; end
								endcase
							end
							2 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd3;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd3;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd2;
									9 : 		 note = 4'd2;
									10: 		 note = 4'd2;
									11: 		 note = 4'd15;
									12: 		 note = 4'd2;
									13: 		 note = 4'd2;
									14: 		 note = 4'd2;
									15: begin note = 4'd15;  bar3 = bar3 + 1; end
								endcase
							end
							3 : begin
								case (melody_cnt)
									0 : 		 note = 4'd1;
									1 : 		 note = 4'd1;
									2 : 		 note = 4'd1;
									3 : 		 note = 4'd1;
									4 : 		 note = 4'd1;
									5 : 		 note = 4'd1;
									6 : 		 note = 4'd1;
									7 : 		 note = 4'd1;
									8 : 		 note = 4'd1;
									9 : 		 note = 4'd1;
									10: 		 note = 4'd1;
									11: 		 note = 4'd15;
									12: 		 note = 4'd15;
									13: 		 note = 4'd15;
									14: 		 note = 4'd15;
									15: begin note = 4'd15;  bar3 = bar3 + 1; end
								endcase
							end
							4 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd3;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd3;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd4;
									9 : 		 note = 4'd4;
									10: 		 note = 4'd4;
									11: 		 note = 4'd15;
									12: 		 note = 4'd4;
									13: 		 note = 4'd4;
									14: 		 note = 4'd4;
									15: begin note = 4'd15;  bar3 = bar3 + 1; end
								endcase
							end
							5 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd3;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd3;
									5 : 		 note = 4'd3;
									6 : 		 note = 4'd3;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd2;
									9 : 		 note = 4'd2;
									10: 		 note = 4'd2;
									11: 		 note = 4'd2;
									12: 		 note = 4'd2;
									13: 		 note = 4'd2;
									14: 		 note = 4'd15;
									15: begin note = 4'd15;  bar3 = bar3 + 1; end
								endcase
							end
							6 : begin
								case (melody_cnt)
									0 : 		 note = 4'd3;
									1 : 		 note = 4'd3;
									2 : 		 note = 4'd3;
									3 : 		 note = 4'd15;
									4 : 		 note = 4'd2;
									5 : 		 note = 4'd2;
									6 : 		 note = 4'd2;
									7 : 		 note = 4'd15;
									8 : 		 note = 4'd1;
									9 : 		 note = 4'd1;
									10: 		 note = 4'd1;
									11: 		 note = 4'd15;
									12: 		 note = 4'd2;
									13: 		 note = 4'd2;
									14: 		 note = 4'd2;
									15: begin note = 4'd15;  bar3 = bar3 + 1; end
								endcase
							end
							7 : begin
								case (melody_cnt)
									0 : 		 note = 4'd0;
									1 : 		 note = 4'd0;
									2 : 		 note = 4'd0;
									3 : 		 note = 4'd0;
									4 : 		 note = 4'd0;
									5 : 		 note = 4'd0;
									6 : 		 note = 4'd0;
									7 : 		 note = 4'd0;
									8 : 		 note = 4'd0;
									9 : 		 note = 4'd0;
									10: 		 note = 4'd0;
									11: 		 note = 4'd15;
									12: 		 note = 4'd15;
									13: 		 note = 4'd15;
									14: 		 note = 4'd15;
									15: begin note = 4'd15;  bar3 = 0; end
								endcase
							end							
							default : note = 4'd15;
						endcase
					end
				
				endcase
			end
			else begin
				note = 4'd15;
				bar1 = 0;
				bar2 = 0;
				bar3 = 0;
			end
		end
	end
	
endmodule
