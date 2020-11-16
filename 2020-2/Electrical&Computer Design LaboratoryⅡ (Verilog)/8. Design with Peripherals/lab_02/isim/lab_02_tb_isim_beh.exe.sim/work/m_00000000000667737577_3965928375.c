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
static const char *ng0 = "C:/Users/vmfos/OneDrive/my_xilinx/lab_02/lab_02.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {128U, 0U};
static int ng4[] = {1910, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {64U, 0U};
static int ng8[] = {1703, 0};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {32U, 0U};
static int ng11[] = {1517, 0};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {16U, 0U};
static int ng14[] = {1432, 0};
static unsigned int ng15[] = {4U, 0U};
static unsigned int ng16[] = {8U, 0U};
static int ng17[] = {1276, 0};
static unsigned int ng18[] = {5U, 0U};
static int ng19[] = {1136, 0};
static unsigned int ng20[] = {6U, 0U};
static int ng21[] = {1012, 0};
static unsigned int ng22[] = {7U, 0U};
static int ng23[] = {955, 0};



static void Always_31_0(char *t0)
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3896);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(38, ng0);

LAB16:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB17:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t31 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng13)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t31 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng16)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t31 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng15)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t31 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng9)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t31 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng6)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 8, t2, 8);
    if (t31 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(120, ng0);

LAB133:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 32);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);

LAB36:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(32, ng0);

LAB15:    xsi_set_current_line(33, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2088);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB14;

LAB18:    xsi_set_current_line(40, ng0);

LAB37:    xsi_set_current_line(41, ng0);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(45, ng0);

LAB48:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB40:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB36;

LAB20:    xsi_set_current_line(50, ng0);

LAB49:    xsi_set_current_line(51, ng0);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(55, ng0);

LAB60:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB52:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng9)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB36;

LAB22:    xsi_set_current_line(60, ng0);

LAB61:    xsi_set_current_line(61, ng0);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng11)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(65, ng0);

LAB72:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB64:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng12)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB36;

LAB24:    xsi_set_current_line(70, ng0);

LAB73:    xsi_set_current_line(71, ng0);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng14)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(75, ng0);

LAB84:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB76:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng15)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB36;

LAB26:    xsi_set_current_line(80, ng0);

LAB85:    xsi_set_current_line(81, ng0);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng17)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(85, ng0);

LAB96:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB88:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng18)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB36;

LAB28:    xsi_set_current_line(90, ng0);

LAB97:    xsi_set_current_line(91, ng0);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng19)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(95, ng0);

LAB108:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB100:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng20)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB36;

LAB30:    xsi_set_current_line(100, ng0);

LAB109:    xsi_set_current_line(101, ng0);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng21)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(105, ng0);

LAB120:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB112:    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng22)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB36;

LAB32:    xsi_set_current_line(110, ng0);

LAB121:    xsi_set_current_line(111, ng0);
    t5 = (t0 + 2408);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng23)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(115, ng0);

LAB132:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2408);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t12 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 2408);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB124:    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng16)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 4);
    goto LAB36;

LAB38:    xsi_set_current_line(41, ng0);

LAB41:    xsi_set_current_line(42, ng0);
    t23 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t12) == 0)
        goto LAB42;

LAB44:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB45:    t14 = (t4 + 4);
    t23 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB47;

LAB46:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t4, 0, 0, 1);
    goto LAB40;

LAB42:    *((unsigned int *)t4) = 1;
    goto LAB45;

LAB47:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t19 | t20);
    goto LAB46;

LAB50:    xsi_set_current_line(51, ng0);

LAB53:    xsi_set_current_line(52, ng0);
    t23 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t12) == 0)
        goto LAB54;

LAB56:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB57:    t14 = (t4 + 4);
    t23 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB59;

LAB58:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t4, 0, 0, 1);
    goto LAB52;

LAB54:    *((unsigned int *)t4) = 1;
    goto LAB57;

LAB59:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t19 | t20);
    goto LAB58;

LAB62:    xsi_set_current_line(61, ng0);

LAB65:    xsi_set_current_line(62, ng0);
    t23 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB69;

LAB67:    if (*((unsigned int *)t12) == 0)
        goto LAB66;

LAB68:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB69:    t14 = (t4 + 4);
    t23 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB71;

LAB70:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t4, 0, 0, 1);
    goto LAB64;

LAB66:    *((unsigned int *)t4) = 1;
    goto LAB69;

LAB71:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t19 | t20);
    goto LAB70;

LAB74:    xsi_set_current_line(71, ng0);

LAB77:    xsi_set_current_line(72, ng0);
    t23 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB81;

LAB79:    if (*((unsigned int *)t12) == 0)
        goto LAB78;

LAB80:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB81:    t14 = (t4 + 4);
    t23 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB83;

LAB82:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t4, 0, 0, 1);
    goto LAB76;

LAB78:    *((unsigned int *)t4) = 1;
    goto LAB81;

LAB83:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t19 | t20);
    goto LAB82;

LAB86:    xsi_set_current_line(81, ng0);

LAB89:    xsi_set_current_line(82, ng0);
    t23 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB93;

LAB91:    if (*((unsigned int *)t12) == 0)
        goto LAB90;

LAB92:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB93:    t14 = (t4 + 4);
    t23 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB95;

LAB94:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t4, 0, 0, 1);
    goto LAB88;

LAB90:    *((unsigned int *)t4) = 1;
    goto LAB93;

LAB95:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t19 | t20);
    goto LAB94;

LAB98:    xsi_set_current_line(91, ng0);

LAB101:    xsi_set_current_line(92, ng0);
    t23 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 32);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB105;

LAB103:    if (*((unsigned int *)t12) == 0)
        goto LAB102;

LAB104:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB105:    t14 = (t4 + 4);
    t23 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB107;

LAB106:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t4, 0, 0, 1);
    goto LAB100;

LAB102:    *((unsigned int *)t4) = 1;
    goto LAB105;

LAB107:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t19 | t20);
    goto LAB106;

LAB110:    xsi_set_current_line(101, ng0);

LAB113:    xsi_set_current_line(102, ng0);
    t23 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 32);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB117;

LAB115:    if (*((unsigned int *)t12) == 0)
        goto LAB114;

LAB116:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB117:    t14 = (t4 + 4);
    t23 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB119;

LAB118:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t4, 0, 0, 1);
    goto LAB112;

LAB114:    *((unsigned int *)t4) = 1;
    goto LAB117;

LAB119:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t19 | t20);
    goto LAB118;

LAB122:    xsi_set_current_line(111, ng0);

LAB125:    xsi_set_current_line(112, ng0);
    t23 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 32);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB129;

LAB127:    if (*((unsigned int *)t12) == 0)
        goto LAB126;

LAB128:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB129:    t14 = (t4 + 4);
    t23 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB131;

LAB130:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1U);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t4, 0, 0, 1);
    goto LAB124;

LAB126:    *((unsigned int *)t4) = 1;
    goto LAB129;

LAB131:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t23);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t14) = (t19 | t20);
    goto LAB130;

}

static void Cont_129_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3992);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 3912);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000667737577_3965928375_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Cont_129_1};
	xsi_register_didat("work_m_00000000000667737577_3965928375", "isim/lab_02_tb_isim_beh.exe.sim/work/m_00000000000667737577_3965928375.didat");
	xsi_register_executes(pe);
}
