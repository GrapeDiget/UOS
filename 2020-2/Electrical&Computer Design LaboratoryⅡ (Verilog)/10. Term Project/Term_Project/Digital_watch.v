`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:03:57 11/30/2020 
// Design Name: 
// Module Name:    Digital_watch 
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
module Digital_watch(RESET, CLK_1k, CLK_1M, BUS_INPUT, NUM_INPUT, CHAR_INPUT, LCD_E, LCD_RS, LCD_RW, LCD_DATA, PIEZO);
	input RESET, CLK_1k, CLK_1M;
	input [7:0] BUS_INPUT;
	input [3:0] NUM_INPUT;
	input [5:0] CHAR_INPUT;
	output LCD_E, PIEZO;
	output reg LCD_RS, LCD_RW;
	output reg [7:0] LCD_DATA;
	
	//메인 모듈에서 출력을 위한 상태값들
	reg [3:0] state;
	parameter delay = 4'b0000,
				 function_set = 4'b0001,
				 entry_mode = 4'b0010,
				 disp_onoff = 4'b0011,
				 line1 = 4'b0100,
				 line2 = 4'b0101,
				 delay_t = 4'b0110,
				 clear_disp = 4'b0111,
				 program = 4'b1000;
		
	//입력된 NUM_INPUT과 CHAR_INPUT을 pulse 신호로 변환
	wire [3:0] num_sync;
	wire [5:0] char_sync;
	In_sync N0 (NUM_INPUT[0], CLK_1k, num_sync[0]), N1	(NUM_INPUT[1], CLK_1k, num_sync[1]), N2 (NUM_INPUT[2], CLK_1k, num_sync[2]), N3 (NUM_INPUT[3], CLK_1k, num_sync[3]),
			  C0 (CHAR_INPUT[0], CLK_1k, char_sync[0]), C1 (CHAR_INPUT[1], CLK_1k, char_sync[1]), C2 (CHAR_INPUT[2], CLK_1k, char_sync[2]), C3 (CHAR_INPUT[3], CLK_1k, char_sync[3]), C4 (CHAR_INPUT[4], CLK_1k, char_sync[4]), C5 (CHAR_INPUT[5], CLK_1k, char_sync[5]);
	
	//모드 선언
	reg [3:0] mode, next_mode;
	parameter main = 4'b0000,
				 time_set = 4'b0001,
				 date = 4'b0010,
				 date_set = 4'b0011,
				 alarm = 4'b0100,
				 alarm_set = 4'b0101,
				 alarm_melody = 4'b0110,
				 world_time = 4'b0111,
				 stopwatch = 4'b1000,
				 timer = 4'b1010,
				 timer_set = 4'b1011;
		
	//CHAR_SYNC에 따라 모드 전환
	always @(negedge RESET or posedge CLK_1k) begin
		if(!RESET)
			next_mode = main;
		else begin
			if(char_sync[5]) begin			//F입력이 들어오면 BUS_INPUT에 따라 모드 변경
				case (BUS_INPUT)
					8'b00000000 : next_mode = main;
					8'b00000001 : next_mode = time_set;
					8'b00000010 : next_mode = date;
					8'b00000011 : next_mode = date_set;
					8'b00000100 : next_mode = alarm;
					8'b00000101 : next_mode = alarm_set;
					8'b00000110 : next_mode = alarm_melody;
					8'b00000111 : next_mode = world_time;
					8'b00001000 : next_mode = stopwatch;
					8'b00001010 : next_mode = timer;
					8'b00001011 : next_mode = timer_set;
					default	   : next_mode = main;
				endcase
			end
			else if(char_sync[4])			//E입력이 들어오면 모드와 입력에 상관 없이 메인으로 이동
					next_mode = main;
			else if(char_sync[3]) begin	//D입력이 들어오면 설정창일 경우 이전으로 이동
				case (mode)
					4'b0001 : next_mode = main;
					4'b0011 : next_mode = date;
					4'b0101 : next_mode = alarm;
					4'b0110 : next_mode = alarm;
					4'b1011 : next_mode = timer;
					default : next_mode = mode;
				endcase
			end
			else	next_mode = mode;
		end
	end
	
	//클럭에 동기되어 모드 반영
	always @(negedge RESET or posedge CLK_1k) begin
		if(~RESET)	
			mode <= main;
		else
			mode <= next_mode;
	end
	
	//하위 모듈에서 출력되는 LCD_RW, LCD_RS, LCD_DATA
	wire main_rw, main_rs;
	wire [7:0] main_data;
	
	wire date_rw, date_rs;
	wire [7:0] date_data;
	
	wire alarm_rw, alarm_rs;
	wire [7:0] alarm_data;
	
	wire world_rw, world_rs;
	wire [7:0] world_data;
	
	wire stopwach_rw, stopwatch_rs;
	wire [7:0] stopwatch_data;
	
	//Mode_time 으로부터 출력받는 현재 시간 정보
	reg program_en;
	wire meridiem;
	wire [6:0] hour, min, sec;
	
	//하위모듈로부터 출력 반환
	//---------------------------------------------------------------------------
	Mode_time  M0 (RESET, CLK_1k, num_sync, char_sync[1:0], mode, program_en, main_rw, main_rs, main_data, meridiem, hour, min, sec);
	Mode_date  M2 (RESET, CLK_1k, num_sync, mode, meridiem, hour, min, sec, date_rw, date_rs, date_data);
	Mode_alarm M4 (RESET, CLK_1k, CLK_1M, num_sync, char_sync[2], mode, meridiem, hour, min, sec, alarm_rw, alarm_rs, alarm_data, PIEZO);
	Mode_world_time M7 (RESET, CLK_1k, num_sync[3:2], mode, meridiem, hour, min, sec, world_rw, world_rs, world_data);
	Mode_stopwatch  M8 (RESET, CLK_1k, char_sync[1:0], mode, stopwatch_rw, stopwatch_rs, stopwatch_data);
	//---------------------------------------------------------------------------
	
	//메인 출력 LCD_DATA와 연결될 중간 값
	reg output_rw, output_rs;
	reg [7:0] output_data;
	
	//모드에 따라 하위모듈로 부터 오는 출력값을 중간 값과 연결
	always @(negedge RESET or posedge CLK_1k) begin
		if(!RESET) begin
			output_rw = main_rw;
			output_rs = main_rs;
			output_data = main_data;
		end
		else begin
			case (mode)
				main : begin
					output_rw = main_rw;
					output_rs = main_rs;
					output_data = main_data;
				end
				time_set : begin
					output_rw = main_rw;
					output_rs = main_rs;
					output_data = main_data;
				end
				date : begin
					output_rw = date_rw;
					output_rs = date_rs;
					output_data = date_data;
				end
				date_set : begin
					output_rw = date_rw;
					output_rs = date_rs;
					output_data = date_data;
				end
				alarm : begin
					output_rw = alarm_rw;
					output_rs = alarm_rs;
					output_data = alarm_data;
				end
				alarm_set : begin
					output_rw = alarm_rw;
					output_rs = alarm_rs;
					output_data = alarm_data;
				end
				alarm_melody : begin
					output_rw = alarm_rw;
					output_rs = alarm_rs;
					output_data = alarm_data;
				end
				world_time : begin
					output_rw = world_rw;
					output_rs = world_rs;
					output_data = world_data;
				end
				stopwatch : begin
					output_rw = stopwatch_rw;
					output_rs = stopwatch_rs;
					output_data = stopwatch_data;
				end


				default : begin
					output_rw = main_rw;
					output_rs = main_rs;
					output_data = main_data;
				end
			endcase
		end
	end
		
	//장비 동작 후 LCD panel에서 실행하게 될 내용
	integer cnt;

	always @(negedge RESET or posedge CLK_1k) begin
		if(~RESET) begin
			state = delay;
			cnt = 0;
			program_en = 0;
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
						state = program;
						cnt = 0;
					end
					else
						cnt = cnt + 1;
				end
				program : begin
					program_en = 1;
				end
				default : begin
						state = delay;
						cnt = 0;
				end
			endcase
		end
	end
	
	//각 state에서 수행할 command를 지정한다.
	always @(negedge RESET or posedge CLK_1k) begin
		if(~RESET) begin
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
				program : begin
					LCD_RS = output_rs;
					LCD_RW = output_rw;
					LCD_DATA = output_data;
				end
				default : begin
					LCD_RS = 1'b1;
					LCD_RW = 1'b1;
					LCD_DATA = 8'b00000000;
				end
			endcase
		end
	end
	
	assign LCD_E = CLK_1k;

endmodule
