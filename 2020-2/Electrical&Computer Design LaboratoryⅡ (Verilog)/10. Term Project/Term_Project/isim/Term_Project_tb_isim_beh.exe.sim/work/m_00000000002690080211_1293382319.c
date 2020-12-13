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
static const char *ng0 = "C:/Users/HO/Desktop/Term_Project/Digital_watch.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {10U, 0U};
static unsigned int ng11[] = {11U, 0U};
static int ng12[] = {0, 0};
static int ng13[] = {70, 0};
static int ng14[] = {1, 0};
static int ng15[] = {30, 0};
static unsigned int ng16[] = {60U, 0U};
static unsigned int ng17[] = {12U, 0U};



static void Always_63_0(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 11808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 13368);
    *((int *)t2) = 1;
    t3 = (t0 + 11840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 3768U);
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
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(66, ng0);

LAB13:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 5);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 5);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 4);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 9928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10088);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);

LAB49:
LAB46:
LAB16:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(65, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 10088);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    goto LAB12;

LAB14:    xsi_set_current_line(67, ng0);

LAB17:    xsi_set_current_line(68, ng0);
    t12 = (t0 + 4248U);
    t13 = *((char **)t12);

LAB18:    t12 = ((char*)((ng1)));
    t22 = xsi_vlog_unsigned_case_compare(t13, 8, t12, 8);
    if (t22 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng2)));
    t22 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t22 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng3)));
    t22 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t22 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t22 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t22 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng5)));
    t22 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t22 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng6)));
    t22 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t22 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng7)));
    t22 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t22 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng8)));
    t22 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t22 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng9)));
    t22 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t22 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng10)));
    t22 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t22 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng11)));
    t22 = xsi_vlog_unsigned_case_compare(t13, 8, t2, 8);
    if (t22 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB43:    goto LAB16;

LAB19:    xsi_set_current_line(69, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 10088);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 4);
    goto LAB43;

LAB21:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB43;

LAB23:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB43;

LAB25:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB43;

LAB27:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB43;

LAB29:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB43;

LAB31:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB43;

LAB33:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB43;

LAB35:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB43;

LAB37:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB43;

LAB39:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB43;

LAB44:    xsi_set_current_line(84, ng0);
    t12 = ((char*)((ng1)));
    t19 = (t0 + 10088);
    xsi_vlogvar_assign_value(t19, t12, 0, 0, 4);
    goto LAB46;

LAB47:    xsi_set_current_line(85, ng0);

LAB50:    xsi_set_current_line(86, ng0);
    t12 = (t0 + 9928);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);

LAB51:    t23 = ((char*)((ng2)));
    t22 = xsi_vlog_unsigned_case_compare(t20, 4, t23, 4);
    if (t22 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng4)));
    t22 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t22 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng6)));
    t22 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t22 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng7)));
    t22 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t22 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng11)));
    t22 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t22 == 1)
        goto LAB60;

LAB61:
LAB63:
LAB62:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 9928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10088);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);

LAB64:    goto LAB49;

LAB52:    xsi_set_current_line(87, ng0);
    t24 = ((char*)((ng1)));
    t25 = (t0 + 10088);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 4);
    goto LAB64;

LAB54:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB64;

LAB56:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB64;

LAB58:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB64;

LAB60:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng10)));
    t5 = (t0 + 10088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB64;

}

static void Always_100_1(char *t0)
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

LAB0:    t1 = (t0 + 12056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 13384);
    *((int *)t2) = 1;
    t3 = (t0 + 12088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);

LAB5:    xsi_set_current_line(101, ng0);
    t5 = (t0 + 3768U);
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

LAB13:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 10088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9928);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);

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

LAB12:    xsi_set_current_line(102, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 9928);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 4, 0LL);
    goto LAB14;

}

static void Always_149_2(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;

LAB0:    t1 = (t0 + 12304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 13400);
    *((int *)t2) = 1;
    t3 = (t0 + 12336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(149, ng0);

LAB5:    xsi_set_current_line(150, ng0);
    t5 = (t0 + 3768U);
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
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(155, ng0);

LAB14:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 9928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB15:    t6 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng9)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng10)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng11)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t21 == 1)
        goto LAB36;

LAB37:
LAB39:
LAB38:    xsi_set_current_line(214, ng0);

LAB52:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 5368U);
    t3 = *((char **)t2);
    t2 = (t0 + 10408);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 5528U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 5688U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB40:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(150, ng0);

LAB13:    xsi_set_current_line(151, ng0);
    t19 = (t0 + 5368U);
    t20 = *((char **)t19);
    t19 = (t0 + 10408);
    xsi_vlogvar_assign_value(t19, t20, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 5528U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 5688U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB12;

LAB16:    xsi_set_current_line(157, ng0);

LAB41:    xsi_set_current_line(158, ng0);
    t12 = (t0 + 5368U);
    t13 = *((char **)t12);
    t12 = (t0 + 10408);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 5528U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 5688U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

LAB18:    xsi_set_current_line(162, ng0);

LAB42:    xsi_set_current_line(163, ng0);
    t3 = (t0 + 5368U);
    t6 = *((char **)t3);
    t3 = (t0 + 10408);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 5528U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 5688U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

LAB20:    xsi_set_current_line(167, ng0);

LAB43:    xsi_set_current_line(168, ng0);
    t3 = (t0 + 5848U);
    t6 = *((char **)t3);
    t3 = (t0 + 10408);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 6008U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 6168U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

LAB22:    xsi_set_current_line(172, ng0);

LAB44:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 5848U);
    t6 = *((char **)t3);
    t3 = (t0 + 10408);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 6008U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(175, ng0);
    t2 = (t0 + 6168U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

LAB24:    xsi_set_current_line(177, ng0);

LAB45:    xsi_set_current_line(178, ng0);
    t3 = (t0 + 6328U);
    t6 = *((char **)t3);
    t3 = (t0 + 10408);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 6488U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 6648U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

LAB26:    xsi_set_current_line(182, ng0);

LAB46:    xsi_set_current_line(183, ng0);
    t3 = (t0 + 6328U);
    t6 = *((char **)t3);
    t3 = (t0 + 10408);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 6488U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 6648U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

LAB28:    xsi_set_current_line(187, ng0);

LAB47:    xsi_set_current_line(188, ng0);
    t3 = (t0 + 6328U);
    t6 = *((char **)t3);
    t3 = (t0 + 10408);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(189, ng0);
    t2 = (t0 + 6488U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 6648U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

LAB30:    xsi_set_current_line(192, ng0);

LAB48:    xsi_set_current_line(193, ng0);
    t3 = (t0 + 6808U);
    t6 = *((char **)t3);
    t3 = (t0 + 10408);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 6968U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 7128U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

LAB32:    xsi_set_current_line(197, ng0);

LAB49:    xsi_set_current_line(198, ng0);
    t3 = (t0 + 7288U);
    t6 = *((char **)t3);
    t3 = (t0 + 10408);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 7448U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 7608U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

LAB34:    xsi_set_current_line(202, ng0);

LAB50:    xsi_set_current_line(203, ng0);
    t3 = (t0 + 7768U);
    t6 = *((char **)t3);
    t3 = (t0 + 10408);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 7928U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 8088U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

LAB36:    xsi_set_current_line(207, ng0);

LAB51:    xsi_set_current_line(208, ng0);
    t3 = (t0 + 7768U);
    t6 = *((char **)t3);
    t3 = (t0 + 10408);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 7928U);
    t3 = *((char **)t2);
    t2 = (t0 + 10568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 8088U);
    t3 = *((char **)t2);
    t2 = (t0 + 10728);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB40;

}

static void Always_226_3(char *t0)
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

LAB0:    t1 = (t0 + 12552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 13416);
    *((int *)t2) = 1;
    t3 = (t0 + 12584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(226, ng0);

LAB5:    xsi_set_current_line(227, ng0);
    t5 = (t0 + 3768U);
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

LAB13:    xsi_set_current_line(232, ng0);

LAB16:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 9768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB17:    t6 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(269, ng0);

LAB52:    xsi_set_current_line(270, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(271, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 10888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB30:
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

LAB12:    xsi_set_current_line(227, ng0);

LAB15:    xsi_set_current_line(228, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 9768);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 4);
    xsi_set_current_line(229, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 10888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 10248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB14;

LAB18:    xsi_set_current_line(234, ng0);

LAB31:    xsi_set_current_line(235, ng0);
    t12 = (t0 + 10888);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t23 = ((char*)((ng13)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t14, 32, t23, 32);
    t29 = (t4 + 4);
    t7 = *((unsigned int *)t29);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 10888);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng14)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 10888);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB34:    goto LAB30;

LAB20:    xsi_set_current_line(242, ng0);

LAB36:    xsi_set_current_line(243, ng0);
    t3 = (t0 + 10888);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng15)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 10888);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng14)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 10888);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB39:    goto LAB30;

LAB22:    xsi_set_current_line(250, ng0);

LAB41:    xsi_set_current_line(251, ng0);
    t3 = (t0 + 10888);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng15)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 10888);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng14)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 10888);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB44:    goto LAB30;

LAB24:    xsi_set_current_line(258, ng0);

LAB46:    xsi_set_current_line(259, ng0);
    t3 = (t0 + 10888);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng15)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t12, 32, t13, 32);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t14);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(264, ng0);
    t2 = (t0 + 10888);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = ((char*)((ng14)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t12, 32);
    t13 = (t0 + 10888);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 32);

LAB49:    goto LAB30;

LAB26:    xsi_set_current_line(266, ng0);

LAB51:    xsi_set_current_line(267, ng0);
    t3 = ((char*)((ng14)));
    t6 = (t0 + 10248);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    goto LAB30;

LAB32:    xsi_set_current_line(235, ng0);

LAB35:    xsi_set_current_line(236, ng0);
    t30 = ((char*)((ng2)));
    t32 = (t0 + 9768);
    xsi_vlogvar_assign_value(t32, t30, 0, 0, 4);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 10888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB34;

LAB37:    xsi_set_current_line(243, ng0);

LAB40:    xsi_set_current_line(244, ng0);
    t23 = ((char*)((ng4)));
    t29 = (t0 + 9768);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 4);
    xsi_set_current_line(245, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 10888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB39;

LAB42:    xsi_set_current_line(251, ng0);

LAB45:    xsi_set_current_line(252, ng0);
    t23 = ((char*)((ng3)));
    t29 = (t0 + 9768);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 4);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 10888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB44;

LAB47:    xsi_set_current_line(259, ng0);

LAB50:    xsi_set_current_line(260, ng0);
    t23 = ((char*)((ng9)));
    t29 = (t0 + 9768);
    xsi_vlogvar_assign_value(t29, t23, 0, 0, 4);
    xsi_set_current_line(261, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 10888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB49;

}

static void Always_278_4(char *t0)
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

LAB0:    t1 = (t0 + 12800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(278, ng0);
    t2 = (t0 + 13432);
    *((int *)t2) = 1;
    t3 = (t0 + 12832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(278, ng0);

LAB5:    xsi_set_current_line(279, ng0);
    t5 = (t0 + 3768U);
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

LAB13:    xsi_set_current_line(284, ng0);

LAB16:    xsi_set_current_line(285, ng0);
    t2 = (t0 + 9768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB17:    t6 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t31 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t31 == 1)
        goto LAB24;

LAB25:
LAB27:
LAB26:    xsi_set_current_line(306, ng0);

LAB33:    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB28:
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

LAB12:    xsi_set_current_line(279, ng0);

LAB15:    xsi_set_current_line(280, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 9288);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(281, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(282, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB14;

LAB18:    xsi_set_current_line(286, ng0);

LAB29:    xsi_set_current_line(287, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 9288);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(288, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 9608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB28;

LAB20:    xsi_set_current_line(291, ng0);

LAB30:    xsi_set_current_line(292, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 9288);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(293, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(294, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 9608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB28;

LAB22:    xsi_set_current_line(296, ng0);

LAB31:    xsi_set_current_line(297, ng0);
    t3 = ((char*)((ng1)));
    t6 = (t0 + 9288);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 1);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(299, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 9608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB28;

LAB24:    xsi_set_current_line(301, ng0);

LAB32:    xsi_set_current_line(302, ng0);
    t3 = (t0 + 10568);
    t6 = (t3 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 9288);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(303, ng0);
    t2 = (t0 + 10408);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 9448);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);
    xsi_set_current_line(304, ng0);
    t2 = (t0 + 10728);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t12 = (t0 + 9608);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 8);
    goto LAB28;

}

static void Cont_315_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 13048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(315, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t0 + 13528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 13448);
    *((int *)t16) = 1;

LAB1:    return;
}


extern void work_m_00000000002690080211_1293382319_init()
{
	static char *pe[] = {(void *)Always_63_0,(void *)Always_100_1,(void *)Always_149_2,(void *)Always_226_3,(void *)Always_278_4,(void *)Cont_315_5};
	xsi_register_didat("work_m_00000000002690080211_1293382319", "isim/Term_Project_tb_isim_beh.exe.sim/work/m_00000000002690080211_1293382319.didat");
	xsi_register_executes(pe);
}
