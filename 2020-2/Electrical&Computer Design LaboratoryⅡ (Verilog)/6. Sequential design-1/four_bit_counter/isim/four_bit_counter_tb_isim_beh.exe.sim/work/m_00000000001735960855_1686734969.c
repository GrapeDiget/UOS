/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/OneDrive/my_xilinx/four_bit_counter/four_bit_counter_tb.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {5U, 0U};
static int ng3[] = {1, 0};



static void Initial_49_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);

LAB4:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t6) == 0)
        goto LAB7;

LAB9:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB10:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t6) == 0)
        goto LAB12;

LAB14:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB15:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB12:    *((unsigned int *)t4) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t6) == 0)
        goto LAB17;

LAB19:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB20:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB17:    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t6) == 0)
        goto LAB22;

LAB24:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB25:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t6) == 0)
        goto LAB27;

LAB29:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB30:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB27:    *((unsigned int *)t4) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t6) == 0)
        goto LAB32;

LAB34:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB35:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB32:    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t6) == 0)
        goto LAB37;

LAB39:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB40:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB37:    *((unsigned int *)t4) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t6) == 0)
        goto LAB43;

LAB45:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB46:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB43:    *((unsigned int *)t4) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t6) == 0)
        goto LAB48;

LAB50:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB51:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB48:    *((unsigned int *)t4) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB56;

LAB54:    if (*((unsigned int *)t6) == 0)
        goto LAB53;

LAB55:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB56:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB53:    *((unsigned int *)t4) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB61;

LAB59:    if (*((unsigned int *)t6) == 0)
        goto LAB58;

LAB60:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB61:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB58:    *((unsigned int *)t4) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB66;

LAB64:    if (*((unsigned int *)t6) == 0)
        goto LAB63;

LAB65:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB66:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB63:    *((unsigned int *)t4) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB71;

LAB69:    if (*((unsigned int *)t6) == 0)
        goto LAB68;

LAB70:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB71:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB68:    *((unsigned int *)t4) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB76;

LAB74:    if (*((unsigned int *)t6) == 0)
        goto LAB73;

LAB75:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB76:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB73:    *((unsigned int *)t4) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB78:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB82;

LAB80:    if (*((unsigned int *)t6) == 0)
        goto LAB79;

LAB81:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB82:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB79:    *((unsigned int *)t4) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB87;

LAB85:    if (*((unsigned int *)t6) == 0)
        goto LAB84;

LAB86:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB87:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB84:    *((unsigned int *)t4) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB89:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB93;

LAB91:    if (*((unsigned int *)t6) == 0)
        goto LAB90;

LAB92:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB93:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB90:    *((unsigned int *)t4) = 1;
    goto LAB93;

LAB94:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB98;

LAB96:    if (*((unsigned int *)t6) == 0)
        goto LAB95;

LAB97:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB98:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB95:    *((unsigned int *)t4) = 1;
    goto LAB98;

LAB99:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB103;

LAB101:    if (*((unsigned int *)t6) == 0)
        goto LAB100;

LAB102:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB103:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB104;
    goto LAB1;

LAB100:    *((unsigned int *)t4) = 1;
    goto LAB103;

LAB104:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB108;

LAB106:    if (*((unsigned int *)t6) == 0)
        goto LAB105;

LAB107:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB108:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB109;
    goto LAB1;

LAB105:    *((unsigned int *)t4) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB113;

LAB111:    if (*((unsigned int *)t6) == 0)
        goto LAB110;

LAB112:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB113:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB114;
    goto LAB1;

LAB110:    *((unsigned int *)t4) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB115:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB119;

LAB117:    if (*((unsigned int *)t6) == 0)
        goto LAB116;

LAB118:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB119:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB120;
    goto LAB1;

LAB116:    *((unsigned int *)t4) = 1;
    goto LAB119;

LAB120:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB121;
    goto LAB1;

LAB121:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB125;

LAB123:    if (*((unsigned int *)t6) == 0)
        goto LAB122;

LAB124:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB125:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB126;
    goto LAB1;

LAB122:    *((unsigned int *)t4) = 1;
    goto LAB125;

LAB126:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB127;
    goto LAB1;

LAB127:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB131;

LAB129:    if (*((unsigned int *)t6) == 0)
        goto LAB128;

LAB130:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB131:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB132;
    goto LAB1;

LAB128:    *((unsigned int *)t4) = 1;
    goto LAB131;

LAB132:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB136;

LAB134:    if (*((unsigned int *)t6) == 0)
        goto LAB133;

LAB135:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB136:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB137;
    goto LAB1;

LAB133:    *((unsigned int *)t4) = 1;
    goto LAB136;

LAB137:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB141;

LAB139:    if (*((unsigned int *)t6) == 0)
        goto LAB138;

LAB140:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB141:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB142;
    goto LAB1;

LAB138:    *((unsigned int *)t4) = 1;
    goto LAB141;

LAB142:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB146;

LAB144:    if (*((unsigned int *)t6) == 0)
        goto LAB143;

LAB145:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB146:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB147;
    goto LAB1;

LAB143:    *((unsigned int *)t4) = 1;
    goto LAB146;

LAB147:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB151;

LAB149:    if (*((unsigned int *)t6) == 0)
        goto LAB148;

LAB150:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB151:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB152;
    goto LAB1;

LAB148:    *((unsigned int *)t4) = 1;
    goto LAB151;

LAB152:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB153;
    goto LAB1;

LAB153:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB157;

LAB155:    if (*((unsigned int *)t6) == 0)
        goto LAB154;

LAB156:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB157:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB158;
    goto LAB1;

LAB154:    *((unsigned int *)t4) = 1;
    goto LAB157;

LAB158:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB162;

LAB160:    if (*((unsigned int *)t6) == 0)
        goto LAB159;

LAB161:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB162:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB163;
    goto LAB1;

LAB159:    *((unsigned int *)t4) = 1;
    goto LAB162;

LAB163:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB167;

LAB165:    if (*((unsigned int *)t6) == 0)
        goto LAB164;

LAB166:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB167:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB168;
    goto LAB1;

LAB164:    *((unsigned int *)t4) = 1;
    goto LAB167;

LAB168:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB172;

LAB170:    if (*((unsigned int *)t6) == 0)
        goto LAB169;

LAB171:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB172:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB173;
    goto LAB1;

LAB169:    *((unsigned int *)t4) = 1;
    goto LAB172;

LAB173:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB177;

LAB175:    if (*((unsigned int *)t6) == 0)
        goto LAB174;

LAB176:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB177:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB178;
    goto LAB1;

LAB174:    *((unsigned int *)t4) = 1;
    goto LAB177;

LAB178:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB182;

LAB180:    if (*((unsigned int *)t6) == 0)
        goto LAB179;

LAB181:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB182:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB183;
    goto LAB1;

LAB179:    *((unsigned int *)t4) = 1;
    goto LAB182;

LAB183:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1448);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB187;

LAB185:    if (*((unsigned int *)t6) == 0)
        goto LAB184;

LAB186:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB187:    t13 = (t0 + 1448);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    goto LAB1;

LAB184:    *((unsigned int *)t4) = 1;
    goto LAB187;

}


extern void work_m_00000000001735960855_1686734969_init()
{
	static char *pe[] = {(void *)Initial_49_0};
	xsi_register_didat("work_m_00000000001735960855_1686734969", "isim/four_bit_counter_tb_isim_beh.exe.sim/work/m_00000000001735960855_1686734969.didat");
	xsi_register_executes(pe);
}
