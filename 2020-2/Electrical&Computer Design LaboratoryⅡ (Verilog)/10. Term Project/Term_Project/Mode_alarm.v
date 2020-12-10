`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:35:05 12/06/2020 
// Design Name: 
// Module Name:    Mode_alarm 
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
module Mode_alarm(RESET, CLK, CLK_1M, NUM_SYNC, C_INPUT, MODE, MERIDIEM, HOUR, MIN, SEC, RW_OUTPUT, RS_OUTPUT, DATA_OUTPUT, PIEZO);
   input RESET, CLK, CLK_1M;
	input [3:0] NUM_SYNC, MODE;
	input C_INPUT;
	input MERIDIEM;
	input [6:0] HOUR, MIN, SEC;
	output reg RW_OUTPUT, RS_OUTPUT;
	output reg [7:0] DATA_OUTPUT;
	output PIEZO;
	
	//알람이 설정된 시각
	reg alarm_meridiem;
	reg [6:0] alarm_hour, alarm_min, alarm_sec;
	
	//alarm_meridiem, alarm_hour, alarm_min, alarm_sec을 1자리의 십진수 숫자로 변환할 변수
	reg [7:0] a_mer;
	wire [7:0] a_h10, a_h1, a_m10, a_m1, a_s10, a_s1;
	
	//a_mer, a_h10, a_h1, a_m1, a_m10, a_s10, a_s1에 값을 입력
	always @(*) begin
		if(!RESET)
			a_mer = 8'h41;
		else begin
			if(alarm_meridiem)		//meridiem = 1이면 P, meridiem = 0이면 A
				a_mer = 8'h50;
			else
				a_mer = 8'h41;
		end
	end
		
	Clock_sep U0 (alarm_hour, a_h10, a_h1);
	Clock_sep U1 (alarm_min, a_m10, a_m1);
	Clock_sep U2 (alarm_sec, a_s10, a_s1);
	
	//: 의 표현을 위한 변수
	reg [7:0] col;
	reg colon;
	
	always @(*) begin
		if(!RESET)
			col = 8'h3A;
		else begin
			if(colon)			//colon = 1이면 blank, colon = 0이면 :
				col = 8'h20;
			else
				col = 8'h3A;
		end
	end
	
	//Mode_time_set
	wire [2:0] cursor;
	wire meridiem_set;
	wire [6:0] hour_set, min_set, sec_set;
	
	Mode_alarm_set M5 (RESET, CLK, NUM_SYNC, MODE, cursor, meridiem_set, hour_set, min_set, sec_set);
	
	//화면에 표시할 cursor의 위치
	reg [5:0] cursor_position;
	
	always @(*) begin
		if(!RESET)
			cursor_position = 6'd15;
		else begin
			case(cursor)
				0 : cursor_position = 6'd15;
				1 : cursor_position = 6'd14;
				2 : cursor_position = 6'd12;
				3 : cursor_position = 6'd11;
				4 : cursor_position = 6'd9;
				5 : cursor_position = 6'd8;
				6 : cursor_position = 6'd5;
				default : cursor_position = 6'd15;
			endcase
		end
	end
	
	//colon의 깜빡임 표현
	integer clock_cnt;
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			clock_cnt = 0;
			colon = 0;
		end
		else begin
				if(MODE == 4'b0101)		//mode = alarm_set이면 카운트 초기화
					clock_cnt = 0;
				else begin		
					if(clock_cnt >= 999) begin		  
						clock_cnt = 0;	colon = 0;
					end
					else if(clock_cnt >= 499) begin
						colon = 1; clock_cnt = clock_cnt + 1;
					end
					else
						clock_cnt = clock_cnt + 1;
				end
		end
	end
	
	//alarm_set 모듈의 출력값을 알람이 설정된 시각으로 반영	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			alarm_meridiem = 0;
			alarm_hour = 7;
			alarm_min = 0;
			alarm_sec = 0;
		end
		else begin
			if(MODE == 4'b0101) begin
				alarm_meridiem = meridiem_set;
				alarm_hour = hour_set;
				alarm_min = min_set;
				alarm_sec = sec_set;
			end
		end	
	end
	
	//멜로디 재생 여부 조절
	reg melody_on;
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			melody_on = 0;
		end
		else begin
			if(melody_on == 0 && {MERIDIEM, HOUR, MIN, SEC} == {alarm_meridiem, alarm_hour, alarm_min, alarm_sec})
				melody_on = 1;
			else if(MODE == 4'b0110) begin
				if(NUM_SYNC[2] == 1 && NUM_SYNC[3] == 0) begin
					melody_on = 0;
					melody_on = 1;
				end
				else if(NUM_SYNC[2] == 0 && NUM_SYNC[3] == 1) begin
					melody_on = 0;
					melody_on = 1;
				end
				else	melody_on = 1;
			end
			else if(melody_on == 1 && C_INPUT == 1)
				melody_on = 0;
		end
	end
	
	//Mode_alarm_melody
	wire [1:0] melody_sel;
	
	Mode_alarm_melody M6 (RESET, CLK, CLK_1M, NUM_SYNC[3:2], MODE, melody_on, melody_sel, PIEZO);
	
	//화면 출력을 위한 cnt
	reg [5:0] cnt;
	
	always @(negedge RESET, posedge CLK) begin
		if(!RESET)
			cnt = 0;
		else begin
			if(MODE == 4'b0100 || MODE == 4'b0101 || MODE == 4'b0110) begin
				if(cnt >= 35)
					cnt = 0;
				else
					cnt = cnt + 1;
			end
			else	cnt = 0;
		end
	end
	
	//mode에 따라 RW_OUTPUT, RS_OUTPUT, DATA_OUTPUT 지정
	always @(negedge RESET, posedge CLK) begin
		if(!RESET) begin
			RW_OUTPUT = 1;
			RS_OUTPUT = 1;
			DATA_OUTPUT = 8'b00000010;	
		end
		else begin
			if(MODE == 4'b0100) begin					//mode = alarm
				RW_OUTPUT = 1'b0;
					case(cnt)
						0 : begin							//LINE1 작성
							RS_OUTPUT = 1'b0;
							DATA_OUTPUT = 8'b10000000;
						end
						1 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						2 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						3 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						4 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						5 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						6 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						7 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h41;			//A
						end
						8 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4C;			//L
						end
						9 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h41;			//A
						end
						10 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h52;			//R
						end
						11 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4D;			//M
						end
						12 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						13 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						14 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						15 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						16 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						17 : begin							//LINE2로 이동
							RS_OUTPUT = 1'b0;
							DATA_OUTPUT = 8'b11000000;
						end
						18 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						19 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						20 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						21 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						22 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_mer;			//A 또는 P
						end
						23 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4D;			//M
						end
						24 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						25 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_h10;			//a_h10
						end
						26 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_h1;			//a_h1
						end
						27 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						28 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_m10;			//a_m10
						end
						29 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_m1;			//a_m1
						end
						30 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						31 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_s10;			//a_s10
						end
						32 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_s1;			//a_s1
						end
						33 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						default : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
					endcase
			end

			else if(MODE == 4'b0101) begin			//mode = alarm_set
					RW_OUTPUT = 1'b0;
					case(cnt)
						0 : begin							//LINE1 작성
							RS_OUTPUT = 1'b0;
							DATA_OUTPUT = 8'b10000000;
						end
						cursor_position : begin			//cursor의 위치에만 화살표 출력, 나머지는 blank
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h19;
						end
						17 : begin							//LINE2로 이동
							RS_OUTPUT = 1'b0;
							DATA_OUTPUT = 8'b11000000;
						end
						18 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						19 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						20 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						21 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						22 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_mer;			//A 또는 P
						end
						23 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h4D;			//M
						end
						24 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						25 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_h10;			//a_h10
						end
						26 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_h1;			//a_h1
						end
						27 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						28 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_m10;			//a_m10
						end
						29 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_m1;			//a_m1
						end
						30 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						31 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_s10;			//a_s10
						end
						32 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = a_s1;			//a_s1
						end
						33 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						default : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
					endcase
			end
			
			else if(MODE == 4'b0110) begin			//mode = alarm_melody
				case(melody_sel)
					2'b00 : begin
						RW_OUTPUT = 1'b0;
						case(cnt)
							0 : begin							//LINE1 작성
								RS_OUTPUT = 1'b0;
								DATA_OUTPUT = 8'b10000000;
							end
							1 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							2 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h41;			//A
							end
							3 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							4 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h61;			//a
							end
							5 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h72;			//r
							end
							6 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6D;			//m
							end
							7 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							8 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6D;			//m
							end
							9 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h65;			//e
							end
							10 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							11 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6F;			//o
							end
							12 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h64;			//d
							end
							13 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h79;			//y
							end
							14 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h96;			//음표1
							end
							15 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h91;			//음표2
							end
							16 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							17 : begin							//LINE2로 이동
								RS_OUTPUT = 1'b0;
								DATA_OUTPUT = 8'b11000000;
							end
							18 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							19 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h11;			//<
							end
							20 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							21 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							22 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							23 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							24 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							25 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6E;			//n
							end
							26 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6F;			//o
							end
							27 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h72;			//r
							end
							28 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6D;			//m
							end
							29 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h61;			//a
							end
							30 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							31 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							32 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h10;			//>
							end
							33 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							default : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
						endcase
					end
						
					2'b01 : begin
						RS_OUTPUT = 1'b1;
						case (cnt)
							0 : begin							//LINE1 작성
								RS_OUTPUT = 1'b0;
								DATA_OUTPUT = 8'b10000000;
							end
							1 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							2 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h41;			//A
							end
							3 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							4 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h61;			//a
							end
							5 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h72;			//r
							end
							6 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6D;			//m
							end
							7 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							8 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6D;			//m
							end
							9 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h65;			//e
							end
							10 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							11 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6F;			//o
							end
							12 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h64;			//d
							end
							13 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h79;			//y
							end
							14 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h96;			//음표1
							end
							15 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h91;			//음표2
							end
							16 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							17 : begin							//LINE2로 이동
								RS_OUTPUT = 1'b0;
								DATA_OUTPUT = 8'b11000000;
							end
							18 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							19 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h11;			//<
							end
							20 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h54;			//T
							end
							21 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h68;			//h
							end
							22 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h72;			//r
							end
							23 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h65;			//e
							end
							24 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h65;			//e
							end
							25 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							26 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h42;			//B
							end
							27 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h65;			//e
							end
							28 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h61;			//a
							end
							29 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h72;			//r
							end
							30 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h73;			//s
							end
							31 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							32 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h10;			//>
							end
							33 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							default : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
						endcase
					end
						
					2'b10 : begin
						case (cnt)
							0 : begin							//LINE1 작성
								RS_OUTPUT = 1'b0;
								DATA_OUTPUT = 8'b10000000;
							end
							1 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							2 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h41;			//A
							end
							3 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							4 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h61;			//a
							end
							5 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h72;			//r
							end
							6 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6D;			//m
							end
							7 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							8 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6D;			//m
							end
							9 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h65;			//e
							end
							10 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							11 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6F;			//o
							end
							12 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h64;			//d
							end
							13 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h79;			//y
							end
							14 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h96;			//음표1
							end
							15 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h91;			//음표2
							end
							16 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							17 : begin							//LINE2로 이동
								RS_OUTPUT = 1'b0;
								DATA_OUTPUT = 8'b11000000;
							end
							18 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							19 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h11;			//<
							end
							20 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h47;			//G
							end
							21 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6F;			//o
							end
							22 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6F;			//o
							end
							23 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h64;			//d
							end
							24 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							25 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h4D;			//M
							end
							26 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6F;			//o
							end
							27 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h72;			//r
							end
							28 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6E;			//n
							end
							29 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h69;			//i
							end
							30 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6E;			//n
							end
							31 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h67;			//g
							end
							32 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h10;			//>
							end
							33 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							default : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
						endcase
					end
						
					2'b11 : begin
						case (cnt)
							0 : begin							//LINE1 작성
								RS_OUTPUT = 1'b0;
								DATA_OUTPUT = 8'b10000000;
							end
							1 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							2 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h41;			//A
							end
							3 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							4 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h61;			//a
							end
							5 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h72;			//r
							end
							6 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6D;			//m
							end
							7 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							8 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6D;			//m
							end
							9 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h65;			//e
							end
							10 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							11 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6F;			//o
							end
							12 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h64;			//d
							end
							13 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h79;			//y
							end
							14 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h96;			//음표1
							end
							15 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h91;			//음표2
							end
							16 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							17 : begin							//LINE2로 이동
								RS_OUTPUT = 1'b0;
								DATA_OUTPUT = 8'b11000000;
							end
							18 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							19 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h11;			//<
							end
							20 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h53;			//S
							end
							21 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h63;			//c
							end
							22 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h68;			//h
							end
							23 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6F;			//o
							end
							24 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6F;			//o
							end
							25 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							26 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							27 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h42;			//B
							end
							28 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h65;			//e
							end
							29 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							30 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h6C;			//l
							end
							31 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							32 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h10;			//>
							end
							33 : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
							default : begin
								RS_OUTPUT = 1'b1;
								DATA_OUTPUT = 8'h20;			//blank
							end
						endcase
					end
					
				endcase

			end							
			else begin
				RW_OUTPUT = 1;
				RS_OUTPUT = 1;
				DATA_OUTPUT = 8'b00000010;
			end
		end
	end

endmodule
