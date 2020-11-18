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
static const char *ng0 = "E:/OneDrive/my_xilinx/lab_01/lab_01.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {4, 0};
static int ng4[] = {1, 0};
static int ng5[] = {70, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {30, 0};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {4U, 0U};
static int ng11[] = {20, 0};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {6U, 0U};
static int ng14[] = {400, 0};
static unsigned int ng15[] = {7U, 0U};
static int ng16[] = {200, 0};
static unsigned int ng17[] = {60U, 0U};
static unsigned int ng18[] = {12U, 0U};
static unsigned int ng19[] = {128U, 0U};
static unsigned int ng20[] = {32U, 0U};
static int ng21[] = {2, 0};
static unsigned int ng22[] = {50U, 0U};
static int ng23[] = {3, 0};
static unsigned int ng24[] = {48U, 0U};
static unsigned int ng25[] = {49U, 0U};
static int ng26[] = {5, 0};
static unsigned int ng27[] = {55U, 0U};
static int ng28[] = {6, 0};
static unsigned int ng29[] = {52U, 0U};
static int ng30[] = {7, 0};
static int ng31[] = {8, 0};
static int ng32[] = {9, 0};
static int ng33[] = {10, 0};
static int ng34[] = {11, 0};
static unsigned int ng35[] = {56U, 0U};
static int ng36[] = {12, 0};
static int ng37[] = {13, 0};
static int ng38[] = {14, 0};
static int ng39[] = {15, 0};
static int ng40[] = {16, 0};
static unsigned int ng41[] = {192U, 0U};
static unsigned int ng42[] = {75U, 0U};
static unsigned int ng43[] = {105U, 0U};
static unsigned int ng44[] = {109U, 0U};
static unsigned int ng45[] = {77U, 0U};
static unsigned int ng46[] = {110U, 0U};
static unsigned int ng47[] = {45U, 0U};
static unsigned int ng48[] = {72U, 0U};
static unsigned int ng49[] = {111U, 0U};



static void Always_42_0(char *t0)
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

LAB0:    t1 = (t0 + 4736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5800);
    *((int *)t2) = 1;
    t3 = (t0 + 4768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 2136U);
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

LAB13:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t5, 32, t6, 32);
    t12 = (t4 + 4);
    t7 = *((unsigned int *)t12);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 3656);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);

LAB18:
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

LAB12:    xsi_set_current_line(43, ng0);

LAB15:    xsi_set_current_line(44, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3656);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB14;

LAB16:    xsi_set_current_line(47, ng0);

LAB19:    xsi_set_current_line(48, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 3656);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3816);
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
        goto LAB23;

LAB21:    if (*((unsigned int *)t6) == 0)
        goto LAB20;

LAB22:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB23:    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB25;

LAB24:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 3816);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 1);
    goto LAB18;

LAB20:    *((unsigned int *)t4) = 1;
    goto LAB23;

LAB25:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB24;

}

static void Always_56_1(char *t0)
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
    char *t32;

LAB0:    t1 = (t0 + 4984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5816);
    *((int *)t2) = 1;
    t3 = (t0 + 5016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 2136U);
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

LAB13:    xsi_set_current_line(61, ng0);

LAB16:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB17:    t6 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 3);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng6)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng8)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng12)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng13)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng15)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(127, ng0);

LAB77:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

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

LAB12:    xsi_set_current_line(57, ng0);

LAB15:    xsi_set_current_line(58, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 3336);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB14;

LAB18:    xsi_set_current_line(63, ng0);

LAB37:    xsi_set_current_line(64, ng0);
    t12 = (t0 + 3496);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t23 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t14, 32, t23, 32);
    t29 = (t4 + 4);
    t7 = *((unsigned int *)t29);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 3496);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB40:    goto LAB36;

LAB20:    xsi_set_current_line(71, ng0);

LAB42:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 3496);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 3496);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB45:    goto LAB36;

LAB22:    xsi_set_current_line(79, ng0);

LAB47:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 3496);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 3496);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB50:    goto LAB36;

LAB24:    xsi_set_current_line(87, ng0);

LAB52:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 3496);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng7)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 3496);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB55:    goto LAB36;

LAB26:    xsi_set_current_line(95, ng0);

LAB57:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 3496);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng11)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 3496);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB60:    goto LAB36;

LAB28:    xsi_set_current_line(103, ng0);

LAB62:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 3496);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng11)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 3496);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB65:    goto LAB36;

LAB30:    xsi_set_current_line(111, ng0);

LAB67:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 3496);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng14)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 3496);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB70:    goto LAB36;

LAB32:    xsi_set_current_line(119, ng0);

LAB72:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 3496);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng16)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 3496);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB75:    goto LAB36;

LAB38:    xsi_set_current_line(64, ng0);

LAB41:    xsi_set_current_line(65, ng0);
    t30 = ((char*)((ng6)));
    t32 = (t0 + 3336);
    xsi_vlogvar_assign_value(t32, t30, 0, 0, 3);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB40;

LAB43:    xsi_set_current_line(72, ng0);

LAB46:    xsi_set_current_line(73, ng0);
    t23 = ((char*)((ng8)));
    t29 = (t0 + 3336);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 3);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB45;

LAB48:    xsi_set_current_line(80, ng0);

LAB51:    xsi_set_current_line(81, ng0);
    t23 = ((char*)((ng9)));
    t29 = (t0 + 3336);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 3);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB50;

LAB53:    xsi_set_current_line(88, ng0);

LAB56:    xsi_set_current_line(89, ng0);
    t23 = ((char*)((ng10)));
    t29 = (t0 + 3336);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 3);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB55;

LAB58:    xsi_set_current_line(96, ng0);

LAB61:    xsi_set_current_line(97, ng0);
    t23 = ((char*)((ng12)));
    t29 = (t0 + 3336);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 3);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB60;

LAB63:    xsi_set_current_line(104, ng0);

LAB66:    xsi_set_current_line(105, ng0);
    t23 = ((char*)((ng13)));
    t29 = (t0 + 3336);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 3);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB65;

LAB68:    xsi_set_current_line(112, ng0);

LAB71:    xsi_set_current_line(113, ng0);
    t23 = ((char*)((ng15)));
    t29 = (t0 + 3336);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 3);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB70;

LAB73:    xsi_set_current_line(120, ng0);

LAB76:    xsi_set_current_line(121, ng0);
    t23 = ((char*)((ng10)));
    t29 = (t0 + 3336);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 3);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB75;

}

static void Always_136_2(char *t0)
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

LAB0:    t1 = (t0 + 5232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 5832);
    *((int *)t2) = 1;
    t3 = (t0 + 5264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(136, ng0);

LAB5:    xsi_set_current_line(137, ng0);
    t5 = (t0 + 2136U);
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

LAB13:    xsi_set_current_line(142, ng0);

LAB16:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB17:    t6 = ((char*)((ng6)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 3);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng12)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng13)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng15)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t31 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(323, ng0);

LAB154:    xsi_set_current_line(324, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(325, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(326, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB34:
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

LAB12:    xsi_set_current_line(137, ng0);

LAB15:    xsi_set_current_line(138, ng0);
    t29 = ((char*)((ng6)));
    t30 = (t0 + 2856);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB14;

LAB18:    xsi_set_current_line(144, ng0);

LAB35:    xsi_set_current_line(145, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB34;

LAB20:    xsi_set_current_line(149, ng0);

LAB36:    xsi_set_current_line(150, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 2856);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB34;

LAB22:    xsi_set_current_line(154, ng0);

LAB37:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 2856);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB34;

LAB24:    xsi_set_current_line(159, ng0);

LAB38:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng2)));
    t6 = (t0 + 3016);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);

LAB39:    t12 = ((char*)((ng1)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t12, 32);
    if (t31 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng21)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng23)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng26)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng28)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng30)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng31)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng32)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng33)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB60;

LAB61:    t2 = ((char*)((ng34)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB62;

LAB63:    t2 = ((char*)((ng36)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB64;

LAB65:    t2 = ((char*)((ng37)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng38)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng39)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng40)));
    t31 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t31 == 1)
        goto LAB72;

LAB73:
LAB75:
LAB74:    xsi_set_current_line(230, ng0);

LAB94:    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB76:    goto LAB34;

LAB26:    xsi_set_current_line(236, ng0);

LAB95:    xsi_set_current_line(237, ng0);
    t3 = ((char*)((ng2)));
    t12 = (t0 + 3016);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t12 = *((char **)t3);

LAB96:    t13 = ((char*)((ng1)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t13, 32);
    if (t31 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng21)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng23)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng26)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng28)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng30)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng31)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng32)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng33)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng34)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng36)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng37)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng38)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng39)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng40)));
    t31 = xsi_vlog_signed_case_compare(t12, 32, t2, 32);
    if (t31 == 1)
        goto LAB129;

LAB130:
LAB132:
LAB131:    xsi_set_current_line(307, ng0);

LAB151:    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB133:    goto LAB34;

LAB28:    xsi_set_current_line(313, ng0);

LAB152:    xsi_set_current_line(314, ng0);
    t3 = ((char*)((ng2)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB34;

LAB30:    xsi_set_current_line(318, ng0);

LAB153:    xsi_set_current_line(319, ng0);
    t3 = ((char*)((ng2)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(320, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(321, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB34;

LAB40:    xsi_set_current_line(162, ng0);

LAB77:    xsi_set_current_line(163, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 2856);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB42:    xsi_set_current_line(166, ng0);

LAB78:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB44:    xsi_set_current_line(170, ng0);

LAB79:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB46:    xsi_set_current_line(174, ng0);

LAB80:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB48:    xsi_set_current_line(178, ng0);

LAB81:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB50:    xsi_set_current_line(182, ng0);

LAB82:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB52:    xsi_set_current_line(186, ng0);

LAB83:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB54:    xsi_set_current_line(190, ng0);

LAB84:    xsi_set_current_line(191, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB56:    xsi_set_current_line(194, ng0);

LAB85:    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB58:    xsi_set_current_line(198, ng0);

LAB86:    xsi_set_current_line(199, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB60:    xsi_set_current_line(202, ng0);

LAB87:    xsi_set_current_line(203, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB62:    xsi_set_current_line(206, ng0);

LAB88:    xsi_set_current_line(207, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB64:    xsi_set_current_line(210, ng0);

LAB89:    xsi_set_current_line(211, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(212, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB66:    xsi_set_current_line(214, ng0);

LAB90:    xsi_set_current_line(215, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(216, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB68:    xsi_set_current_line(218, ng0);

LAB91:    xsi_set_current_line(219, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(220, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB70:    xsi_set_current_line(222, ng0);

LAB92:    xsi_set_current_line(223, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB72:    xsi_set_current_line(226, ng0);

LAB93:    xsi_set_current_line(227, ng0);
    t3 = ((char*)((ng6)));
    t12 = (t0 + 2856);
    xsi_vlogvar_assign_value(t12, t3, 0, 0, 1);
    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB76;

LAB97:    xsi_set_current_line(239, ng0);

LAB134:    xsi_set_current_line(240, ng0);
    t14 = ((char*)((ng2)));
    t23 = (t0 + 2856);
    xsi_vlogvar_assign_value(t23, t14, 0, 0, 1);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng41)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB99:    xsi_set_current_line(243, ng0);

LAB135:    xsi_set_current_line(244, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB101:    xsi_set_current_line(247, ng0);

LAB136:    xsi_set_current_line(248, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng42)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB103:    xsi_set_current_line(251, ng0);

LAB137:    xsi_set_current_line(252, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng43)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB105:    xsi_set_current_line(255, ng0);

LAB138:    xsi_set_current_line(256, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng44)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB107:    xsi_set_current_line(259, ng0);

LAB139:    xsi_set_current_line(260, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(261, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB109:    xsi_set_current_line(263, ng0);

LAB140:    xsi_set_current_line(264, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng45)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB111:    xsi_set_current_line(267, ng0);

LAB141:    xsi_set_current_line(268, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(269, ng0);
    t2 = ((char*)((ng43)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB113:    xsi_set_current_line(271, ng0);

LAB142:    xsi_set_current_line(272, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(273, ng0);
    t2 = ((char*)((ng46)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB115:    xsi_set_current_line(275, ng0);

LAB143:    xsi_set_current_line(276, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(277, ng0);
    t2 = ((char*)((ng47)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB117:    xsi_set_current_line(279, ng0);

LAB144:    xsi_set_current_line(280, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(281, ng0);
    t2 = ((char*)((ng48)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB119:    xsi_set_current_line(283, ng0);

LAB145:    xsi_set_current_line(284, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(285, ng0);
    t2 = ((char*)((ng49)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB121:    xsi_set_current_line(287, ng0);

LAB146:    xsi_set_current_line(288, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB123:    xsi_set_current_line(291, ng0);

LAB147:    xsi_set_current_line(292, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(293, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB125:    xsi_set_current_line(295, ng0);

LAB148:    xsi_set_current_line(296, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB127:    xsi_set_current_line(299, ng0);

LAB149:    xsi_set_current_line(300, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(301, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

LAB129:    xsi_set_current_line(303, ng0);

LAB150:    xsi_set_current_line(304, ng0);
    t3 = ((char*)((ng6)));
    t13 = (t0 + 2856);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB133;

}

static void Cont_332_3(char *t0)
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

LAB0:    t1 = (t0 + 5480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(332, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5928);
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
    t18 = (t0 + 5848);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001211105938_1969885709_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_56_1,(void *)Always_136_2,(void *)Cont_332_3};
	xsi_register_didat("work_m_00000000001211105938_1969885709", "isim/lab_01_tb_isim_beh.exe.sim/work/m_00000000001211105938_1969885709.didat");
	xsi_register_executes(pe);
}
