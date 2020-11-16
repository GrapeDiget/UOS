`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:09:08 11/03/2020 
// Design Name: 
// Module Name:    application2 
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
module application2(a, b, clk, resetn, out, state);
	input a, b, clk, resetn;
	output reg out;
	
	localparam STATE_0 = 3'd0,
				  STATE_1 = 3'd1,
				  STATE_2 = 3'd2,
				  STATE_3 = 3'd3,
				  STATE_4 = 3'd4;
	
	output reg [2:0] state;
	reg [2:0] next_state;

	
	//�񵿱��� �Է��� ����� ��ȣ�� ��ȯ
	wire sync_A, sync_B;	
	In_sync U0 (.in(a), .clk(clk), .in_sync(sync_A));
	In_sync U1 (.in(b), .clk(clk), .in_sync(sync_B));
	
	//Next state ����ȸ��
	always @(*) begin
		next_state = state;
		case (state)
			STATE_0 : begin
				if (sync_A == 1 && sync_B == 0) 		 next_state = STATE_1;
				else                			  			 next_state = STATE_0;
			end
			STATE_1 : begin
				if (sync_A == 1 && sync_B == 0) 		 next_state = STATE_2;
				else if (sync_A == 0 && sync_B == 1) next_state = STATE_0;
				else											 next_state = STATE_1;
			end
			STATE_2 : begin
				if (sync_A == 0 && sync_B == 1) 		 next_state = STATE_3;
				else                                 next_state = STATE_2;
			end
			STATE_3 : begin
				if (sync_A == 1 && sync_B == 0) 		 next_state = STATE_4;
				else if (sync_A == 0 && sync_B == 1) next_state = STATE_0;
				else           				          next_state = STATE_3;
			end
			STATE_4 : begin
				if (sync_A == 1 && sync_B == 0) 		 next_state = STATE_2;
				else if (sync_A == 0 && sync_B == 1) next_state = STATE_0;
				else                				       next_state = STATE_4;
			end
			default : 										 next_state = STATE_0;
		endcase
	end
	
	//����õ�� ����ȸ��
	always @(posedge clk, negedge resetn) begin
		if (~resetn)
			state <= STATE_0;
		else
			state <= next_state;
	end
	
	//Output ����ȸ��
	always @(*) begin
		case (state)
			STATE_0: out = 0;
			STATE_1: out = 0;
			STATE_2: out = 0;
			STATE_3: out = 0;
			STATE_4: out = 1;
			default: out = 0;
		endcase
	end
endmodule

