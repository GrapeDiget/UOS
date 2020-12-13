`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:12:02 12/07/2020 
// Design Name: 
// Module Name:    Mode_world_time 
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
module Mode_world_time(RESET, CLK, NUM_SYNC, MODE, MERIDIEM, HOUR, MIN, SEC, RW_OUTPUT, RS_OUTPUT, DATA_OUTPUT);
   input RESET, CLK;
	input [3:2] NUM_SYNC;
	input [3:0] MODE;
	input MERIDIEM;
	input [6:0] HOUR, MIN, SEC;
	output reg RW_OUTPUT, RS_OUTPUT;
	output reg [7:0] DATA_OUTPUT;
	
	//세계 시간의 meridiem, hour
	reg world_meridiem;
	reg [6:0] world_hour;
	
	//world_meridiem, world_hour를 1자리의 십진수 숫자로 변환할 변수
	reg [7:0] w_mer;
	wire [7:0] w_h10, w_h1;
		
	//w_mer, w_h10, w_h1에 값을 입력
	always @(*) begin
		if(!RESET)
			w_mer = 8'h41;
		else begin
			if(world_meridiem)		//meridiem = 1이면 P, meridiem = 0이면 A
				w_mer = 8'h50;
			else
				w_mer = 8'h41;
		end
	end
		
	Clock_sep U0 (world_hour, w_h10, w_h1);
	
	//분과 초 정보는 time 모듈에서 넘어오는 정보 그대로
	wire [7:0] w_m10, w_m1, w_s10, w_s1;
	
	Clock_sep U1 (MIN, w_m10, w_m1);
	Clock_sep U2 (SEC, w_s10, w_s1);
	
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
	
	//표시할 세계 시간의 위치정보
	reg [3:0] location;
	
	parameter gmt = 4'b0000,	//그리니치 평균시, +0
		 		 mad = 4'b0001,	//스페인 마드리드, +1
		 		 cai = 4'b0010,	//이집트 카이로, +2
				 dxb = 4'b0011,	//아랍에리미트 두바이, +4
				 bjs = 4'b0100,	//중국 베이징, +6
				 sel = 4'b0101,	//한국 서울, +9
				 syd = 4'b0110,	//호주 시드니, +10
				 hnl = 4'b0111,	//미국 호놀룰루, -10
				 lax = 4'b1000,	//미국 로스앤젤레스, -8
				 mex = 4'b1001,	//멕시코 멕시코시티, -6
				 nyc = 4'b1010,	//미국 뉴욕, -5
				 rai = 4'b1011;	//브라질 리우데자네이루, -3
	
	// num_sync 입력에 따라 표시할 세계시간의 위치를 변화시킨다.
	always @(negedge RESET or posedge CLK) begin
		if(!RESET)
			location = gmt;
		else begin
			if(MODE == 4'b0000) begin
				if(NUM_SYNC[2] == 1 && NUM_SYNC[3] == 0) begin
					if(location == gmt)	location = rai;
					else						location = location + 1;
				end
				else if(NUM_SYNC[2] == 0 && NUM_SYNC[3] == 1) begin
					if(location == rai)	location = gmt;
					else						location = location - 1;
				end
			end
			else location = gmt;
		end
	end
	
	//location에 따라 world_meridiem과 world_hour를 변경
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			world_meridiem = MERIDIEM;
			world_hour = HOUR;
		end
		else begin
			case (location)
				gmt : begin
					if(HOUR >= 9) begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR - 9;
					end
					else begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR + 3;
					end
				end
				mad : begin
					if(HOUR >= 8) begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR - 8;
					end
					else begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR + 4;
					end
				end
				cai : begin
					if(HOUR >= 7) begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR - 7;
					end
					else begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR + 5;
					end
				end
				dxb : begin
					if(HOUR >= 5) begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR - 5;
					end
					else begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR + 7;
					end
				end
				bjs : begin
					if(HOUR >= 3) begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR - 3;
					end
					else begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR + 9;
					end
				end
				sel : begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR;
				end
				syd : begin
					if(HOUR <= 10) begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR + 1;
					end
					else begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR - 11;
					end
				end
				hnl : begin
					if(HOUR <= 6) begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR + 5;
					end
					else begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR - 7;
					end
				end
				lax : begin
					if(HOUR <= 5) begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR + 6;
					end
					else begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR - 6;
					end
				end
				mex : begin
					if(HOUR <= 2) begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR + 9;
					end
					else begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR - 3;
					end
				end
				nyc : begin
					if(HOUR <= 1) begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR + 10;
					end
					else begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR - 2;
					end
				end
				rai : begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR;
				end
				default : begin
					if(HOUR >= 9) begin
						world_meridiem = MERIDIEM;
						world_hour = HOUR - 9;
					end
					else begin
						world_meridiem = !MERIDIEM;
						world_hour = HOUR + 3;
					end
				end
			endcase
		end
	end			
	
	//location에 따라 출력에 연결될 위치정보 및 시간정보를 변경
	reg [7:0] loc1, loc2, loc3;
	reg sign;
	reg [3:0] different;
	
	reg [7:0] dif1;
	wire [7:0] dif2, dif3;
	
	always @(*) begin
		if(!RESET)
			dif1 = 8'h41;
		else begin
			if(sign)				//sign = 1이면 +, sign = 0이면 -
				dif1 = 8'h2B;
			else
				dif1 = 8'h2D;
		end
	end
	
	Clock_sep U3 ({0,0,0,different}, dif2, dif3);
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			loc1 = 8'h47;	//G
			loc2 = 8'h4D;	//M
			loc3 = 8'h54;	//T
			sign = 1;
			different = 0;
		end
		else begin
			case (location)
				gmt : begin
					loc1 = 8'h47;	//G
					loc2 = 8'h4D;	//M
					loc3 = 8'h54;	//T
					sign = 1;
					different = 0;
				end
				mad : begin
					loc1 = 8'h4D;	//M
					loc2 = 8'h41;	//A
					loc3 = 8'h44;	//D
					sign = 1;
					different = 1;
				end
				cai : begin
					loc1 = 8'h43;	//C
					loc2 = 8'h41;	//A
					loc3 = 8'h49;	//I
					sign = 1;
					different = 2;
				end
				dxb : begin
					loc1 = 8'h44;	//D
					loc2 = 8'h58;	//X
					loc3 = 8'h42;	//B
					sign = 1;
					different = 4;
				end
				bjs : begin
					loc1 = 8'h42;	//B
					loc2 = 8'h4A;	//J
					loc3 = 8'h53;	//S
					sign = 1;
					different = 6;
				end
				sel : begin
					loc1 = 8'h53;	//S
					loc2 = 8'h45;	//E
					loc3 = 8'h4C;	//L
					sign = 1;
					different = 9;
				end
				syd : begin
					loc1 = 8'h53;	//S
					loc2 = 8'h59;	//Y
					loc3 = 8'h44;	//D
					sign = 1;
					different = 10;
				end
				hnl : begin
					loc1 = 8'h48;	//H
					loc2 = 8'h4E;	//N
					loc3 = 8'h4C;	//L
					sign = 0;
					different = 10;
				end
				lax : begin
					loc1 = 8'h4C;	//L
					loc2 = 8'h41;	//A
					loc3 = 8'h58;	//X
					sign = 0;
					different = 8;
				end
				mex : begin
					loc1 = 8'h4D;	//M
					loc2 = 8'h45;	//E
					loc3 = 8'h58;	//X
					sign = 0;
					different = 6;
				end
				nyc : begin
					loc1 = 8'h4E;	//N
					loc2 = 8'h59;	//Y
					loc3 = 8'h43;	//C
					sign = 0;
					different = 5;
				end
				rai : begin
					loc1 = 8'h52;	//R
					loc2 = 8'h41;	//A
					loc3 = 8'h49;	//I
					sign = 0;
					different = 3;
				end
				default : begin
					loc1 = 8'h47;	//G
					loc2 = 8'h4D;	//M
					loc3 = 8'h54;	//T
					sign = 1;
					different = 0;
				end
			endcase
		end
	end
	
	//colon의 깜빡임을 제어
	integer cnt;
	
	always @(negedge RESET or posedge CLK) begin
		if(!RESET) begin
			cnt = 0;
			colon = 0;
		end
		else begin
			if(MODE == 4'b0000) begin
				if(cnt >= 999) begin		  
					cnt = 0;	colon = 0;
				end
				else if(cnt >= 499) begin
					colon = 1; cnt = cnt + 1;
				end
				else
					cnt = cnt + 1;
			end
			else begin
				cnt = 0;
				colon = 0;
			end
		end
	end
	
	//화면 출력을 위한 cnt
	reg [5:0] time_cnt;
	
	always @(negedge RESET, posedge CLK) begin
		if(!RESET)
			time_cnt = 0;
		else begin
			if(MODE == 4'b0000) begin
				if(time_cnt >= 35)
					time_cnt = 0;
				else
					time_cnt = time_cnt + 1;
			end
			else	time_cnt = 0;
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
			if(MODE == 4'b0000) begin					//mode = world_time
				RW_OUTPUT = 1'b0;
					case(time_cnt)
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
							DATA_OUTPUT = 8'h11;			//<
						end
						3 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						4 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h57;			//W
						end
						5 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h54;			//T
						end
						6 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						7 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = loc1;			//loc1
						end
						8 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = loc2;			//loc2
						end
						9 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = loc3;			//loc3
						end
						10 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						11 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = dif1;			//dif1
						end
						12 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = dif2;			//dif2
						end
						13 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = dif3;			//dif3
						end
						14 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h20;			//blank
						end
						15 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = 8'h10;			//>
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
							DATA_OUTPUT = w_mer;			//A 또는 P
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
							DATA_OUTPUT = w_h10;			//w_h10
						end
						26 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = w_h1;			//w_h1
						end
						27 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						28 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = w_m10;			//w_m10
						end
						29 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = w_m1;			//w_m1
						end
						30 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = col;			//:
						end
						31 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = w_s10;			//w_s10
						end
						32 : begin
							RS_OUTPUT = 1'b1;
							DATA_OUTPUT = w_s1;			//w_s1
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
			else begin
				RW_OUTPUT = 1;
				RS_OUTPUT = 1;
				DATA_OUTPUT = 8'b00000010;
			end
		end
	end	
		
endmodule
