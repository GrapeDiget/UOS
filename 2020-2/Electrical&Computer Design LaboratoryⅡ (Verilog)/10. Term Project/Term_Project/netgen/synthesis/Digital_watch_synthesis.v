////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: Digital_watch_synthesis.v
// /___/   /\     Timestamp: Tue Dec 01 00:05:19 2020
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim Digital_watch.ngc Digital_watch_synthesis.v 
// Device	: xc3s200-4-pq208
// Input file	: Digital_watch.ngc
// Output file	: E:\OneDrive\my_xilinx\Term_Project\netgen\synthesis\Digital_watch_synthesis.v
// # of Modules	: 1
// Design Name	: Digital_watch
// Xilinx        : D:\Xilinx_directory\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module Digital_watch (
  PIEZO, LCD_E, RESET, LCD_RS, LCD_RW, CLK_1k, CLK_1M, LCD_DATA, NUM_INPUT, CHAR_INPUT, BUS_INPUT
);
  output PIEZO;
  output LCD_E;
  input RESET;
  output LCD_RS;
  output LCD_RW;
  input CLK_1k;
  input CLK_1M;
  output [7 : 0] LCD_DATA;
  input [3 : 0] NUM_INPUT;
  input [3 : 0] CHAR_INPUT;
  input [7 : 0] BUS_INPUT;
  wire BUS_INPUT_0_IBUF_8;
  wire BUS_INPUT_1_IBUF_9;
  wire BUS_INPUT_2_IBUF_10;
  wire BUS_INPUT_3_IBUF_11;
  wire BUS_INPUT_4_IBUF_12;
  wire BUS_INPUT_5_IBUF_13;
  wire BUS_INPUT_6_IBUF_14;
  wire BUS_INPUT_7_IBUF_15;
  wire \C2/cnt_16 ;
  wire \C2/in_inv ;
  wire \C2/in_sync_18 ;
  wire \C2/in_sync_not0001 ;
  wire \C3/cnt_20 ;
  wire \C3/in_inv ;
  wire \C3/in_sync_22 ;
  wire \C3/in_sync_not0001 ;
  wire CHAR_INPUT_2_IBUF_26;
  wire CHAR_INPUT_3_IBUF_27;
  wire LCD_DATA_0_OBUF_37;
  wire LCD_DATA_1_38;
  wire LCD_DATA_2_39;
  wire LCD_DATA_3_40;
  wire LCD_DATA_4_41;
  wire LCD_DATA_4_1_42;
  wire LCD_DATA_6_43;
  wire LCD_DATA_7_44;
  wire LCD_DATA_cmp_eq00002;
  wire \LCD_DATA_mux0000[0] ;
  wire \LCD_DATA_mux0000[1] ;
  wire \LCD_DATA_mux0000[4] ;
  wire \LCD_DATA_mux0000[5] ;
  wire \LCD_DATA_mux0000[6] ;
  wire LCD_E_OBUF_66;
  wire LCD_E_OBUF1;
  wire LCD_RS_OBUF_69;
  wire LCD_RS_mux0000;
  wire LCD_RS_mux000020_71;
  wire LCD_RS_mux000031_72;
  wire LCD_RS_mux00007_73;
  wire LCD_RW_OBUF_75;
  wire \Madd_cnt_share0000_cy<10>_rt_78 ;
  wire \Madd_cnt_share0000_cy<11>_rt_80 ;
  wire \Madd_cnt_share0000_cy<12>_rt_82 ;
  wire \Madd_cnt_share0000_cy<13>_rt_84 ;
  wire \Madd_cnt_share0000_cy<14>_rt_86 ;
  wire \Madd_cnt_share0000_cy<15>_rt_88 ;
  wire \Madd_cnt_share0000_cy<16>_rt_90 ;
  wire \Madd_cnt_share0000_cy<17>_rt_92 ;
  wire \Madd_cnt_share0000_cy<18>_rt_94 ;
  wire \Madd_cnt_share0000_cy<19>_rt_96 ;
  wire \Madd_cnt_share0000_cy<1>_rt_98 ;
  wire \Madd_cnt_share0000_cy<20>_rt_100 ;
  wire \Madd_cnt_share0000_cy<21>_rt_102 ;
  wire \Madd_cnt_share0000_cy<22>_rt_104 ;
  wire \Madd_cnt_share0000_cy<23>_rt_106 ;
  wire \Madd_cnt_share0000_cy<24>_rt_108 ;
  wire \Madd_cnt_share0000_cy<25>_rt_110 ;
  wire \Madd_cnt_share0000_cy<26>_rt_112 ;
  wire \Madd_cnt_share0000_cy<27>_rt_114 ;
  wire \Madd_cnt_share0000_cy<28>_rt_116 ;
  wire \Madd_cnt_share0000_cy<29>_rt_118 ;
  wire \Madd_cnt_share0000_cy<2>_rt_120 ;
  wire \Madd_cnt_share0000_cy<30>_rt_122 ;
  wire \Madd_cnt_share0000_cy<3>_rt_124 ;
  wire \Madd_cnt_share0000_cy<4>_rt_126 ;
  wire \Madd_cnt_share0000_cy<5>_rt_128 ;
  wire \Madd_cnt_share0000_cy<6>_rt_130 ;
  wire \Madd_cnt_share0000_cy<7>_rt_132 ;
  wire \Madd_cnt_share0000_cy<8>_rt_134 ;
  wire \Madd_cnt_share0000_cy<9>_rt_136 ;
  wire \Madd_cnt_share0000_xor<31>_rt_138 ;
  wire \Mcompar_cnt_100Hz_cmp_ge0000_cy<0>_rt_140 ;
  wire Mcount_cnt_100Hz;
  wire Mcount_cnt_100Hz1;
  wire Mcount_cnt_100Hz10;
  wire Mcount_cnt_100Hz11;
  wire Mcount_cnt_100Hz12;
  wire Mcount_cnt_100Hz13;
  wire Mcount_cnt_100Hz14;
  wire Mcount_cnt_100Hz15;
  wire Mcount_cnt_100Hz16;
  wire Mcount_cnt_100Hz17;
  wire Mcount_cnt_100Hz18;
  wire Mcount_cnt_100Hz19;
  wire Mcount_cnt_100Hz2;
  wire Mcount_cnt_100Hz20;
  wire Mcount_cnt_100Hz21;
  wire Mcount_cnt_100Hz22;
  wire Mcount_cnt_100Hz23;
  wire Mcount_cnt_100Hz24;
  wire Mcount_cnt_100Hz25;
  wire Mcount_cnt_100Hz26;
  wire Mcount_cnt_100Hz27;
  wire Mcount_cnt_100Hz28;
  wire Mcount_cnt_100Hz29;
  wire Mcount_cnt_100Hz3;
  wire Mcount_cnt_100Hz30;
  wire Mcount_cnt_100Hz31;
  wire Mcount_cnt_100Hz4;
  wire Mcount_cnt_100Hz5;
  wire Mcount_cnt_100Hz6;
  wire Mcount_cnt_100Hz7;
  wire Mcount_cnt_100Hz8;
  wire Mcount_cnt_100Hz9;
  wire \Mcount_program_cnt_cy<10>_rt_255 ;
  wire \Mcount_program_cnt_cy<11>_rt_257 ;
  wire \Mcount_program_cnt_cy<12>_rt_259 ;
  wire \Mcount_program_cnt_cy<13>_rt_261 ;
  wire \Mcount_program_cnt_cy<14>_rt_263 ;
  wire \Mcount_program_cnt_cy<15>_rt_265 ;
  wire \Mcount_program_cnt_cy<16>_rt_267 ;
  wire \Mcount_program_cnt_cy<17>_rt_269 ;
  wire \Mcount_program_cnt_cy<18>_rt_271 ;
  wire \Mcount_program_cnt_cy<19>_rt_273 ;
  wire \Mcount_program_cnt_cy<1>_rt_275 ;
  wire \Mcount_program_cnt_cy<20>_rt_277 ;
  wire \Mcount_program_cnt_cy<21>_rt_279 ;
  wire \Mcount_program_cnt_cy<22>_rt_281 ;
  wire \Mcount_program_cnt_cy<23>_rt_283 ;
  wire \Mcount_program_cnt_cy<24>_rt_285 ;
  wire \Mcount_program_cnt_cy<25>_rt_287 ;
  wire \Mcount_program_cnt_cy<26>_rt_289 ;
  wire \Mcount_program_cnt_cy<27>_rt_291 ;
  wire \Mcount_program_cnt_cy<28>_rt_293 ;
  wire \Mcount_program_cnt_cy<29>_rt_295 ;
  wire \Mcount_program_cnt_cy<2>_rt_297 ;
  wire \Mcount_program_cnt_cy<30>_rt_299 ;
  wire \Mcount_program_cnt_cy<3>_rt_301 ;
  wire \Mcount_program_cnt_cy<4>_rt_303 ;
  wire \Mcount_program_cnt_cy<5>_rt_305 ;
  wire \Mcount_program_cnt_cy<6>_rt_307 ;
  wire \Mcount_program_cnt_cy<7>_rt_309 ;
  wire \Mcount_program_cnt_cy<8>_rt_311 ;
  wire \Mcount_program_cnt_cy<9>_rt_313 ;
  wire Mcount_program_cnt_eqn_0;
  wire Mcount_program_cnt_eqn_1;
  wire Mcount_program_cnt_eqn_10;
  wire Mcount_program_cnt_eqn_11;
  wire Mcount_program_cnt_eqn_12;
  wire Mcount_program_cnt_eqn_13;
  wire Mcount_program_cnt_eqn_14;
  wire Mcount_program_cnt_eqn_15;
  wire Mcount_program_cnt_eqn_16;
  wire Mcount_program_cnt_eqn_17;
  wire Mcount_program_cnt_eqn_18;
  wire Mcount_program_cnt_eqn_19;
  wire Mcount_program_cnt_eqn_2;
  wire Mcount_program_cnt_eqn_20;
  wire Mcount_program_cnt_eqn_21;
  wire Mcount_program_cnt_eqn_22;
  wire Mcount_program_cnt_eqn_23;
  wire Mcount_program_cnt_eqn_24;
  wire Mcount_program_cnt_eqn_25;
  wire Mcount_program_cnt_eqn_26;
  wire Mcount_program_cnt_eqn_27;
  wire Mcount_program_cnt_eqn_28;
  wire Mcount_program_cnt_eqn_29;
  wire Mcount_program_cnt_eqn_3;
  wire Mcount_program_cnt_eqn_30;
  wire Mcount_program_cnt_eqn_31;
  wire Mcount_program_cnt_eqn_4;
  wire Mcount_program_cnt_eqn_5;
  wire Mcount_program_cnt_eqn_6;
  wire Mcount_program_cnt_eqn_7;
  wire Mcount_program_cnt_eqn_8;
  wire Mcount_program_cnt_eqn_9;
  wire \Mcount_program_cnt_xor<31>_rt_347 ;
  wire N0;
  wire N1;
  wire N17;
  wire N19;
  wire N23;
  wire N25;
  wire N27;
  wire N29;
  wire N31;
  wire N32;
  wire N7;
  wire RESET_IBUF_360;
  wire RESET_inv;
  wire _mux0000;
  wire clk_100Hz_395;
  wire clk_100Hz_not0001;
  wire cnt_100Hz_cmp_ge0000;
  wire cnt_100Hz_cmp_ge0000_inv;
  wire \cnt_mux0000<0>120_464 ;
  wire \next_mode<0>4_530 ;
  wire \next_mode<0>77 ;
  wire \next_mode<0>771_532 ;
  wire program_cnt_not0001;
  wire state_FSM_FFd1_566;
  wire \state_FSM_FFd1-In_567 ;
  wire state_FSM_FFd2_568;
  wire state_FSM_FFd3_569;
  wire \state_FSM_FFd3-In ;
  wire state_FSM_FFd4_571;
  wire state_FSM_FFd5_572;
  wire state_FSM_FFd6_573;
  wire \state_FSM_FFd6-In ;
  wire state_FSM_FFd7_575;
  wire state_cmp_eq0000;
  wire state_cmp_eq0001;
  wire state_cmp_eq0002;
  wire state_cmp_eq0004;
  wire [6 : 0] LCD_DATA_cmp_eq00001_wg_cy;
  wire [6 : 0] LCD_DATA_cmp_eq00001_wg_lut;
  wire [30 : 0] Madd_cnt_share0000_cy;
  wire [0 : 0] Madd_cnt_share0000_lut;
  wire [8 : 0] Mcompar_cnt_100Hz_cmp_ge0000_cy;
  wire [9 : 1] Mcompar_cnt_100Hz_cmp_ge0000_lut;
  wire [30 : 0] Mcount_cnt_100Hz_cy;
  wire [31 : 0] Mcount_cnt_100Hz_lut;
  wire [30 : 0] Mcount_program_cnt_cy;
  wire [0 : 0] Mcount_program_cnt_lut;
  wire [31 : 0] Result;
  wire [31 : 0] cnt;
  wire [31 : 0] cnt_100Hz;
  wire [31 : 0] cnt_mux0000;
  wire [31 : 0] cnt_share0000;
  wire [0 : 0] mode;
  wire [0 : 0] next_mode;
  wire [31 : 0] program_cnt;
  wire [6 : 0] state_cmp_eq0004_wg_cy;
  wire [7 : 0] state_cmp_eq0004_wg_lut;
  GND   XST_GND (
    .G(LCD_DATA_0_OBUF_37)
  );
  VCC   XST_VCC (
    .P(N1)
  );
  FDC   cnt_0 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[31]),
    .Q(cnt[0])
  );
  FDC   cnt_1 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[30]),
    .Q(cnt[1])
  );
  FDC   cnt_2 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[29]),
    .Q(cnt[2])
  );
  FDC   cnt_3 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[28]),
    .Q(cnt[3])
  );
  FDC   cnt_4 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[27]),
    .Q(cnt[4])
  );
  FDC   cnt_5 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[26]),
    .Q(cnt[5])
  );
  FDC   cnt_6 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[25]),
    .Q(cnt[6])
  );
  FDC   cnt_7 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[24]),
    .Q(cnt[7])
  );
  FDC   cnt_8 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[23]),
    .Q(cnt[8])
  );
  FDC   cnt_9 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[22]),
    .Q(cnt[9])
  );
  FDC   cnt_10 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[21]),
    .Q(cnt[10])
  );
  FDC   cnt_11 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[20]),
    .Q(cnt[11])
  );
  FDC   cnt_12 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[19]),
    .Q(cnt[12])
  );
  FDC   cnt_13 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[18]),
    .Q(cnt[13])
  );
  FDC   cnt_14 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[17]),
    .Q(cnt[14])
  );
  FDC   cnt_15 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[16]),
    .Q(cnt[15])
  );
  FDC   cnt_16 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[15]),
    .Q(cnt[16])
  );
  FDC   cnt_17 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[14]),
    .Q(cnt[17])
  );
  FDC   cnt_18 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[13]),
    .Q(cnt[18])
  );
  FDC   cnt_19 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[12]),
    .Q(cnt[19])
  );
  FDC   cnt_20 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[11]),
    .Q(cnt[20])
  );
  FDC   cnt_21 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[10]),
    .Q(cnt[21])
  );
  FDC   cnt_22 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[9]),
    .Q(cnt[22])
  );
  FDC   cnt_23 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[8]),
    .Q(cnt[23])
  );
  FDC   cnt_24 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[7]),
    .Q(cnt[24])
  );
  FDC   cnt_25 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[6]),
    .Q(cnt[25])
  );
  FDC   cnt_26 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[5]),
    .Q(cnt[26])
  );
  FDC   cnt_27 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[4]),
    .Q(cnt[27])
  );
  FDC   cnt_28 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[3]),
    .Q(cnt[28])
  );
  FDC   cnt_29 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[2]),
    .Q(cnt[29])
  );
  FDC   cnt_30 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[1]),
    .Q(cnt[30])
  );
  FDC   cnt_31 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(cnt_mux0000[0]),
    .Q(cnt[31])
  );
  FDCE   clk_100Hz (
    .C(LCD_E_OBUF_66),
    .CE(cnt_100Hz_cmp_ge0000),
    .CLR(RESET_inv),
    .D(clk_100Hz_not0001),
    .Q(clk_100Hz_395)
  );
  FDP   LCD_RS_36 (
    .C(clk_100Hz_395),
    .D(LCD_RS_mux0000),
    .PRE(RESET_inv),
    .Q(LCD_RS_OBUF_69)
  );
  FDP   LCD_RW_37 (
    .C(clk_100Hz_395),
    .D(_mux0000),
    .PRE(RESET_inv),
    .Q(LCD_RW_OBUF_75)
  );
  FDC   LCD_DATA_1 (
    .C(clk_100Hz_395),
    .CLR(RESET_inv),
    .D(\LCD_DATA_mux0000[6] ),
    .Q(LCD_DATA_1_38)
  );
  FDC   LCD_DATA_2 (
    .C(clk_100Hz_395),
    .CLR(RESET_inv),
    .D(\LCD_DATA_mux0000[5] ),
    .Q(LCD_DATA_2_39)
  );
  FDC   LCD_DATA_3 (
    .C(clk_100Hz_395),
    .CLR(RESET_inv),
    .D(\LCD_DATA_mux0000[4] ),
    .Q(LCD_DATA_3_40)
  );
  FDC   LCD_DATA_4 (
    .C(clk_100Hz_395),
    .CLR(RESET_inv),
    .D(state_FSM_FFd6_573),
    .Q(LCD_DATA_4_41)
  );
  FDC   LCD_DATA_6 (
    .C(clk_100Hz_395),
    .CLR(RESET_inv),
    .D(\LCD_DATA_mux0000[1] ),
    .Q(LCD_DATA_6_43)
  );
  FDC   LCD_DATA_7 (
    .C(clk_100Hz_395),
    .CLR(RESET_inv),
    .D(\LCD_DATA_mux0000[0] ),
    .Q(LCD_DATA_7_44)
  );
  FDR_1   \C3/cnt  (
    .C(LCD_E_OBUF_66),
    .D(N1),
    .R(\C3/in_inv ),
    .Q(\C3/cnt_20 )
  );
  FDR_1   \C3/in_sync  (
    .C(LCD_E_OBUF_66),
    .D(\C3/in_sync_not0001 ),
    .R(\C3/in_inv ),
    .Q(\C3/in_sync_22 )
  );
  FDR_1   \C2/cnt  (
    .C(LCD_E_OBUF_66),
    .D(N1),
    .R(\C2/in_inv ),
    .Q(\C2/cnt_16 )
  );
  FDR_1   \C2/in_sync  (
    .C(LCD_E_OBUF_66),
    .D(\C2/in_sync_not0001 ),
    .R(\C2/in_inv ),
    .Q(\C2/in_sync_18 )
  );
  MUXCY   \Mcount_cnt_100Hz_cy<0>  (
    .CI(cnt_100Hz_cmp_ge0000_inv),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[0]),
    .O(Mcount_cnt_100Hz_cy[0])
  );
  XORCY   \Mcount_cnt_100Hz_xor<0>  (
    .CI(cnt_100Hz_cmp_ge0000_inv),
    .LI(Mcount_cnt_100Hz_lut[0]),
    .O(Mcount_cnt_100Hz)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<1>  (
    .CI(Mcount_cnt_100Hz_cy[0]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[1]),
    .O(Mcount_cnt_100Hz_cy[1])
  );
  XORCY   \Mcount_cnt_100Hz_xor<1>  (
    .CI(Mcount_cnt_100Hz_cy[0]),
    .LI(Mcount_cnt_100Hz_lut[1]),
    .O(Mcount_cnt_100Hz1)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<2>  (
    .CI(Mcount_cnt_100Hz_cy[1]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[2]),
    .O(Mcount_cnt_100Hz_cy[2])
  );
  XORCY   \Mcount_cnt_100Hz_xor<2>  (
    .CI(Mcount_cnt_100Hz_cy[1]),
    .LI(Mcount_cnt_100Hz_lut[2]),
    .O(Mcount_cnt_100Hz2)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<3>  (
    .CI(Mcount_cnt_100Hz_cy[2]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[3]),
    .O(Mcount_cnt_100Hz_cy[3])
  );
  XORCY   \Mcount_cnt_100Hz_xor<3>  (
    .CI(Mcount_cnt_100Hz_cy[2]),
    .LI(Mcount_cnt_100Hz_lut[3]),
    .O(Mcount_cnt_100Hz3)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<4>  (
    .CI(Mcount_cnt_100Hz_cy[3]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[4]),
    .O(Mcount_cnt_100Hz_cy[4])
  );
  XORCY   \Mcount_cnt_100Hz_xor<4>  (
    .CI(Mcount_cnt_100Hz_cy[3]),
    .LI(Mcount_cnt_100Hz_lut[4]),
    .O(Mcount_cnt_100Hz4)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<5>  (
    .CI(Mcount_cnt_100Hz_cy[4]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[5]),
    .O(Mcount_cnt_100Hz_cy[5])
  );
  XORCY   \Mcount_cnt_100Hz_xor<5>  (
    .CI(Mcount_cnt_100Hz_cy[4]),
    .LI(Mcount_cnt_100Hz_lut[5]),
    .O(Mcount_cnt_100Hz5)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<6>  (
    .CI(Mcount_cnt_100Hz_cy[5]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[6]),
    .O(Mcount_cnt_100Hz_cy[6])
  );
  XORCY   \Mcount_cnt_100Hz_xor<6>  (
    .CI(Mcount_cnt_100Hz_cy[5]),
    .LI(Mcount_cnt_100Hz_lut[6]),
    .O(Mcount_cnt_100Hz6)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<7>  (
    .CI(Mcount_cnt_100Hz_cy[6]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[7]),
    .O(Mcount_cnt_100Hz_cy[7])
  );
  XORCY   \Mcount_cnt_100Hz_xor<7>  (
    .CI(Mcount_cnt_100Hz_cy[6]),
    .LI(Mcount_cnt_100Hz_lut[7]),
    .O(Mcount_cnt_100Hz7)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<8>  (
    .CI(Mcount_cnt_100Hz_cy[7]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[8]),
    .O(Mcount_cnt_100Hz_cy[8])
  );
  XORCY   \Mcount_cnt_100Hz_xor<8>  (
    .CI(Mcount_cnt_100Hz_cy[7]),
    .LI(Mcount_cnt_100Hz_lut[8]),
    .O(Mcount_cnt_100Hz8)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<9>  (
    .CI(Mcount_cnt_100Hz_cy[8]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[9]),
    .O(Mcount_cnt_100Hz_cy[9])
  );
  XORCY   \Mcount_cnt_100Hz_xor<9>  (
    .CI(Mcount_cnt_100Hz_cy[8]),
    .LI(Mcount_cnt_100Hz_lut[9]),
    .O(Mcount_cnt_100Hz9)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<10>  (
    .CI(Mcount_cnt_100Hz_cy[9]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[10]),
    .O(Mcount_cnt_100Hz_cy[10])
  );
  XORCY   \Mcount_cnt_100Hz_xor<10>  (
    .CI(Mcount_cnt_100Hz_cy[9]),
    .LI(Mcount_cnt_100Hz_lut[10]),
    .O(Mcount_cnt_100Hz10)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<11>  (
    .CI(Mcount_cnt_100Hz_cy[10]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[11]),
    .O(Mcount_cnt_100Hz_cy[11])
  );
  XORCY   \Mcount_cnt_100Hz_xor<11>  (
    .CI(Mcount_cnt_100Hz_cy[10]),
    .LI(Mcount_cnt_100Hz_lut[11]),
    .O(Mcount_cnt_100Hz11)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<12>  (
    .CI(Mcount_cnt_100Hz_cy[11]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[12]),
    .O(Mcount_cnt_100Hz_cy[12])
  );
  XORCY   \Mcount_cnt_100Hz_xor<12>  (
    .CI(Mcount_cnt_100Hz_cy[11]),
    .LI(Mcount_cnt_100Hz_lut[12]),
    .O(Mcount_cnt_100Hz12)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<13>  (
    .CI(Mcount_cnt_100Hz_cy[12]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[13]),
    .O(Mcount_cnt_100Hz_cy[13])
  );
  XORCY   \Mcount_cnt_100Hz_xor<13>  (
    .CI(Mcount_cnt_100Hz_cy[12]),
    .LI(Mcount_cnt_100Hz_lut[13]),
    .O(Mcount_cnt_100Hz13)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<14>  (
    .CI(Mcount_cnt_100Hz_cy[13]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[14]),
    .O(Mcount_cnt_100Hz_cy[14])
  );
  XORCY   \Mcount_cnt_100Hz_xor<14>  (
    .CI(Mcount_cnt_100Hz_cy[13]),
    .LI(Mcount_cnt_100Hz_lut[14]),
    .O(Mcount_cnt_100Hz14)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<15>  (
    .CI(Mcount_cnt_100Hz_cy[14]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[15]),
    .O(Mcount_cnt_100Hz_cy[15])
  );
  XORCY   \Mcount_cnt_100Hz_xor<15>  (
    .CI(Mcount_cnt_100Hz_cy[14]),
    .LI(Mcount_cnt_100Hz_lut[15]),
    .O(Mcount_cnt_100Hz15)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<16>  (
    .CI(Mcount_cnt_100Hz_cy[15]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[16]),
    .O(Mcount_cnt_100Hz_cy[16])
  );
  XORCY   \Mcount_cnt_100Hz_xor<16>  (
    .CI(Mcount_cnt_100Hz_cy[15]),
    .LI(Mcount_cnt_100Hz_lut[16]),
    .O(Mcount_cnt_100Hz16)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<17>  (
    .CI(Mcount_cnt_100Hz_cy[16]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[17]),
    .O(Mcount_cnt_100Hz_cy[17])
  );
  XORCY   \Mcount_cnt_100Hz_xor<17>  (
    .CI(Mcount_cnt_100Hz_cy[16]),
    .LI(Mcount_cnt_100Hz_lut[17]),
    .O(Mcount_cnt_100Hz17)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<18>  (
    .CI(Mcount_cnt_100Hz_cy[17]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[18]),
    .O(Mcount_cnt_100Hz_cy[18])
  );
  XORCY   \Mcount_cnt_100Hz_xor<18>  (
    .CI(Mcount_cnt_100Hz_cy[17]),
    .LI(Mcount_cnt_100Hz_lut[18]),
    .O(Mcount_cnt_100Hz18)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<19>  (
    .CI(Mcount_cnt_100Hz_cy[18]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[19]),
    .O(Mcount_cnt_100Hz_cy[19])
  );
  XORCY   \Mcount_cnt_100Hz_xor<19>  (
    .CI(Mcount_cnt_100Hz_cy[18]),
    .LI(Mcount_cnt_100Hz_lut[19]),
    .O(Mcount_cnt_100Hz19)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<20>  (
    .CI(Mcount_cnt_100Hz_cy[19]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[20]),
    .O(Mcount_cnt_100Hz_cy[20])
  );
  XORCY   \Mcount_cnt_100Hz_xor<20>  (
    .CI(Mcount_cnt_100Hz_cy[19]),
    .LI(Mcount_cnt_100Hz_lut[20]),
    .O(Mcount_cnt_100Hz20)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<21>  (
    .CI(Mcount_cnt_100Hz_cy[20]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[21]),
    .O(Mcount_cnt_100Hz_cy[21])
  );
  XORCY   \Mcount_cnt_100Hz_xor<21>  (
    .CI(Mcount_cnt_100Hz_cy[20]),
    .LI(Mcount_cnt_100Hz_lut[21]),
    .O(Mcount_cnt_100Hz21)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<22>  (
    .CI(Mcount_cnt_100Hz_cy[21]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[22]),
    .O(Mcount_cnt_100Hz_cy[22])
  );
  XORCY   \Mcount_cnt_100Hz_xor<22>  (
    .CI(Mcount_cnt_100Hz_cy[21]),
    .LI(Mcount_cnt_100Hz_lut[22]),
    .O(Mcount_cnt_100Hz22)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<23>  (
    .CI(Mcount_cnt_100Hz_cy[22]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[23]),
    .O(Mcount_cnt_100Hz_cy[23])
  );
  XORCY   \Mcount_cnt_100Hz_xor<23>  (
    .CI(Mcount_cnt_100Hz_cy[22]),
    .LI(Mcount_cnt_100Hz_lut[23]),
    .O(Mcount_cnt_100Hz23)
  );
  MUXCY   \Mcount_cnt_100Hz_cy<24>  (
    .CI(Mcount_cnt_100Hz_cy[23]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[24]),
    .O(Mcount_cnt_100Hz_cy[24])
  );
  XORCY   \Mcount_cnt_100Hz_xor<24>  (
    .CI(Mcount_cnt_100Hz_cy[23]),
    .LI(Mcount_cnt_100Hz_lut[24]),
    .O(Mcount_cnt_100Hz24)
  );
  LUT3 #(
    .INIT ( 8'hAC ))
  \Mcount_cnt_100Hz_lut<25>  (
    .I0(LCD_DATA_0_OBUF_37),
    .I1(cnt_100Hz[25]),
    .I2(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[25])
  );
  MUXCY   \Mcount_cnt_100Hz_cy<25>  (
    .CI(Mcount_cnt_100Hz_cy[24]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[25]),
    .O(Mcount_cnt_100Hz_cy[25])
  );
  XORCY   \Mcount_cnt_100Hz_xor<25>  (
    .CI(Mcount_cnt_100Hz_cy[24]),
    .LI(Mcount_cnt_100Hz_lut[25]),
    .O(Mcount_cnt_100Hz25)
  );
  LUT3 #(
    .INIT ( 8'hAC ))
  \Mcount_cnt_100Hz_lut<26>  (
    .I0(LCD_DATA_0_OBUF_37),
    .I1(cnt_100Hz[26]),
    .I2(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[26])
  );
  MUXCY   \Mcount_cnt_100Hz_cy<26>  (
    .CI(Mcount_cnt_100Hz_cy[25]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[26]),
    .O(Mcount_cnt_100Hz_cy[26])
  );
  XORCY   \Mcount_cnt_100Hz_xor<26>  (
    .CI(Mcount_cnt_100Hz_cy[25]),
    .LI(Mcount_cnt_100Hz_lut[26]),
    .O(Mcount_cnt_100Hz26)
  );
  LUT3 #(
    .INIT ( 8'hE4 ))
  \Mcount_cnt_100Hz_lut<27>  (
    .I0(cnt_100Hz_cmp_ge0000),
    .I1(cnt_100Hz[27]),
    .I2(LCD_DATA_0_OBUF_37),
    .O(Mcount_cnt_100Hz_lut[27])
  );
  MUXCY   \Mcount_cnt_100Hz_cy<27>  (
    .CI(Mcount_cnt_100Hz_cy[26]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[27]),
    .O(Mcount_cnt_100Hz_cy[27])
  );
  XORCY   \Mcount_cnt_100Hz_xor<27>  (
    .CI(Mcount_cnt_100Hz_cy[26]),
    .LI(Mcount_cnt_100Hz_lut[27]),
    .O(Mcount_cnt_100Hz27)
  );
  LUT3 #(
    .INIT ( 8'hE4 ))
  \Mcount_cnt_100Hz_lut<28>  (
    .I0(cnt_100Hz_cmp_ge0000),
    .I1(cnt_100Hz[28]),
    .I2(LCD_DATA_0_OBUF_37),
    .O(Mcount_cnt_100Hz_lut[28])
  );
  MUXCY   \Mcount_cnt_100Hz_cy<28>  (
    .CI(Mcount_cnt_100Hz_cy[27]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[28]),
    .O(Mcount_cnt_100Hz_cy[28])
  );
  XORCY   \Mcount_cnt_100Hz_xor<28>  (
    .CI(Mcount_cnt_100Hz_cy[27]),
    .LI(Mcount_cnt_100Hz_lut[28]),
    .O(Mcount_cnt_100Hz28)
  );
  LUT3 #(
    .INIT ( 8'hE4 ))
  \Mcount_cnt_100Hz_lut<29>  (
    .I0(cnt_100Hz_cmp_ge0000),
    .I1(cnt_100Hz[29]),
    .I2(LCD_DATA_0_OBUF_37),
    .O(Mcount_cnt_100Hz_lut[29])
  );
  MUXCY   \Mcount_cnt_100Hz_cy<29>  (
    .CI(Mcount_cnt_100Hz_cy[28]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[29]),
    .O(Mcount_cnt_100Hz_cy[29])
  );
  XORCY   \Mcount_cnt_100Hz_xor<29>  (
    .CI(Mcount_cnt_100Hz_cy[28]),
    .LI(Mcount_cnt_100Hz_lut[29]),
    .O(Mcount_cnt_100Hz29)
  );
  LUT3 #(
    .INIT ( 8'hE4 ))
  \Mcount_cnt_100Hz_lut<30>  (
    .I0(cnt_100Hz_cmp_ge0000),
    .I1(cnt_100Hz[30]),
    .I2(LCD_DATA_0_OBUF_37),
    .O(Mcount_cnt_100Hz_lut[30])
  );
  MUXCY   \Mcount_cnt_100Hz_cy<30>  (
    .CI(Mcount_cnt_100Hz_cy[29]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcount_cnt_100Hz_lut[30]),
    .O(Mcount_cnt_100Hz_cy[30])
  );
  XORCY   \Mcount_cnt_100Hz_xor<30>  (
    .CI(Mcount_cnt_100Hz_cy[29]),
    .LI(Mcount_cnt_100Hz_lut[30]),
    .O(Mcount_cnt_100Hz30)
  );
  LUT3 #(
    .INIT ( 8'hE4 ))
  \Mcount_cnt_100Hz_lut<31>  (
    .I0(cnt_100Hz_cmp_ge0000),
    .I1(cnt_100Hz[31]),
    .I2(LCD_DATA_0_OBUF_37),
    .O(Mcount_cnt_100Hz_lut[31])
  );
  XORCY   \Mcount_cnt_100Hz_xor<31>  (
    .CI(Mcount_cnt_100Hz_cy[30]),
    .LI(Mcount_cnt_100Hz_lut[31]),
    .O(Mcount_cnt_100Hz31)
  );
  FDC   cnt_100Hz_0 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz),
    .Q(cnt_100Hz[0])
  );
  FDC   cnt_100Hz_1 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz1),
    .Q(cnt_100Hz[1])
  );
  FDC   cnt_100Hz_2 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz2),
    .Q(cnt_100Hz[2])
  );
  FDC   cnt_100Hz_3 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz3),
    .Q(cnt_100Hz[3])
  );
  FDC   cnt_100Hz_4 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz4),
    .Q(cnt_100Hz[4])
  );
  FDC   cnt_100Hz_5 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz5),
    .Q(cnt_100Hz[5])
  );
  FDC   cnt_100Hz_6 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz6),
    .Q(cnt_100Hz[6])
  );
  FDC   cnt_100Hz_7 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz7),
    .Q(cnt_100Hz[7])
  );
  FDC   cnt_100Hz_8 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz8),
    .Q(cnt_100Hz[8])
  );
  FDC   cnt_100Hz_9 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz9),
    .Q(cnt_100Hz[9])
  );
  FDC   cnt_100Hz_10 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz10),
    .Q(cnt_100Hz[10])
  );
  FDC   cnt_100Hz_11 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz11),
    .Q(cnt_100Hz[11])
  );
  FDC   cnt_100Hz_12 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz12),
    .Q(cnt_100Hz[12])
  );
  FDC   cnt_100Hz_13 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz13),
    .Q(cnt_100Hz[13])
  );
  FDC   cnt_100Hz_14 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz14),
    .Q(cnt_100Hz[14])
  );
  FDC   cnt_100Hz_15 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz15),
    .Q(cnt_100Hz[15])
  );
  FDC   cnt_100Hz_16 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz16),
    .Q(cnt_100Hz[16])
  );
  FDC   cnt_100Hz_17 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz17),
    .Q(cnt_100Hz[17])
  );
  FDC   cnt_100Hz_18 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz18),
    .Q(cnt_100Hz[18])
  );
  FDC   cnt_100Hz_19 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz19),
    .Q(cnt_100Hz[19])
  );
  FDC   cnt_100Hz_20 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz20),
    .Q(cnt_100Hz[20])
  );
  FDC   cnt_100Hz_21 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz21),
    .Q(cnt_100Hz[21])
  );
  FDC   cnt_100Hz_22 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz22),
    .Q(cnt_100Hz[22])
  );
  FDC   cnt_100Hz_23 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz23),
    .Q(cnt_100Hz[23])
  );
  FDC   cnt_100Hz_24 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz24),
    .Q(cnt_100Hz[24])
  );
  FDC   cnt_100Hz_25 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz25),
    .Q(cnt_100Hz[25])
  );
  FDC   cnt_100Hz_26 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz26),
    .Q(cnt_100Hz[26])
  );
  FDC   cnt_100Hz_27 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz27),
    .Q(cnt_100Hz[27])
  );
  FDC   cnt_100Hz_28 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz28),
    .Q(cnt_100Hz[28])
  );
  FDC   cnt_100Hz_29 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz29),
    .Q(cnt_100Hz[29])
  );
  FDC   cnt_100Hz_30 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz30),
    .Q(cnt_100Hz[30])
  );
  FDC   cnt_100Hz_31 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(Mcount_cnt_100Hz31),
    .Q(cnt_100Hz[31])
  );
  FDCE   program_cnt_0 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_0),
    .Q(program_cnt[0])
  );
  FDCE   program_cnt_1 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_1),
    .Q(program_cnt[1])
  );
  FDCE   program_cnt_2 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_2),
    .Q(program_cnt[2])
  );
  FDCE   program_cnt_3 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_3),
    .Q(program_cnt[3])
  );
  FDCE   program_cnt_4 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_4),
    .Q(program_cnt[4])
  );
  FDCE   program_cnt_5 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_5),
    .Q(program_cnt[5])
  );
  FDCE   program_cnt_6 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_6),
    .Q(program_cnt[6])
  );
  FDCE   program_cnt_7 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_7),
    .Q(program_cnt[7])
  );
  FDCE   program_cnt_8 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_8),
    .Q(program_cnt[8])
  );
  FDCE   program_cnt_9 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_9),
    .Q(program_cnt[9])
  );
  FDCE   program_cnt_10 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_10),
    .Q(program_cnt[10])
  );
  FDCE   program_cnt_11 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_11),
    .Q(program_cnt[11])
  );
  FDCE   program_cnt_12 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_12),
    .Q(program_cnt[12])
  );
  FDCE   program_cnt_13 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_13),
    .Q(program_cnt[13])
  );
  FDCE   program_cnt_14 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_14),
    .Q(program_cnt[14])
  );
  FDCE   program_cnt_15 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_15),
    .Q(program_cnt[15])
  );
  FDCE   program_cnt_16 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_16),
    .Q(program_cnt[16])
  );
  FDCE   program_cnt_17 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_17),
    .Q(program_cnt[17])
  );
  FDCE   program_cnt_18 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_18),
    .Q(program_cnt[18])
  );
  FDCE   program_cnt_19 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_19),
    .Q(program_cnt[19])
  );
  FDCE   program_cnt_20 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_20),
    .Q(program_cnt[20])
  );
  FDCE   program_cnt_21 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_21),
    .Q(program_cnt[21])
  );
  FDCE   program_cnt_22 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_22),
    .Q(program_cnt[22])
  );
  FDCE   program_cnt_23 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_23),
    .Q(program_cnt[23])
  );
  FDCE   program_cnt_24 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_24),
    .Q(program_cnt[24])
  );
  FDCE   program_cnt_25 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_25),
    .Q(program_cnt[25])
  );
  FDCE   program_cnt_26 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_26),
    .Q(program_cnt[26])
  );
  FDCE   program_cnt_27 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_27),
    .Q(program_cnt[27])
  );
  FDCE   program_cnt_28 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_28),
    .Q(program_cnt[28])
  );
  FDCE   program_cnt_29 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_29),
    .Q(program_cnt[29])
  );
  FDCE   program_cnt_30 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_30),
    .Q(program_cnt[30])
  );
  FDCE   program_cnt_31 (
    .C(LCD_E_OBUF_66),
    .CE(program_cnt_not0001),
    .CLR(RESET_inv),
    .D(Mcount_program_cnt_eqn_31),
    .Q(program_cnt[31])
  );
  MUXCY   \Madd_cnt_share0000_cy<0>  (
    .CI(LCD_DATA_0_OBUF_37),
    .DI(N1),
    .S(Madd_cnt_share0000_lut[0]),
    .O(Madd_cnt_share0000_cy[0])
  );
  XORCY   \Madd_cnt_share0000_xor<0>  (
    .CI(LCD_DATA_0_OBUF_37),
    .LI(Madd_cnt_share0000_lut[0]),
    .O(cnt_share0000[0])
  );
  MUXCY   \Madd_cnt_share0000_cy<1>  (
    .CI(Madd_cnt_share0000_cy[0]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<1>_rt_98 ),
    .O(Madd_cnt_share0000_cy[1])
  );
  XORCY   \Madd_cnt_share0000_xor<1>  (
    .CI(Madd_cnt_share0000_cy[0]),
    .LI(\Madd_cnt_share0000_cy<1>_rt_98 ),
    .O(cnt_share0000[1])
  );
  MUXCY   \Madd_cnt_share0000_cy<2>  (
    .CI(Madd_cnt_share0000_cy[1]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<2>_rt_120 ),
    .O(Madd_cnt_share0000_cy[2])
  );
  XORCY   \Madd_cnt_share0000_xor<2>  (
    .CI(Madd_cnt_share0000_cy[1]),
    .LI(\Madd_cnt_share0000_cy<2>_rt_120 ),
    .O(cnt_share0000[2])
  );
  MUXCY   \Madd_cnt_share0000_cy<3>  (
    .CI(Madd_cnt_share0000_cy[2]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<3>_rt_124 ),
    .O(Madd_cnt_share0000_cy[3])
  );
  XORCY   \Madd_cnt_share0000_xor<3>  (
    .CI(Madd_cnt_share0000_cy[2]),
    .LI(\Madd_cnt_share0000_cy<3>_rt_124 ),
    .O(cnt_share0000[3])
  );
  MUXCY   \Madd_cnt_share0000_cy<4>  (
    .CI(Madd_cnt_share0000_cy[3]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<4>_rt_126 ),
    .O(Madd_cnt_share0000_cy[4])
  );
  XORCY   \Madd_cnt_share0000_xor<4>  (
    .CI(Madd_cnt_share0000_cy[3]),
    .LI(\Madd_cnt_share0000_cy<4>_rt_126 ),
    .O(cnt_share0000[4])
  );
  MUXCY   \Madd_cnt_share0000_cy<5>  (
    .CI(Madd_cnt_share0000_cy[4]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<5>_rt_128 ),
    .O(Madd_cnt_share0000_cy[5])
  );
  XORCY   \Madd_cnt_share0000_xor<5>  (
    .CI(Madd_cnt_share0000_cy[4]),
    .LI(\Madd_cnt_share0000_cy<5>_rt_128 ),
    .O(cnt_share0000[5])
  );
  MUXCY   \Madd_cnt_share0000_cy<6>  (
    .CI(Madd_cnt_share0000_cy[5]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<6>_rt_130 ),
    .O(Madd_cnt_share0000_cy[6])
  );
  XORCY   \Madd_cnt_share0000_xor<6>  (
    .CI(Madd_cnt_share0000_cy[5]),
    .LI(\Madd_cnt_share0000_cy<6>_rt_130 ),
    .O(cnt_share0000[6])
  );
  MUXCY   \Madd_cnt_share0000_cy<7>  (
    .CI(Madd_cnt_share0000_cy[6]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<7>_rt_132 ),
    .O(Madd_cnt_share0000_cy[7])
  );
  XORCY   \Madd_cnt_share0000_xor<7>  (
    .CI(Madd_cnt_share0000_cy[6]),
    .LI(\Madd_cnt_share0000_cy<7>_rt_132 ),
    .O(cnt_share0000[7])
  );
  MUXCY   \Madd_cnt_share0000_cy<8>  (
    .CI(Madd_cnt_share0000_cy[7]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<8>_rt_134 ),
    .O(Madd_cnt_share0000_cy[8])
  );
  XORCY   \Madd_cnt_share0000_xor<8>  (
    .CI(Madd_cnt_share0000_cy[7]),
    .LI(\Madd_cnt_share0000_cy<8>_rt_134 ),
    .O(cnt_share0000[8])
  );
  MUXCY   \Madd_cnt_share0000_cy<9>  (
    .CI(Madd_cnt_share0000_cy[8]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<9>_rt_136 ),
    .O(Madd_cnt_share0000_cy[9])
  );
  XORCY   \Madd_cnt_share0000_xor<9>  (
    .CI(Madd_cnt_share0000_cy[8]),
    .LI(\Madd_cnt_share0000_cy<9>_rt_136 ),
    .O(cnt_share0000[9])
  );
  MUXCY   \Madd_cnt_share0000_cy<10>  (
    .CI(Madd_cnt_share0000_cy[9]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<10>_rt_78 ),
    .O(Madd_cnt_share0000_cy[10])
  );
  XORCY   \Madd_cnt_share0000_xor<10>  (
    .CI(Madd_cnt_share0000_cy[9]),
    .LI(\Madd_cnt_share0000_cy<10>_rt_78 ),
    .O(cnt_share0000[10])
  );
  MUXCY   \Madd_cnt_share0000_cy<11>  (
    .CI(Madd_cnt_share0000_cy[10]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<11>_rt_80 ),
    .O(Madd_cnt_share0000_cy[11])
  );
  XORCY   \Madd_cnt_share0000_xor<11>  (
    .CI(Madd_cnt_share0000_cy[10]),
    .LI(\Madd_cnt_share0000_cy<11>_rt_80 ),
    .O(cnt_share0000[11])
  );
  MUXCY   \Madd_cnt_share0000_cy<12>  (
    .CI(Madd_cnt_share0000_cy[11]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<12>_rt_82 ),
    .O(Madd_cnt_share0000_cy[12])
  );
  XORCY   \Madd_cnt_share0000_xor<12>  (
    .CI(Madd_cnt_share0000_cy[11]),
    .LI(\Madd_cnt_share0000_cy<12>_rt_82 ),
    .O(cnt_share0000[12])
  );
  MUXCY   \Madd_cnt_share0000_cy<13>  (
    .CI(Madd_cnt_share0000_cy[12]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<13>_rt_84 ),
    .O(Madd_cnt_share0000_cy[13])
  );
  XORCY   \Madd_cnt_share0000_xor<13>  (
    .CI(Madd_cnt_share0000_cy[12]),
    .LI(\Madd_cnt_share0000_cy<13>_rt_84 ),
    .O(cnt_share0000[13])
  );
  MUXCY   \Madd_cnt_share0000_cy<14>  (
    .CI(Madd_cnt_share0000_cy[13]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<14>_rt_86 ),
    .O(Madd_cnt_share0000_cy[14])
  );
  XORCY   \Madd_cnt_share0000_xor<14>  (
    .CI(Madd_cnt_share0000_cy[13]),
    .LI(\Madd_cnt_share0000_cy<14>_rt_86 ),
    .O(cnt_share0000[14])
  );
  MUXCY   \Madd_cnt_share0000_cy<15>  (
    .CI(Madd_cnt_share0000_cy[14]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<15>_rt_88 ),
    .O(Madd_cnt_share0000_cy[15])
  );
  XORCY   \Madd_cnt_share0000_xor<15>  (
    .CI(Madd_cnt_share0000_cy[14]),
    .LI(\Madd_cnt_share0000_cy<15>_rt_88 ),
    .O(cnt_share0000[15])
  );
  MUXCY   \Madd_cnt_share0000_cy<16>  (
    .CI(Madd_cnt_share0000_cy[15]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<16>_rt_90 ),
    .O(Madd_cnt_share0000_cy[16])
  );
  XORCY   \Madd_cnt_share0000_xor<16>  (
    .CI(Madd_cnt_share0000_cy[15]),
    .LI(\Madd_cnt_share0000_cy<16>_rt_90 ),
    .O(cnt_share0000[16])
  );
  MUXCY   \Madd_cnt_share0000_cy<17>  (
    .CI(Madd_cnt_share0000_cy[16]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<17>_rt_92 ),
    .O(Madd_cnt_share0000_cy[17])
  );
  XORCY   \Madd_cnt_share0000_xor<17>  (
    .CI(Madd_cnt_share0000_cy[16]),
    .LI(\Madd_cnt_share0000_cy<17>_rt_92 ),
    .O(cnt_share0000[17])
  );
  MUXCY   \Madd_cnt_share0000_cy<18>  (
    .CI(Madd_cnt_share0000_cy[17]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<18>_rt_94 ),
    .O(Madd_cnt_share0000_cy[18])
  );
  XORCY   \Madd_cnt_share0000_xor<18>  (
    .CI(Madd_cnt_share0000_cy[17]),
    .LI(\Madd_cnt_share0000_cy<18>_rt_94 ),
    .O(cnt_share0000[18])
  );
  MUXCY   \Madd_cnt_share0000_cy<19>  (
    .CI(Madd_cnt_share0000_cy[18]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<19>_rt_96 ),
    .O(Madd_cnt_share0000_cy[19])
  );
  XORCY   \Madd_cnt_share0000_xor<19>  (
    .CI(Madd_cnt_share0000_cy[18]),
    .LI(\Madd_cnt_share0000_cy<19>_rt_96 ),
    .O(cnt_share0000[19])
  );
  MUXCY   \Madd_cnt_share0000_cy<20>  (
    .CI(Madd_cnt_share0000_cy[19]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<20>_rt_100 ),
    .O(Madd_cnt_share0000_cy[20])
  );
  XORCY   \Madd_cnt_share0000_xor<20>  (
    .CI(Madd_cnt_share0000_cy[19]),
    .LI(\Madd_cnt_share0000_cy<20>_rt_100 ),
    .O(cnt_share0000[20])
  );
  MUXCY   \Madd_cnt_share0000_cy<21>  (
    .CI(Madd_cnt_share0000_cy[20]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<21>_rt_102 ),
    .O(Madd_cnt_share0000_cy[21])
  );
  XORCY   \Madd_cnt_share0000_xor<21>  (
    .CI(Madd_cnt_share0000_cy[20]),
    .LI(\Madd_cnt_share0000_cy<21>_rt_102 ),
    .O(cnt_share0000[21])
  );
  MUXCY   \Madd_cnt_share0000_cy<22>  (
    .CI(Madd_cnt_share0000_cy[21]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<22>_rt_104 ),
    .O(Madd_cnt_share0000_cy[22])
  );
  XORCY   \Madd_cnt_share0000_xor<22>  (
    .CI(Madd_cnt_share0000_cy[21]),
    .LI(\Madd_cnt_share0000_cy<22>_rt_104 ),
    .O(cnt_share0000[22])
  );
  MUXCY   \Madd_cnt_share0000_cy<23>  (
    .CI(Madd_cnt_share0000_cy[22]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<23>_rt_106 ),
    .O(Madd_cnt_share0000_cy[23])
  );
  XORCY   \Madd_cnt_share0000_xor<23>  (
    .CI(Madd_cnt_share0000_cy[22]),
    .LI(\Madd_cnt_share0000_cy<23>_rt_106 ),
    .O(cnt_share0000[23])
  );
  MUXCY   \Madd_cnt_share0000_cy<24>  (
    .CI(Madd_cnt_share0000_cy[23]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<24>_rt_108 ),
    .O(Madd_cnt_share0000_cy[24])
  );
  XORCY   \Madd_cnt_share0000_xor<24>  (
    .CI(Madd_cnt_share0000_cy[23]),
    .LI(\Madd_cnt_share0000_cy<24>_rt_108 ),
    .O(cnt_share0000[24])
  );
  MUXCY   \Madd_cnt_share0000_cy<25>  (
    .CI(Madd_cnt_share0000_cy[24]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<25>_rt_110 ),
    .O(Madd_cnt_share0000_cy[25])
  );
  XORCY   \Madd_cnt_share0000_xor<25>  (
    .CI(Madd_cnt_share0000_cy[24]),
    .LI(\Madd_cnt_share0000_cy<25>_rt_110 ),
    .O(cnt_share0000[25])
  );
  MUXCY   \Madd_cnt_share0000_cy<26>  (
    .CI(Madd_cnt_share0000_cy[25]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<26>_rt_112 ),
    .O(Madd_cnt_share0000_cy[26])
  );
  XORCY   \Madd_cnt_share0000_xor<26>  (
    .CI(Madd_cnt_share0000_cy[25]),
    .LI(\Madd_cnt_share0000_cy<26>_rt_112 ),
    .O(cnt_share0000[26])
  );
  MUXCY   \Madd_cnt_share0000_cy<27>  (
    .CI(Madd_cnt_share0000_cy[26]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<27>_rt_114 ),
    .O(Madd_cnt_share0000_cy[27])
  );
  XORCY   \Madd_cnt_share0000_xor<27>  (
    .CI(Madd_cnt_share0000_cy[26]),
    .LI(\Madd_cnt_share0000_cy<27>_rt_114 ),
    .O(cnt_share0000[27])
  );
  MUXCY   \Madd_cnt_share0000_cy<28>  (
    .CI(Madd_cnt_share0000_cy[27]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<28>_rt_116 ),
    .O(Madd_cnt_share0000_cy[28])
  );
  XORCY   \Madd_cnt_share0000_xor<28>  (
    .CI(Madd_cnt_share0000_cy[27]),
    .LI(\Madd_cnt_share0000_cy<28>_rt_116 ),
    .O(cnt_share0000[28])
  );
  MUXCY   \Madd_cnt_share0000_cy<29>  (
    .CI(Madd_cnt_share0000_cy[28]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<29>_rt_118 ),
    .O(Madd_cnt_share0000_cy[29])
  );
  XORCY   \Madd_cnt_share0000_xor<29>  (
    .CI(Madd_cnt_share0000_cy[28]),
    .LI(\Madd_cnt_share0000_cy<29>_rt_118 ),
    .O(cnt_share0000[29])
  );
  MUXCY   \Madd_cnt_share0000_cy<30>  (
    .CI(Madd_cnt_share0000_cy[29]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Madd_cnt_share0000_cy<30>_rt_122 ),
    .O(Madd_cnt_share0000_cy[30])
  );
  XORCY   \Madd_cnt_share0000_xor<30>  (
    .CI(Madd_cnt_share0000_cy[29]),
    .LI(\Madd_cnt_share0000_cy<30>_rt_122 ),
    .O(cnt_share0000[30])
  );
  XORCY   \Madd_cnt_share0000_xor<31>  (
    .CI(Madd_cnt_share0000_cy[30]),
    .LI(\Madd_cnt_share0000_xor<31>_rt_138 ),
    .O(cnt_share0000[31])
  );
  MUXCY   \Mcompar_cnt_100Hz_cmp_ge0000_cy<0>  (
    .CI(N1),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcompar_cnt_100Hz_cmp_ge0000_cy<0>_rt_140 ),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_cy[0])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \Mcompar_cnt_100Hz_cmp_ge0000_lut<1>  (
    .I0(cnt_100Hz[3]),
    .I1(cnt_100Hz[4]),
    .I2(cnt_100Hz[5]),
    .I3(cnt_100Hz[6]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_lut[1])
  );
  MUXCY   \Mcompar_cnt_100Hz_cmp_ge0000_cy<1>  (
    .CI(Mcompar_cnt_100Hz_cmp_ge0000_cy[0]),
    .DI(N1),
    .S(Mcompar_cnt_100Hz_cmp_ge0000_lut[1]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_cy[1])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \Mcompar_cnt_100Hz_cmp_ge0000_lut<2>  (
    .I0(cnt_100Hz[7]),
    .I1(cnt_100Hz[8]),
    .I2(cnt_100Hz[9]),
    .I3(cnt_100Hz[10]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_lut[2])
  );
  MUXCY   \Mcompar_cnt_100Hz_cmp_ge0000_cy<2>  (
    .CI(Mcompar_cnt_100Hz_cmp_ge0000_cy[1]),
    .DI(N1),
    .S(Mcompar_cnt_100Hz_cmp_ge0000_lut[2]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_cy[2])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \Mcompar_cnt_100Hz_cmp_ge0000_lut<3>  (
    .I0(cnt_100Hz[11]),
    .I1(cnt_100Hz[12]),
    .I2(cnt_100Hz[13]),
    .I3(cnt_100Hz[14]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_lut[3])
  );
  MUXCY   \Mcompar_cnt_100Hz_cmp_ge0000_cy<3>  (
    .CI(Mcompar_cnt_100Hz_cmp_ge0000_cy[2]),
    .DI(N1),
    .S(Mcompar_cnt_100Hz_cmp_ge0000_lut[3]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_cy[3])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \Mcompar_cnt_100Hz_cmp_ge0000_lut<4>  (
    .I0(cnt_100Hz[15]),
    .I1(cnt_100Hz[16]),
    .I2(cnt_100Hz[17]),
    .I3(cnt_100Hz[18]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_lut[4])
  );
  MUXCY   \Mcompar_cnt_100Hz_cmp_ge0000_cy<4>  (
    .CI(Mcompar_cnt_100Hz_cmp_ge0000_cy[3]),
    .DI(N1),
    .S(Mcompar_cnt_100Hz_cmp_ge0000_lut[4]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_cy[4])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \Mcompar_cnt_100Hz_cmp_ge0000_lut<5>  (
    .I0(cnt_100Hz[19]),
    .I1(cnt_100Hz[20]),
    .I2(cnt_100Hz[21]),
    .I3(cnt_100Hz[22]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_lut[5])
  );
  MUXCY   \Mcompar_cnt_100Hz_cmp_ge0000_cy<5>  (
    .CI(Mcompar_cnt_100Hz_cmp_ge0000_cy[4]),
    .DI(N1),
    .S(Mcompar_cnt_100Hz_cmp_ge0000_lut[5]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_cy[5])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \Mcompar_cnt_100Hz_cmp_ge0000_lut<6>  (
    .I0(cnt_100Hz[23]),
    .I1(cnt_100Hz[24]),
    .I2(cnt_100Hz[25]),
    .I3(cnt_100Hz[26]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_lut[6])
  );
  MUXCY   \Mcompar_cnt_100Hz_cmp_ge0000_cy<6>  (
    .CI(Mcompar_cnt_100Hz_cmp_ge0000_cy[5]),
    .DI(N1),
    .S(Mcompar_cnt_100Hz_cmp_ge0000_lut[6]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_cy[6])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \Mcompar_cnt_100Hz_cmp_ge0000_lut<7>  (
    .I0(cnt_100Hz[27]),
    .I1(cnt_100Hz[28]),
    .I2(cnt_100Hz[29]),
    .I3(cnt_100Hz[30]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_lut[7])
  );
  MUXCY   \Mcompar_cnt_100Hz_cmp_ge0000_cy<7>  (
    .CI(Mcompar_cnt_100Hz_cmp_ge0000_cy[6]),
    .DI(N1),
    .S(Mcompar_cnt_100Hz_cmp_ge0000_lut[7]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_cy[7])
  );
  MUXCY   \Mcompar_cnt_100Hz_cmp_ge0000_cy<8>  (
    .CI(Mcompar_cnt_100Hz_cmp_ge0000_cy[7]),
    .DI(N1),
    .S(Mcompar_cnt_100Hz_cmp_ge0000_lut[8]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_cy[8])
  );
  MUXCY   \Mcompar_cnt_100Hz_cmp_ge0000_cy<9>  (
    .CI(Mcompar_cnt_100Hz_cmp_ge0000_cy[8]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(Mcompar_cnt_100Hz_cmp_ge0000_lut[9]),
    .O(cnt_100Hz_cmp_ge0000)
  );
  MUXCY   \Mcount_program_cnt_cy<0>  (
    .CI(LCD_DATA_0_OBUF_37),
    .DI(N1),
    .S(Mcount_program_cnt_lut[0]),
    .O(Mcount_program_cnt_cy[0])
  );
  XORCY   \Mcount_program_cnt_xor<0>  (
    .CI(LCD_DATA_0_OBUF_37),
    .LI(Mcount_program_cnt_lut[0]),
    .O(Result[0])
  );
  MUXCY   \Mcount_program_cnt_cy<1>  (
    .CI(Mcount_program_cnt_cy[0]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<1>_rt_275 ),
    .O(Mcount_program_cnt_cy[1])
  );
  XORCY   \Mcount_program_cnt_xor<1>  (
    .CI(Mcount_program_cnt_cy[0]),
    .LI(\Mcount_program_cnt_cy<1>_rt_275 ),
    .O(Result[1])
  );
  MUXCY   \Mcount_program_cnt_cy<2>  (
    .CI(Mcount_program_cnt_cy[1]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<2>_rt_297 ),
    .O(Mcount_program_cnt_cy[2])
  );
  XORCY   \Mcount_program_cnt_xor<2>  (
    .CI(Mcount_program_cnt_cy[1]),
    .LI(\Mcount_program_cnt_cy<2>_rt_297 ),
    .O(Result[2])
  );
  MUXCY   \Mcount_program_cnt_cy<3>  (
    .CI(Mcount_program_cnt_cy[2]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<3>_rt_301 ),
    .O(Mcount_program_cnt_cy[3])
  );
  XORCY   \Mcount_program_cnt_xor<3>  (
    .CI(Mcount_program_cnt_cy[2]),
    .LI(\Mcount_program_cnt_cy<3>_rt_301 ),
    .O(Result[3])
  );
  MUXCY   \Mcount_program_cnt_cy<4>  (
    .CI(Mcount_program_cnt_cy[3]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<4>_rt_303 ),
    .O(Mcount_program_cnt_cy[4])
  );
  XORCY   \Mcount_program_cnt_xor<4>  (
    .CI(Mcount_program_cnt_cy[3]),
    .LI(\Mcount_program_cnt_cy<4>_rt_303 ),
    .O(Result[4])
  );
  MUXCY   \Mcount_program_cnt_cy<5>  (
    .CI(Mcount_program_cnt_cy[4]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<5>_rt_305 ),
    .O(Mcount_program_cnt_cy[5])
  );
  XORCY   \Mcount_program_cnt_xor<5>  (
    .CI(Mcount_program_cnt_cy[4]),
    .LI(\Mcount_program_cnt_cy<5>_rt_305 ),
    .O(Result[5])
  );
  MUXCY   \Mcount_program_cnt_cy<6>  (
    .CI(Mcount_program_cnt_cy[5]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<6>_rt_307 ),
    .O(Mcount_program_cnt_cy[6])
  );
  XORCY   \Mcount_program_cnt_xor<6>  (
    .CI(Mcount_program_cnt_cy[5]),
    .LI(\Mcount_program_cnt_cy<6>_rt_307 ),
    .O(Result[6])
  );
  MUXCY   \Mcount_program_cnt_cy<7>  (
    .CI(Mcount_program_cnt_cy[6]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<7>_rt_309 ),
    .O(Mcount_program_cnt_cy[7])
  );
  XORCY   \Mcount_program_cnt_xor<7>  (
    .CI(Mcount_program_cnt_cy[6]),
    .LI(\Mcount_program_cnt_cy<7>_rt_309 ),
    .O(Result[7])
  );
  MUXCY   \Mcount_program_cnt_cy<8>  (
    .CI(Mcount_program_cnt_cy[7]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<8>_rt_311 ),
    .O(Mcount_program_cnt_cy[8])
  );
  XORCY   \Mcount_program_cnt_xor<8>  (
    .CI(Mcount_program_cnt_cy[7]),
    .LI(\Mcount_program_cnt_cy<8>_rt_311 ),
    .O(Result[8])
  );
  MUXCY   \Mcount_program_cnt_cy<9>  (
    .CI(Mcount_program_cnt_cy[8]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<9>_rt_313 ),
    .O(Mcount_program_cnt_cy[9])
  );
  XORCY   \Mcount_program_cnt_xor<9>  (
    .CI(Mcount_program_cnt_cy[8]),
    .LI(\Mcount_program_cnt_cy<9>_rt_313 ),
    .O(Result[9])
  );
  MUXCY   \Mcount_program_cnt_cy<10>  (
    .CI(Mcount_program_cnt_cy[9]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<10>_rt_255 ),
    .O(Mcount_program_cnt_cy[10])
  );
  XORCY   \Mcount_program_cnt_xor<10>  (
    .CI(Mcount_program_cnt_cy[9]),
    .LI(\Mcount_program_cnt_cy<10>_rt_255 ),
    .O(Result[10])
  );
  MUXCY   \Mcount_program_cnt_cy<11>  (
    .CI(Mcount_program_cnt_cy[10]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<11>_rt_257 ),
    .O(Mcount_program_cnt_cy[11])
  );
  XORCY   \Mcount_program_cnt_xor<11>  (
    .CI(Mcount_program_cnt_cy[10]),
    .LI(\Mcount_program_cnt_cy<11>_rt_257 ),
    .O(Result[11])
  );
  MUXCY   \Mcount_program_cnt_cy<12>  (
    .CI(Mcount_program_cnt_cy[11]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<12>_rt_259 ),
    .O(Mcount_program_cnt_cy[12])
  );
  XORCY   \Mcount_program_cnt_xor<12>  (
    .CI(Mcount_program_cnt_cy[11]),
    .LI(\Mcount_program_cnt_cy<12>_rt_259 ),
    .O(Result[12])
  );
  MUXCY   \Mcount_program_cnt_cy<13>  (
    .CI(Mcount_program_cnt_cy[12]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<13>_rt_261 ),
    .O(Mcount_program_cnt_cy[13])
  );
  XORCY   \Mcount_program_cnt_xor<13>  (
    .CI(Mcount_program_cnt_cy[12]),
    .LI(\Mcount_program_cnt_cy<13>_rt_261 ),
    .O(Result[13])
  );
  MUXCY   \Mcount_program_cnt_cy<14>  (
    .CI(Mcount_program_cnt_cy[13]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<14>_rt_263 ),
    .O(Mcount_program_cnt_cy[14])
  );
  XORCY   \Mcount_program_cnt_xor<14>  (
    .CI(Mcount_program_cnt_cy[13]),
    .LI(\Mcount_program_cnt_cy<14>_rt_263 ),
    .O(Result[14])
  );
  MUXCY   \Mcount_program_cnt_cy<15>  (
    .CI(Mcount_program_cnt_cy[14]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<15>_rt_265 ),
    .O(Mcount_program_cnt_cy[15])
  );
  XORCY   \Mcount_program_cnt_xor<15>  (
    .CI(Mcount_program_cnt_cy[14]),
    .LI(\Mcount_program_cnt_cy<15>_rt_265 ),
    .O(Result[15])
  );
  MUXCY   \Mcount_program_cnt_cy<16>  (
    .CI(Mcount_program_cnt_cy[15]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<16>_rt_267 ),
    .O(Mcount_program_cnt_cy[16])
  );
  XORCY   \Mcount_program_cnt_xor<16>  (
    .CI(Mcount_program_cnt_cy[15]),
    .LI(\Mcount_program_cnt_cy<16>_rt_267 ),
    .O(Result[16])
  );
  MUXCY   \Mcount_program_cnt_cy<17>  (
    .CI(Mcount_program_cnt_cy[16]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<17>_rt_269 ),
    .O(Mcount_program_cnt_cy[17])
  );
  XORCY   \Mcount_program_cnt_xor<17>  (
    .CI(Mcount_program_cnt_cy[16]),
    .LI(\Mcount_program_cnt_cy<17>_rt_269 ),
    .O(Result[17])
  );
  MUXCY   \Mcount_program_cnt_cy<18>  (
    .CI(Mcount_program_cnt_cy[17]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<18>_rt_271 ),
    .O(Mcount_program_cnt_cy[18])
  );
  XORCY   \Mcount_program_cnt_xor<18>  (
    .CI(Mcount_program_cnt_cy[17]),
    .LI(\Mcount_program_cnt_cy<18>_rt_271 ),
    .O(Result[18])
  );
  MUXCY   \Mcount_program_cnt_cy<19>  (
    .CI(Mcount_program_cnt_cy[18]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<19>_rt_273 ),
    .O(Mcount_program_cnt_cy[19])
  );
  XORCY   \Mcount_program_cnt_xor<19>  (
    .CI(Mcount_program_cnt_cy[18]),
    .LI(\Mcount_program_cnt_cy<19>_rt_273 ),
    .O(Result[19])
  );
  MUXCY   \Mcount_program_cnt_cy<20>  (
    .CI(Mcount_program_cnt_cy[19]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<20>_rt_277 ),
    .O(Mcount_program_cnt_cy[20])
  );
  XORCY   \Mcount_program_cnt_xor<20>  (
    .CI(Mcount_program_cnt_cy[19]),
    .LI(\Mcount_program_cnt_cy<20>_rt_277 ),
    .O(Result[20])
  );
  MUXCY   \Mcount_program_cnt_cy<21>  (
    .CI(Mcount_program_cnt_cy[20]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<21>_rt_279 ),
    .O(Mcount_program_cnt_cy[21])
  );
  XORCY   \Mcount_program_cnt_xor<21>  (
    .CI(Mcount_program_cnt_cy[20]),
    .LI(\Mcount_program_cnt_cy<21>_rt_279 ),
    .O(Result[21])
  );
  MUXCY   \Mcount_program_cnt_cy<22>  (
    .CI(Mcount_program_cnt_cy[21]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<22>_rt_281 ),
    .O(Mcount_program_cnt_cy[22])
  );
  XORCY   \Mcount_program_cnt_xor<22>  (
    .CI(Mcount_program_cnt_cy[21]),
    .LI(\Mcount_program_cnt_cy<22>_rt_281 ),
    .O(Result[22])
  );
  MUXCY   \Mcount_program_cnt_cy<23>  (
    .CI(Mcount_program_cnt_cy[22]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<23>_rt_283 ),
    .O(Mcount_program_cnt_cy[23])
  );
  XORCY   \Mcount_program_cnt_xor<23>  (
    .CI(Mcount_program_cnt_cy[22]),
    .LI(\Mcount_program_cnt_cy<23>_rt_283 ),
    .O(Result[23])
  );
  MUXCY   \Mcount_program_cnt_cy<24>  (
    .CI(Mcount_program_cnt_cy[23]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<24>_rt_285 ),
    .O(Mcount_program_cnt_cy[24])
  );
  XORCY   \Mcount_program_cnt_xor<24>  (
    .CI(Mcount_program_cnt_cy[23]),
    .LI(\Mcount_program_cnt_cy<24>_rt_285 ),
    .O(Result[24])
  );
  MUXCY   \Mcount_program_cnt_cy<25>  (
    .CI(Mcount_program_cnt_cy[24]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<25>_rt_287 ),
    .O(Mcount_program_cnt_cy[25])
  );
  XORCY   \Mcount_program_cnt_xor<25>  (
    .CI(Mcount_program_cnt_cy[24]),
    .LI(\Mcount_program_cnt_cy<25>_rt_287 ),
    .O(Result[25])
  );
  MUXCY   \Mcount_program_cnt_cy<26>  (
    .CI(Mcount_program_cnt_cy[25]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<26>_rt_289 ),
    .O(Mcount_program_cnt_cy[26])
  );
  XORCY   \Mcount_program_cnt_xor<26>  (
    .CI(Mcount_program_cnt_cy[25]),
    .LI(\Mcount_program_cnt_cy<26>_rt_289 ),
    .O(Result[26])
  );
  MUXCY   \Mcount_program_cnt_cy<27>  (
    .CI(Mcount_program_cnt_cy[26]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<27>_rt_291 ),
    .O(Mcount_program_cnt_cy[27])
  );
  XORCY   \Mcount_program_cnt_xor<27>  (
    .CI(Mcount_program_cnt_cy[26]),
    .LI(\Mcount_program_cnt_cy<27>_rt_291 ),
    .O(Result[27])
  );
  MUXCY   \Mcount_program_cnt_cy<28>  (
    .CI(Mcount_program_cnt_cy[27]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<28>_rt_293 ),
    .O(Mcount_program_cnt_cy[28])
  );
  XORCY   \Mcount_program_cnt_xor<28>  (
    .CI(Mcount_program_cnt_cy[27]),
    .LI(\Mcount_program_cnt_cy<28>_rt_293 ),
    .O(Result[28])
  );
  MUXCY   \Mcount_program_cnt_cy<29>  (
    .CI(Mcount_program_cnt_cy[28]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<29>_rt_295 ),
    .O(Mcount_program_cnt_cy[29])
  );
  XORCY   \Mcount_program_cnt_xor<29>  (
    .CI(Mcount_program_cnt_cy[28]),
    .LI(\Mcount_program_cnt_cy<29>_rt_295 ),
    .O(Result[29])
  );
  MUXCY   \Mcount_program_cnt_cy<30>  (
    .CI(Mcount_program_cnt_cy[29]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(\Mcount_program_cnt_cy<30>_rt_299 ),
    .O(Mcount_program_cnt_cy[30])
  );
  XORCY   \Mcount_program_cnt_xor<30>  (
    .CI(Mcount_program_cnt_cy[29]),
    .LI(\Mcount_program_cnt_cy<30>_rt_299 ),
    .O(Result[30])
  );
  XORCY   \Mcount_program_cnt_xor<31>  (
    .CI(Mcount_program_cnt_cy[30]),
    .LI(\Mcount_program_cnt_xor<31>_rt_347 ),
    .O(Result[31])
  );
  FDC   state_FSM_FFd1 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(\state_FSM_FFd1-In_567 ),
    .Q(state_FSM_FFd1_566)
  );
  FDC   state_FSM_FFd3 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(\state_FSM_FFd3-In ),
    .Q(state_FSM_FFd3_569)
  );
  FDC   state_FSM_FFd6 (
    .C(LCD_E_OBUF_66),
    .CLR(RESET_inv),
    .D(\state_FSM_FFd6-In ),
    .Q(state_FSM_FFd6_573)
  );
  FDP   mode_0 (
    .C(LCD_E_OBUF_66),
    .D(next_mode[0]),
    .PRE(RESET_inv),
    .Q(mode[0])
  );
  LUT4 #(
    .INIT ( 16'h0080 ))
  \state_cmp_eq0004_wg_lut<0>  (
    .I0(program_cnt[8]),
    .I1(program_cnt[9]),
    .I2(program_cnt[7]),
    .I3(program_cnt[10]),
    .O(state_cmp_eq0004_wg_lut[0])
  );
  MUXCY   \state_cmp_eq0004_wg_cy<0>  (
    .CI(N1),
    .DI(LCD_DATA_0_OBUF_37),
    .S(state_cmp_eq0004_wg_lut[0]),
    .O(state_cmp_eq0004_wg_cy[0])
  );
  LUT4 #(
    .INIT ( 16'h0010 ))
  \state_cmp_eq0004_wg_lut<1>  (
    .I0(program_cnt[11]),
    .I1(program_cnt[12]),
    .I2(program_cnt[6]),
    .I3(program_cnt[13]),
    .O(state_cmp_eq0004_wg_lut[1])
  );
  MUXCY   \state_cmp_eq0004_wg_cy<1>  (
    .CI(state_cmp_eq0004_wg_cy[0]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(state_cmp_eq0004_wg_lut[1]),
    .O(state_cmp_eq0004_wg_cy[1])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \state_cmp_eq0004_wg_lut<2>  (
    .I0(program_cnt[14]),
    .I1(program_cnt[15]),
    .I2(program_cnt[5]),
    .I3(program_cnt[16]),
    .O(state_cmp_eq0004_wg_lut[2])
  );
  MUXCY   \state_cmp_eq0004_wg_cy<2>  (
    .CI(state_cmp_eq0004_wg_cy[1]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(state_cmp_eq0004_wg_lut[2]),
    .O(state_cmp_eq0004_wg_cy[2])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \state_cmp_eq0004_wg_lut<3>  (
    .I0(program_cnt[17]),
    .I1(program_cnt[18]),
    .I2(program_cnt[4]),
    .I3(program_cnt[19]),
    .O(state_cmp_eq0004_wg_lut[3])
  );
  MUXCY   \state_cmp_eq0004_wg_cy<3>  (
    .CI(state_cmp_eq0004_wg_cy[2]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(state_cmp_eq0004_wg_lut[3]),
    .O(state_cmp_eq0004_wg_cy[3])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \state_cmp_eq0004_wg_lut<4>  (
    .I0(program_cnt[20]),
    .I1(program_cnt[21]),
    .I2(program_cnt[3]),
    .I3(program_cnt[22]),
    .O(state_cmp_eq0004_wg_lut[4])
  );
  MUXCY   \state_cmp_eq0004_wg_cy<4>  (
    .CI(state_cmp_eq0004_wg_cy[3]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(state_cmp_eq0004_wg_lut[4]),
    .O(state_cmp_eq0004_wg_cy[4])
  );
  LUT4 #(
    .INIT ( 16'h0010 ))
  \state_cmp_eq0004_wg_lut<5>  (
    .I0(program_cnt[23]),
    .I1(program_cnt[24]),
    .I2(program_cnt[2]),
    .I3(program_cnt[25]),
    .O(state_cmp_eq0004_wg_lut[5])
  );
  MUXCY   \state_cmp_eq0004_wg_cy<5>  (
    .CI(state_cmp_eq0004_wg_cy[4]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(state_cmp_eq0004_wg_lut[5]),
    .O(state_cmp_eq0004_wg_cy[5])
  );
  LUT4 #(
    .INIT ( 16'h0010 ))
  \state_cmp_eq0004_wg_lut<6>  (
    .I0(program_cnt[26]),
    .I1(program_cnt[27]),
    .I2(program_cnt[1]),
    .I3(program_cnt[28]),
    .O(state_cmp_eq0004_wg_lut[6])
  );
  MUXCY   \state_cmp_eq0004_wg_cy<6>  (
    .CI(state_cmp_eq0004_wg_cy[5]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(state_cmp_eq0004_wg_lut[6]),
    .O(state_cmp_eq0004_wg_cy[6])
  );
  LUT4 #(
    .INIT ( 16'h0010 ))
  \state_cmp_eq0004_wg_lut<7>  (
    .I0(program_cnt[29]),
    .I1(program_cnt[30]),
    .I2(program_cnt[0]),
    .I3(program_cnt[31]),
    .O(state_cmp_eq0004_wg_lut[7])
  );
  MUXCY   \state_cmp_eq0004_wg_cy<7>  (
    .CI(state_cmp_eq0004_wg_cy[6]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(state_cmp_eq0004_wg_lut[7]),
    .O(state_cmp_eq0004)
  );
  LUT3 #(
    .INIT ( 8'h01 ))
  \LCD_DATA_cmp_eq00001_wg_lut<0>  (
    .I0(cnt[24]),
    .I1(cnt[25]),
    .I2(cnt[22]),
    .O(LCD_DATA_cmp_eq00001_wg_lut[0])
  );
  MUXCY   \LCD_DATA_cmp_eq00001_wg_cy<0>  (
    .CI(N1),
    .DI(LCD_DATA_0_OBUF_37),
    .S(LCD_DATA_cmp_eq00001_wg_lut[0]),
    .O(LCD_DATA_cmp_eq00001_wg_cy[0])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \LCD_DATA_cmp_eq00001_wg_lut<1>  (
    .I0(cnt[21]),
    .I1(cnt[20]),
    .I2(cnt[26]),
    .I3(cnt[17]),
    .O(LCD_DATA_cmp_eq00001_wg_lut[1])
  );
  MUXCY   \LCD_DATA_cmp_eq00001_wg_cy<1>  (
    .CI(LCD_DATA_cmp_eq00001_wg_cy[0]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(LCD_DATA_cmp_eq00001_wg_lut[1]),
    .O(LCD_DATA_cmp_eq00001_wg_cy[1])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \LCD_DATA_cmp_eq00001_wg_lut<2>  (
    .I0(cnt[18]),
    .I1(cnt[19]),
    .I2(cnt[23]),
    .I3(cnt[16]),
    .O(LCD_DATA_cmp_eq00001_wg_lut[2])
  );
  MUXCY   \LCD_DATA_cmp_eq00001_wg_cy<2>  (
    .CI(LCD_DATA_cmp_eq00001_wg_cy[1]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(LCD_DATA_cmp_eq00001_wg_lut[2]),
    .O(LCD_DATA_cmp_eq00001_wg_cy[2])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \LCD_DATA_cmp_eq00001_wg_lut<3>  (
    .I0(cnt[15]),
    .I1(cnt[13]),
    .I2(cnt[27]),
    .I3(cnt[14]),
    .O(LCD_DATA_cmp_eq00001_wg_lut[3])
  );
  MUXCY   \LCD_DATA_cmp_eq00001_wg_cy<3>  (
    .CI(LCD_DATA_cmp_eq00001_wg_cy[2]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(LCD_DATA_cmp_eq00001_wg_lut[3]),
    .O(LCD_DATA_cmp_eq00001_wg_cy[3])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \LCD_DATA_cmp_eq00001_wg_lut<4>  (
    .I0(cnt[10]),
    .I1(cnt[12]),
    .I2(cnt[29]),
    .I3(cnt[11]),
    .O(LCD_DATA_cmp_eq00001_wg_lut[4])
  );
  MUXCY   \LCD_DATA_cmp_eq00001_wg_cy<4>  (
    .CI(LCD_DATA_cmp_eq00001_wg_cy[3]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(LCD_DATA_cmp_eq00001_wg_lut[4]),
    .O(LCD_DATA_cmp_eq00001_wg_cy[4])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \LCD_DATA_cmp_eq00001_wg_lut<5>  (
    .I0(cnt[7]),
    .I1(cnt[8]),
    .I2(cnt[28]),
    .I3(cnt[9]),
    .O(LCD_DATA_cmp_eq00001_wg_lut[5])
  );
  MUXCY   \LCD_DATA_cmp_eq00001_wg_cy<5>  (
    .CI(LCD_DATA_cmp_eq00001_wg_cy[4]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(LCD_DATA_cmp_eq00001_wg_lut[5]),
    .O(LCD_DATA_cmp_eq00001_wg_cy[5])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  \LCD_DATA_cmp_eq00001_wg_lut<6>  (
    .I0(cnt[0]),
    .I1(cnt[5]),
    .I2(cnt[30]),
    .I3(cnt[31]),
    .O(LCD_DATA_cmp_eq00001_wg_lut[6])
  );
  MUXCY   \LCD_DATA_cmp_eq00001_wg_cy<6>  (
    .CI(LCD_DATA_cmp_eq00001_wg_cy[5]),
    .DI(LCD_DATA_0_OBUF_37),
    .S(LCD_DATA_cmp_eq00001_wg_lut[6]),
    .O(LCD_DATA_cmp_eq00001_wg_cy[6])
  );
  LUT2 #(
    .INIT ( 4'hE ))
  state_FSM_Out81 (
    .I0(state_FSM_FFd7_575),
    .I1(state_FSM_FFd3_569),
    .O(_mux0000)
  );
  LUT2 #(
    .INIT ( 4'hE ))
  \LCD_DATA_mux0000<6>1  (
    .I0(state_FSM_FFd4_571),
    .I1(state_FSM_FFd3_569),
    .O(\LCD_DATA_mux0000[6] )
  );
  LUT2 #(
    .INIT ( 4'hE ))
  \LCD_DATA_mux0000<4>1  (
    .I0(state_FSM_FFd6_573),
    .I1(state_FSM_FFd5_572),
    .O(\LCD_DATA_mux0000[4] )
  );
  LUT3 #(
    .INIT ( 8'h20 ))
  \LCD_DATA_mux0000<1>1  (
    .I0(N7),
    .I1(cnt[4]),
    .I2(state_FSM_FFd2_568),
    .O(\LCD_DATA_mux0000[1] )
  );
  LUT4 #(
    .INIT ( 16'h0C08 ))
  \LCD_DATA_mux0000<0>1  (
    .I0(state_FSM_FFd2_568),
    .I1(N7),
    .I2(cnt[4]),
    .I3(state_FSM_FFd1_566),
    .O(\LCD_DATA_mux0000[0] )
  );
  LUT4 #(
    .INIT ( 16'hFA32 ))
  LCD_RS_mux00007 (
    .I0(state_FSM_FFd2_568),
    .I1(N7),
    .I2(state_FSM_FFd1_566),
    .I3(cnt[4]),
    .O(LCD_RS_mux00007_73)
  );
  LUT3 #(
    .INIT ( 8'h01 ))
  LCD_RS_mux000020 (
    .I0(state_FSM_FFd5_572),
    .I1(state_FSM_FFd6_573),
    .I2(state_FSM_FFd2_568),
    .O(LCD_RS_mux000020_71)
  );
  LUT4 #(
    .INIT ( 16'hABAA ))
  LCD_RS_mux000031 (
    .I0(state_FSM_FFd3_569),
    .I1(state_FSM_FFd1_566),
    .I2(state_FSM_FFd4_571),
    .I3(LCD_RS_mux000020_71),
    .O(LCD_RS_mux000031_72)
  );
  LUT2 #(
    .INIT ( 4'hE ))
  LCD_RS_mux000036 (
    .I0(LCD_RS_mux00007_73),
    .I1(LCD_RS_mux000031_72),
    .O(LCD_RS_mux0000)
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  program_cnt_not00011 (
    .I0(mode[0]),
    .I1(state_FSM_FFd3_569),
    .O(program_cnt_not0001)
  );
  LUT3 #(
    .INIT ( 8'hFE ))
  \LCD_DATA_mux0000<5>1  (
    .I0(state_FSM_FFd5_572),
    .I1(state_FSM_FFd6_573),
    .I2(state_FSM_FFd4_571),
    .O(\LCD_DATA_mux0000[5] )
  );
  LUT4 #(
    .INIT ( 16'hFFFE ))
  \next_mode<0>4  (
    .I0(BUS_INPUT_4_IBUF_12),
    .I1(BUS_INPUT_5_IBUF_13),
    .I2(BUS_INPUT_6_IBUF_14),
    .I3(BUS_INPUT_7_IBUF_15),
    .O(\next_mode<0>4_530 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_71 (
    .I0(Result[7]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_7)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_61 (
    .I0(Result[6]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_6)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_51 (
    .I0(Result[5]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_5)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_41 (
    .I0(Result[4]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_4)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_32 (
    .I0(Result[3]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_3)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_210 (
    .I0(Result[2]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_2)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_110 (
    .I0(Result[1]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_1)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_01 (
    .I0(Result[0]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_0)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_81 (
    .I0(Result[8]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_8)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_91 (
    .I0(Result[9]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_9)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_101 (
    .I0(Result[10]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_10)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_111 (
    .I0(Result[11]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_11)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_121 (
    .I0(Result[12]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_12)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_131 (
    .I0(Result[13]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_13)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_141 (
    .I0(Result[14]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_14)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_151 (
    .I0(Result[15]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_15)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_161 (
    .I0(Result[16]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_16)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_171 (
    .I0(Result[17]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_17)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_181 (
    .I0(Result[18]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_18)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_191 (
    .I0(Result[19]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_19)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_201 (
    .I0(Result[20]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_20)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_211 (
    .I0(Result[21]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_21)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_221 (
    .I0(Result[22]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_22)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_231 (
    .I0(Result[23]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_23)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_241 (
    .I0(Result[24]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_24)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_251 (
    .I0(Result[25]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_25)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_261 (
    .I0(Result[26]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_26)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_271 (
    .I0(Result[27]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_27)
  );
  LUT4 #(
    .INIT ( 16'hF444 ))
  \state_FSM_FFd1-In  (
    .I0(state_cmp_eq0002),
    .I1(state_FSM_FFd1_566),
    .I2(program_cnt_not0001),
    .I3(state_cmp_eq0004),
    .O(\state_FSM_FFd1-In_567 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_281 (
    .I0(Result[28]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_28)
  );
  LUT4 #(
    .INIT ( 16'hF444 ))
  \state_FSM_FFd6-In1  (
    .I0(state_cmp_eq0001),
    .I1(state_FSM_FFd6_573),
    .I2(state_cmp_eq0000),
    .I3(state_FSM_FFd7_575),
    .O(\state_FSM_FFd6-In )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_291 (
    .I0(Result[29]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_29)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_301 (
    .I0(Result[30]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_30)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  Mcount_program_cnt_eqn_311 (
    .I0(Result[31]),
    .I1(state_cmp_eq0004),
    .O(Mcount_program_cnt_eqn_31)
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<9>1  (
    .I0(cnt[22]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[22]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[9])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<8>1  (
    .I0(cnt[23]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[23]),
    .I3(N32),
    .O(cnt_mux0000[8])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<7>1  (
    .I0(cnt[24]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[24]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[7])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<6>1  (
    .I0(cnt[25]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[25]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[6])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<5>1  (
    .I0(cnt[26]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[26]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[5])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<4>1  (
    .I0(cnt[27]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[27]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[4])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<3>1  (
    .I0(cnt[28]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[28]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[3])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<31>1  (
    .I0(cnt[0]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[0]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[31])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<30>1  (
    .I0(cnt[1]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[1]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[30])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<2>1  (
    .I0(cnt[29]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[29]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[2])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<29>1  (
    .I0(cnt[2]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[2]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[29])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<28>1  (
    .I0(cnt[3]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[3]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[28])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<27>1  (
    .I0(cnt[4]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[4]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[27])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<26>1  (
    .I0(cnt[5]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[5]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[26])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<25>1  (
    .I0(cnt[6]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[6]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[25])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<24>1  (
    .I0(cnt[7]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[7]),
    .I3(\cnt_mux0000<0>120_464 ),
    .O(cnt_mux0000[24])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<23>1  (
    .I0(cnt[8]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[8]),
    .I3(N31),
    .O(cnt_mux0000[23])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<22>1  (
    .I0(cnt[9]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[9]),
    .I3(N0),
    .O(cnt_mux0000[22])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<21>1  (
    .I0(cnt[10]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[10]),
    .I3(N0),
    .O(cnt_mux0000[21])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<20>1  (
    .I0(cnt[11]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[11]),
    .I3(N0),
    .O(cnt_mux0000[20])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<1>1  (
    .I0(cnt[30]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[30]),
    .I3(N0),
    .O(cnt_mux0000[1])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<19>1  (
    .I0(cnt[12]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[12]),
    .I3(N0),
    .O(cnt_mux0000[19])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<18>1  (
    .I0(cnt[13]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[13]),
    .I3(N0),
    .O(cnt_mux0000[18])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<17>1  (
    .I0(cnt[14]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[14]),
    .I3(N0),
    .O(cnt_mux0000[17])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<16>1  (
    .I0(cnt[15]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[15]),
    .I3(N0),
    .O(cnt_mux0000[16])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<15>1  (
    .I0(cnt[16]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[16]),
    .I3(N0),
    .O(cnt_mux0000[15])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<14>1  (
    .I0(cnt[17]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[17]),
    .I3(N0),
    .O(cnt_mux0000[14])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<13>1  (
    .I0(cnt[18]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[18]),
    .I3(N0),
    .O(cnt_mux0000[13])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<12>1  (
    .I0(cnt[19]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[19]),
    .I3(N0),
    .O(cnt_mux0000[12])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<11>1  (
    .I0(cnt[20]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[20]),
    .I3(N0),
    .O(cnt_mux0000[11])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<10>1  (
    .I0(cnt[21]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[21]),
    .I3(N0),
    .O(cnt_mux0000[10])
  );
  LUT4 #(
    .INIT ( 16'hF888 ))
  \cnt_mux0000<0>2  (
    .I0(cnt[31]),
    .I1(state_FSM_FFd3_569),
    .I2(cnt_share0000[31]),
    .I3(N0),
    .O(cnt_mux0000[0])
  );
  IBUF   CLK_1k_IBUF (
    .I(CLK_1k),
    .O(LCD_E_OBUF1)
  );
  IBUF   RESET_IBUF (
    .I(RESET),
    .O(RESET_IBUF_360)
  );
  IBUF   CHAR_INPUT_3_IBUF (
    .I(CHAR_INPUT[3]),
    .O(CHAR_INPUT_3_IBUF_27)
  );
  IBUF   CHAR_INPUT_2_IBUF (
    .I(CHAR_INPUT[2]),
    .O(CHAR_INPUT_2_IBUF_26)
  );
  IBUF   BUS_INPUT_7_IBUF (
    .I(BUS_INPUT[7]),
    .O(BUS_INPUT_7_IBUF_15)
  );
  IBUF   BUS_INPUT_6_IBUF (
    .I(BUS_INPUT[6]),
    .O(BUS_INPUT_6_IBUF_14)
  );
  IBUF   BUS_INPUT_5_IBUF (
    .I(BUS_INPUT[5]),
    .O(BUS_INPUT_5_IBUF_13)
  );
  IBUF   BUS_INPUT_4_IBUF (
    .I(BUS_INPUT[4]),
    .O(BUS_INPUT_4_IBUF_12)
  );
  IBUF   BUS_INPUT_3_IBUF (
    .I(BUS_INPUT[3]),
    .O(BUS_INPUT_3_IBUF_11)
  );
  IBUF   BUS_INPUT_2_IBUF (
    .I(BUS_INPUT[2]),
    .O(BUS_INPUT_2_IBUF_10)
  );
  IBUF   BUS_INPUT_1_IBUF (
    .I(BUS_INPUT[1]),
    .O(BUS_INPUT_1_IBUF_9)
  );
  IBUF   BUS_INPUT_0_IBUF (
    .I(BUS_INPUT[0]),
    .O(BUS_INPUT_0_IBUF_8)
  );
  OBUF   LCD_E_OBUF (
    .I(LCD_E_OBUF1),
    .O(LCD_E)
  );
  OBUF   LCD_RS_OBUF (
    .I(LCD_RS_OBUF_69),
    .O(LCD_RS)
  );
  OBUF   LCD_RW_OBUF (
    .I(LCD_RW_OBUF_75),
    .O(LCD_RW)
  );
  OBUF   LCD_DATA_7_OBUF (
    .I(LCD_DATA_7_44),
    .O(LCD_DATA[7])
  );
  OBUF   LCD_DATA_6_OBUF (
    .I(LCD_DATA_6_43),
    .O(LCD_DATA[6])
  );
  OBUF   LCD_DATA_5_OBUF (
    .I(LCD_DATA_4_1_42),
    .O(LCD_DATA[5])
  );
  OBUF   LCD_DATA_4_OBUF (
    .I(LCD_DATA_4_41),
    .O(LCD_DATA[4])
  );
  OBUF   LCD_DATA_3_OBUF (
    .I(LCD_DATA_3_40),
    .O(LCD_DATA[3])
  );
  OBUF   LCD_DATA_2_OBUF (
    .I(LCD_DATA_2_39),
    .O(LCD_DATA[2])
  );
  OBUF   LCD_DATA_1_OBUF (
    .I(LCD_DATA_1_38),
    .O(LCD_DATA[1])
  );
  OBUF   LCD_DATA_0_OBUF (
    .I(LCD_DATA_0_OBUF_37),
    .O(LCD_DATA[0])
  );
  FDCE   state_FSM_FFd2 (
    .C(LCD_E_OBUF_66),
    .CE(state_cmp_eq0002),
    .CLR(RESET_inv),
    .D(state_FSM_FFd1_566),
    .Q(state_FSM_FFd2_568)
  );
  FDCE   state_FSM_FFd4 (
    .C(LCD_E_OBUF_66),
    .CE(state_cmp_eq0001),
    .CLR(RESET_inv),
    .D(state_FSM_FFd5_572),
    .Q(state_FSM_FFd4_571)
  );
  FDPE   state_FSM_FFd7 (
    .C(LCD_E_OBUF_66),
    .CE(state_cmp_eq0000),
    .D(LCD_DATA_0_OBUF_37),
    .PRE(RESET_inv),
    .Q(state_FSM_FFd7_575)
  );
  FDCE   state_FSM_FFd5 (
    .C(LCD_E_OBUF_66),
    .CE(state_cmp_eq0001),
    .CLR(RESET_inv),
    .D(state_FSM_FFd6_573),
    .Q(state_FSM_FFd5_572)
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<1>_rt  (
    .I0(cnt[1]),
    .O(\Madd_cnt_share0000_cy<1>_rt_98 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<2>_rt  (
    .I0(cnt[2]),
    .O(\Madd_cnt_share0000_cy<2>_rt_120 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<3>_rt  (
    .I0(cnt[3]),
    .O(\Madd_cnt_share0000_cy<3>_rt_124 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<4>_rt  (
    .I0(cnt[4]),
    .O(\Madd_cnt_share0000_cy<4>_rt_126 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<5>_rt  (
    .I0(cnt[5]),
    .O(\Madd_cnt_share0000_cy<5>_rt_128 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<6>_rt  (
    .I0(cnt[6]),
    .O(\Madd_cnt_share0000_cy<6>_rt_130 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<7>_rt  (
    .I0(cnt[7]),
    .O(\Madd_cnt_share0000_cy<7>_rt_132 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<8>_rt  (
    .I0(cnt[8]),
    .O(\Madd_cnt_share0000_cy<8>_rt_134 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<9>_rt  (
    .I0(cnt[9]),
    .O(\Madd_cnt_share0000_cy<9>_rt_136 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<10>_rt  (
    .I0(cnt[10]),
    .O(\Madd_cnt_share0000_cy<10>_rt_78 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<11>_rt  (
    .I0(cnt[11]),
    .O(\Madd_cnt_share0000_cy<11>_rt_80 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<12>_rt  (
    .I0(cnt[12]),
    .O(\Madd_cnt_share0000_cy<12>_rt_82 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<13>_rt  (
    .I0(cnt[13]),
    .O(\Madd_cnt_share0000_cy<13>_rt_84 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<14>_rt  (
    .I0(cnt[14]),
    .O(\Madd_cnt_share0000_cy<14>_rt_86 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<15>_rt  (
    .I0(cnt[15]),
    .O(\Madd_cnt_share0000_cy<15>_rt_88 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<16>_rt  (
    .I0(cnt[16]),
    .O(\Madd_cnt_share0000_cy<16>_rt_90 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<17>_rt  (
    .I0(cnt[17]),
    .O(\Madd_cnt_share0000_cy<17>_rt_92 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<18>_rt  (
    .I0(cnt[18]),
    .O(\Madd_cnt_share0000_cy<18>_rt_94 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<19>_rt  (
    .I0(cnt[19]),
    .O(\Madd_cnt_share0000_cy<19>_rt_96 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<20>_rt  (
    .I0(cnt[20]),
    .O(\Madd_cnt_share0000_cy<20>_rt_100 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<21>_rt  (
    .I0(cnt[21]),
    .O(\Madd_cnt_share0000_cy<21>_rt_102 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<22>_rt  (
    .I0(cnt[22]),
    .O(\Madd_cnt_share0000_cy<22>_rt_104 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<23>_rt  (
    .I0(cnt[23]),
    .O(\Madd_cnt_share0000_cy<23>_rt_106 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<24>_rt  (
    .I0(cnt[24]),
    .O(\Madd_cnt_share0000_cy<24>_rt_108 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<25>_rt  (
    .I0(cnt[25]),
    .O(\Madd_cnt_share0000_cy<25>_rt_110 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<26>_rt  (
    .I0(cnt[26]),
    .O(\Madd_cnt_share0000_cy<26>_rt_112 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<27>_rt  (
    .I0(cnt[27]),
    .O(\Madd_cnt_share0000_cy<27>_rt_114 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<28>_rt  (
    .I0(cnt[28]),
    .O(\Madd_cnt_share0000_cy<28>_rt_116 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<29>_rt  (
    .I0(cnt[29]),
    .O(\Madd_cnt_share0000_cy<29>_rt_118 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_cy<30>_rt  (
    .I0(cnt[30]),
    .O(\Madd_cnt_share0000_cy<30>_rt_122 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcompar_cnt_100Hz_cmp_ge0000_cy<0>_rt  (
    .I0(cnt_100Hz[2]),
    .O(\Mcompar_cnt_100Hz_cmp_ge0000_cy<0>_rt_140 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<1>_rt  (
    .I0(program_cnt[1]),
    .O(\Mcount_program_cnt_cy<1>_rt_275 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<2>_rt  (
    .I0(program_cnt[2]),
    .O(\Mcount_program_cnt_cy<2>_rt_297 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<3>_rt  (
    .I0(program_cnt[3]),
    .O(\Mcount_program_cnt_cy<3>_rt_301 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<4>_rt  (
    .I0(program_cnt[4]),
    .O(\Mcount_program_cnt_cy<4>_rt_303 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<5>_rt  (
    .I0(program_cnt[5]),
    .O(\Mcount_program_cnt_cy<5>_rt_305 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<6>_rt  (
    .I0(program_cnt[6]),
    .O(\Mcount_program_cnt_cy<6>_rt_307 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<7>_rt  (
    .I0(program_cnt[7]),
    .O(\Mcount_program_cnt_cy<7>_rt_309 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<8>_rt  (
    .I0(program_cnt[8]),
    .O(\Mcount_program_cnt_cy<8>_rt_311 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<9>_rt  (
    .I0(program_cnt[9]),
    .O(\Mcount_program_cnt_cy<9>_rt_313 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<10>_rt  (
    .I0(program_cnt[10]),
    .O(\Mcount_program_cnt_cy<10>_rt_255 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<11>_rt  (
    .I0(program_cnt[11]),
    .O(\Mcount_program_cnt_cy<11>_rt_257 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<12>_rt  (
    .I0(program_cnt[12]),
    .O(\Mcount_program_cnt_cy<12>_rt_259 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<13>_rt  (
    .I0(program_cnt[13]),
    .O(\Mcount_program_cnt_cy<13>_rt_261 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<14>_rt  (
    .I0(program_cnt[14]),
    .O(\Mcount_program_cnt_cy<14>_rt_263 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<15>_rt  (
    .I0(program_cnt[15]),
    .O(\Mcount_program_cnt_cy<15>_rt_265 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<16>_rt  (
    .I0(program_cnt[16]),
    .O(\Mcount_program_cnt_cy<16>_rt_267 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<17>_rt  (
    .I0(program_cnt[17]),
    .O(\Mcount_program_cnt_cy<17>_rt_269 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<18>_rt  (
    .I0(program_cnt[18]),
    .O(\Mcount_program_cnt_cy<18>_rt_271 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<19>_rt  (
    .I0(program_cnt[19]),
    .O(\Mcount_program_cnt_cy<19>_rt_273 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<20>_rt  (
    .I0(program_cnt[20]),
    .O(\Mcount_program_cnt_cy<20>_rt_277 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<21>_rt  (
    .I0(program_cnt[21]),
    .O(\Mcount_program_cnt_cy<21>_rt_279 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<22>_rt  (
    .I0(program_cnt[22]),
    .O(\Mcount_program_cnt_cy<22>_rt_281 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<23>_rt  (
    .I0(program_cnt[23]),
    .O(\Mcount_program_cnt_cy<23>_rt_283 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<24>_rt  (
    .I0(program_cnt[24]),
    .O(\Mcount_program_cnt_cy<24>_rt_285 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<25>_rt  (
    .I0(program_cnt[25]),
    .O(\Mcount_program_cnt_cy<25>_rt_287 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<26>_rt  (
    .I0(program_cnt[26]),
    .O(\Mcount_program_cnt_cy<26>_rt_289 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<27>_rt  (
    .I0(program_cnt[27]),
    .O(\Mcount_program_cnt_cy<27>_rt_291 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<28>_rt  (
    .I0(program_cnt[28]),
    .O(\Mcount_program_cnt_cy<28>_rt_293 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<29>_rt  (
    .I0(program_cnt[29]),
    .O(\Mcount_program_cnt_cy<29>_rt_295 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_cy<30>_rt  (
    .I0(program_cnt[30]),
    .O(\Mcount_program_cnt_cy<30>_rt_299 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Madd_cnt_share0000_xor<31>_rt  (
    .I0(cnt[31]),
    .O(\Madd_cnt_share0000_xor<31>_rt_138 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \Mcount_program_cnt_xor<31>_rt  (
    .I0(program_cnt[31]),
    .O(\Mcount_program_cnt_xor<31>_rt_347 )
  );
  LUT4 #(
    .INIT ( 16'h0800 ))
  state_cmp_eq00011 (
    .I0(cnt[1]),
    .I1(cnt[2]),
    .I2(N17),
    .I3(LCD_DATA_cmp_eq00001_wg_cy[6]),
    .O(state_cmp_eq0001)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<0>  (
    .I0(cnt_100Hz[0]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[0])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<1>  (
    .I0(cnt_100Hz[1]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[1])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<2>  (
    .I0(cnt_100Hz[2]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[2])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<3>  (
    .I0(cnt_100Hz[3]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[3])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<4>  (
    .I0(cnt_100Hz[4]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[4])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<5>  (
    .I0(cnt_100Hz[5]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[5])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<6>  (
    .I0(cnt_100Hz[6]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[6])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<7>  (
    .I0(cnt_100Hz[7]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[7])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<8>  (
    .I0(cnt_100Hz[8]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[8])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<9>  (
    .I0(cnt_100Hz[9]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[9])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<10>  (
    .I0(cnt_100Hz[10]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[10])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<11>  (
    .I0(cnt_100Hz[11]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[11])
  );
  LUT3 #(
    .INIT ( 8'hFB ))
  state_cmp_eq000011_SW1 (
    .I0(cnt[3]),
    .I1(cnt[6]),
    .I2(cnt[4]),
    .O(N19)
  );
  LUT4 #(
    .INIT ( 16'h0800 ))
  state_cmp_eq00001 (
    .I0(cnt[2]),
    .I1(cnt[1]),
    .I2(N19),
    .I3(LCD_DATA_cmp_eq00001_wg_cy[6]),
    .O(state_cmp_eq0000)
  );
  LUT4 #(
    .INIT ( 16'h0ACE ))
  \cnt_mux0000<0>120_SW0_SW0_SW0  (
    .I0(state_FSM_FFd7_575),
    .I1(\LCD_DATA_mux0000[5] ),
    .I2(state_cmp_eq0000),
    .I3(state_cmp_eq0001),
    .O(N23)
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<12>  (
    .I0(cnt_100Hz[12]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[12])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<13>  (
    .I0(cnt_100Hz[13]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[13])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<14>  (
    .I0(cnt_100Hz[14]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[14])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<15>  (
    .I0(cnt_100Hz[15]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[15])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<16>  (
    .I0(cnt_100Hz[16]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[16])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<17>  (
    .I0(cnt_100Hz[17]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[17])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<18>  (
    .I0(cnt_100Hz[18]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[18])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<19>  (
    .I0(cnt_100Hz[19]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[19])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<20>  (
    .I0(cnt_100Hz[20]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[20])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<21>  (
    .I0(cnt_100Hz[21]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[21])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<22>  (
    .I0(cnt_100Hz[22]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[22])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<23>  (
    .I0(cnt_100Hz[23]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[23])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \Mcount_cnt_100Hz_lut<24>  (
    .I0(cnt_100Hz[24]),
    .I1(cnt_100Hz_cmp_ge0000),
    .O(Mcount_cnt_100Hz_lut[24])
  );
  LUT4 #(
    .INIT ( 16'hFF4C ))
  \state_FSM_FFd3-In16  (
    .I0(mode[0]),
    .I1(state_FSM_FFd3_569),
    .I2(state_cmp_eq0004),
    .I3(N25),
    .O(\state_FSM_FFd3-In )
  );
  LUT4 #(
    .INIT ( 16'hCA81 ))
  \next_mode<0>45_SW0  (
    .I0(BUS_INPUT_0_IBUF_8),
    .I1(BUS_INPUT_1_IBUF_9),
    .I2(BUS_INPUT_2_IBUF_10),
    .I3(BUS_INPUT_3_IBUF_11),
    .O(N27)
  );
  LUT4 #(
    .INIT ( 16'h0100 ))
  state_cmp_eq00021 (
    .I0(cnt[2]),
    .I1(cnt[1]),
    .I2(N29),
    .I3(LCD_DATA_cmp_eq00001_wg_cy[6]),
    .O(state_cmp_eq0002)
  );
  BUFG   LCD_E_OBUF_BUFG (
    .I(LCD_E_OBUF1),
    .O(LCD_E_OBUF_66)
  );
  INV   \Madd_cnt_share0000_lut<0>_INV_0  (
    .I(cnt[0]),
    .O(Madd_cnt_share0000_lut[0])
  );
  INV   \Mcompar_cnt_100Hz_cmp_ge0000_lut<8>_INV_0  (
    .I(cnt_100Hz[31]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_lut[8])
  );
  INV   \Mcount_program_cnt_lut<0>_INV_0  (
    .I(program_cnt[0]),
    .O(Mcount_program_cnt_lut[0])
  );
  INV   RESET_inv1_INV_0 (
    .I(RESET_IBUF_360),
    .O(RESET_inv)
  );
  INV   clk_100Hz_not00011_INV_0 (
    .I(clk_100Hz_395),
    .O(clk_100Hz_not0001)
  );
  INV   \C3/in_sync_not00011_INV_0  (
    .I(\C3/cnt_20 ),
    .O(\C3/in_sync_not0001 )
  );
  INV   \C2/in_sync_not00011_INV_0  (
    .I(\C2/cnt_16 ),
    .O(\C2/in_sync_not0001 )
  );
  INV   \C3/in_inv1_INV_0  (
    .I(CHAR_INPUT_3_IBUF_27),
    .O(\C3/in_inv )
  );
  INV   \C2/in_inv1_INV_0  (
    .I(CHAR_INPUT_2_IBUF_26),
    .O(\C2/in_inv )
  );
  INV   cnt_100Hz_cmp_ge0000_inv1_INV_0 (
    .I(cnt_100Hz_cmp_ge0000),
    .O(cnt_100Hz_cmp_ge0000_inv)
  );
  INV   \Mcompar_cnt_100Hz_cmp_ge0000_lut<9>1_INV_0  (
    .I(cnt_100Hz[31]),
    .O(Mcompar_cnt_100Hz_cmp_ge0000_lut[9])
  );
  LUT3 #(
    .INIT ( 8'hFE ))
  \next_mode<0>771  (
    .I0(\C3/in_sync_22 ),
    .I1(\C2/in_sync_18 ),
    .I2(mode[0]),
    .O(\next_mode<0>77 )
  );
  LUT4 #(
    .INIT ( 16'hFE54 ))
  \next_mode<0>772  (
    .I0(\C3/in_sync_22 ),
    .I1(\C2/in_sync_18 ),
    .I2(mode[0]),
    .I3(N27),
    .O(\next_mode<0>771_532 )
  );
  MUXF5   \next_mode<0>77_f5  (
    .I0(\next_mode<0>771_532 ),
    .I1(\next_mode<0>77 ),
    .S(\next_mode<0>4_530 ),
    .O(next_mode[0])
  );
  LUT4 #(
    .INIT ( 16'h0001 ))
  LCD_DATA_cmp_eq000021 (
    .I0(cnt[6]),
    .I1(cnt[3]),
    .I2(cnt[2]),
    .I3(cnt[1]),
    .O(LCD_DATA_cmp_eq00002)
  );
  MUXF5   LCD_DATA_cmp_eq00002_f5 (
    .I0(LCD_DATA_0_OBUF_37),
    .I1(LCD_DATA_cmp_eq00002),
    .S(LCD_DATA_cmp_eq00001_wg_cy[6]),
    .O(N7)
  );
  LUT3_L #(
    .INIT ( 8'hDF ))
  state_cmp_eq000011_SW0 (
    .I0(cnt[3]),
    .I1(cnt[6]),
    .I2(cnt[4]),
    .LO(N17)
  );
  LUT4_D #(
    .INIT ( 16'hFF54 ))
  \cnt_mux0000<0>120  (
    .I0(state_cmp_eq0002),
    .I1(state_FSM_FFd2_568),
    .I2(state_FSM_FFd1_566),
    .I3(N23),
    .LO(N31),
    .O(N0)
  );
  LUT4_L #(
    .INIT ( 16'hEAC0 ))
  \state_FSM_FFd3-In16_SW0  (
    .I0(state_FSM_FFd4_571),
    .I1(state_FSM_FFd2_568),
    .I2(state_cmp_eq0002),
    .I3(state_cmp_eq0001),
    .LO(N25)
  );
  LUT3_L #(
    .INIT ( 8'hFB ))
  state_cmp_eq00021_SW0 (
    .I0(cnt[3]),
    .I1(cnt[4]),
    .I2(cnt[6]),
    .LO(N29)
  );
  LUT4_D #(
    .INIT ( 16'hFF54 ))
  \cnt_mux0000<0>120_1  (
    .I0(state_cmp_eq0002),
    .I1(state_FSM_FFd2_568),
    .I2(state_FSM_FFd1_566),
    .I3(N23),
    .LO(N32),
    .O(\cnt_mux0000<0>120_464 )
  );
  FDC   LCD_DATA_4_1 (
    .C(clk_100Hz_395),
    .CLR(RESET_inv),
    .D(state_FSM_FFd6_573),
    .Q(LCD_DATA_4_1_42)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

