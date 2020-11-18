`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:13:36 11/14/2020 
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
module lab_02(RESETN, CLK, LCD_E, LCD_RS, LCD_RW, LCD_DATA);
	input RESETN, CLK;
	output LCD_E;
	output reg LCD_RS, LCD_RW;
	output reg [7:0] LCD_DATA;
	
	reg [2:0] state;
	parameter delay = 3'b000,
				 function_set = 3'b001,
				 entry_mode = 3'b010,
				 disp_onoff = 3'b011,
				 line1 = 3'b100,
				 line2 = 3'b101,
				 round_robin = 3'b110,
				 clear_disp = 3'b111;
	
	integer cnt;
	integer cnt_100Hz;
	integer cnt_2Hz;
	reg clk_100Hz;
	
	//100Hz의 cnt, clk를 1kHz의 clk로 생성
	always @(negedge RESETN or posedge CLK) begin
		if(~RESETN) begin
			cnt_100Hz = 0;
			clk_100Hz = 1'b0;
		end
		else if (cnt_100Hz >= 4) begin
			cnt_100Hz = 0;
			clk_100Hz = ~clk_100Hz;
		end
		else
			cnt_100Hz = cnt_100Hz + 1;
	end
	
	//교안에 있는 text lcd의 제어 순서 예시에 따른 타이밍 설정
	always @(negedge RESETN or posedge clk_100Hz) begin
		if(~RESETN) begin
			state = delay;
			cnt = 0;
		end
		else begin
			case (state)
				delay : begin
					if (cnt == 70) begin
						state = function_set;
						cnt = 0;
					end
					else
						cnt = cnt + 1;
				end
				function_set : begin
					if (cnt == 30)  begin
						state = disp_onoff;
						cnt = 0;
					end
					else
						cnt = cnt + 1;
				end
				disp_onoff : begin
					if (cnt == 30) begin
						state = entry_mode;
						cnt = 0;
					end
					else
						cnt = cnt + 1;
				end
				entry_mode : begin
					if (cnt == 30) begin
						state = line1;
						cnt = 0;
					end
					else
						cnt = cnt + 1;
				end
				line1 : begin
					if (cnt == 40) begin
						state = line2;
						cnt = 0;
					end
					else
						cnt = cnt + 1;
				end
				line2 : begin
					if (cnt == 40) begin
						state = round_robin;
						cnt = 0;
					end
					else
						cnt = cnt + 1;
				end
				round_robin : begin
					if (cnt == 6000) begin
						state = clear_disp;
						cnt = 0;
					end
					else
						cnt = cnt + 1;
				end
				clear_disp : begin
					if (cnt == 200) begin
						state = line1;
						cnt = 0;
					end
					else
						cnt = cnt + 1;
				end
				default : begin
						state = delay;
						cnt = 0;
				end
			endcase
		end
	end
	
	//각 state에서 수행할 command를 지정한다.
	always @(negedge RESETN or posedge clk_100Hz) begin
		if(~RESETN) begin
			cnt_2Hz = 0;
			LCD_RS = 1'b1;
			LCD_RW = 1'b1;
			LCD_DATA = 8'b00000000;
		end
		else begin
			case (state)
				function_set : begin
					LCD_RS = 1'b0;
					LCD_RW = 1'b0;
					LCD_DATA = 8'b00111100;
				end
				disp_onoff : begin
					LCD_RS = 1'b0;
					LCD_RW = 1'b0;
					LCD_DATA = 8'b00001100;
				end
				entry_mode : begin
					LCD_RS = 1'b0;
					LCD_RW = 1'b0;
					LCD_DATA = 8'b00000110;
				end
				line1 : begin
					LCD_RW = 1'b0;
					case(cnt)
						0 : begin
							LCD_RS = 1'b0;
							LCD_DATA = 8'b10000000;
						end
						1 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						2 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h32;			//2
						end
						3 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h30;			//0
						end
						4 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h31;			//1
						end
						5 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h37;			//7
						end
						6 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h34;			//4
						end
						7 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h34;			//4
						end
						8 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h30;			//0
						end
						9 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h30;			//0
						end
						10 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h31;			//1
						end
						11 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h38;			//8
						end
						12 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						13 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						14 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						15 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						16 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						17 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						18 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						19 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						20 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						21 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						22 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h32;			//2
						end
						23 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h30;			//0
						end
						24 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h31;			//1
						end
						25 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h37;			//7
						end
						26 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h34;			//4
						end
						27 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h34;			//4
						end
						28 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h30;			//0
						end
						29 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h30;			//0
						end
						30 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h31;			//1
						end
						31 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h38;			//8
						end
						32 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						33 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						34 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						35 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						36 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						37 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						38 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						39 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						40 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end						
						default : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
					endcase
				end
				line2 : begin
					LCD_RW = 1'b0;
					case(cnt)
						0 : begin
							LCD_RS = 1'b0;
							LCD_DATA = 8'b11000000;
						end
						1 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						2 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h4B;			//K
						end
						3 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h69;			//i
						end
						4 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h6D;			//m
						end
						5 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						6 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h4D;			//M
						end
						7 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h69;			//i
						end
						8 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h6E;			//n
						end
						9 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h2D;			//-
						end
						10 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h48;			//H
						end
						11 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h6F;			//o
						end
						12 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						13 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						14 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						15 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						16 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						17 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						18 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						19 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						20 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						21 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						22 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h4B;			//K
						end
						23 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h69;			//i
						end
						24 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h6D;			//m
						end
						25 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						26 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h4D;			//M
						end
						27 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h69;			//i
						end
						28 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h6E;			//n
						end
						29 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h2D;			//-
						end
						30 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h48;			//H
						end
						31 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h6F;			//o
						end
						32 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						33 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						34 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						35 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						36 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						37 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						38 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						39 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						40 : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank
						end
						default : begin
							LCD_RS = 1'b1;
							LCD_DATA = 8'h20;			//blank	
						end
					endcase
				end
				round_robin : begin
					if (cnt_2Hz >= 49) begin
						cnt_2Hz = 0;
						LCD_RS = 1'b0;
						LCD_RW = 1'b0;
						LCD_DATA = 8'b00011000;						
					end
					else begin
						cnt_2Hz = cnt_2Hz + 1;
						LCD_RS = 1'b1;
						LCD_RW = 1'b1;
						LCD_DATA = 8'b00001100;
					end
				end
				clear_disp : begin
					LCD_RS = 1'b0;
					LCD_RW = 1'b0;
					LCD_DATA = 8'b00000001;
				end
				default : begin
					LCD_RS = 1'b1;
					LCD_RW = 1'b1;
					LCD_DATA = 8'b00000000;
				end
			endcase
		end
	end
	
	assign LCD_E = clk_100Hz;

endmodule

