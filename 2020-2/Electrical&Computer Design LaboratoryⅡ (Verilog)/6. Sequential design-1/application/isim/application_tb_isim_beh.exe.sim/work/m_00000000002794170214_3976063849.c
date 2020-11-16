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
static const char *ng0 = "E:/OneDrive/my_xilinx/application/application.v";
static unsigned int ng1[] = {23U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};



static void Always_25_0(char *t0)
{
    char t4[8];
    char t31[8];
    char t34[8];
    char t44[8];
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
    char *t32;
    int t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
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

LAB13:    xsi_set_current_line(28, ng0);

LAB15:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 1608);
    t14 = (t0 + 1608);
    t23 = (t14 + 72U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t31, t29, 2, t30, 32, 1);
    t32 = (t31 + 4);
    t16 = *((unsigned int *)t32);
    t33 = (!(t16));
    if (t33 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 2);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 1608);
    t14 = (t0 + 1608);
    t23 = (t14 + 72U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t31, t29, 2, t30, 32, 1);
    t32 = (t31 + 4);
    t16 = *((unsigned int *)t32);
    t33 = (!(t16));
    if (t33 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 3);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 1608);
    t14 = (t0 + 1608);
    t23 = (t14 + 72U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t31, t29, 2, t30, 32, 1);
    t32 = (t31 + 4);
    t16 = *((unsigned int *)t32);
    t33 = (!(t16));
    if (t33 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 4);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 4);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 1608);
    t14 = (t0 + 1608);
    t23 = (t14 + 72U);
    t29 = *((char **)t23);
    t30 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t31, t29, 2, t30, 32, 1);
    t32 = (t31 + 4);
    t16 = *((unsigned int *)t32);
    t33 = (!(t16));
    if (t33 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 3);
    t15 = (t11 & 1);
    *((unsigned int *)t6) = t15;
    t13 = (t0 + 1608);
    t14 = (t13 + 56U);
    t23 = *((char **)t14);
    memset(t31, 0, 8);
    t29 = (t31 + 4);
    t30 = (t23 + 4);
    t16 = *((unsigned int *)t23);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t31) = t18;
    t19 = *((unsigned int *)t30);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t29) = t21;
    memset(t34, 0, 8);
    t32 = (t4 + 4);
    t35 = (t31 + 4);
    t22 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t31);
    t25 = (t22 ^ t24);
    t26 = *((unsigned int *)t32);
    t27 = *((unsigned int *)t35);
    t28 = (t26 ^ t27);
    t36 = (t25 | t28);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB25;

LAB24:    if (t39 != 0)
        goto LAB26;

LAB27:    t43 = (t0 + 1608);
    t45 = (t0 + 1608);
    t46 = (t45 + 72U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t44, t47, 2, t48, 32, 1);
    t49 = (t44 + 4);
    t50 = *((unsigned int *)t49);
    t33 = (!(t50));
    if (t33 == 1)
        goto LAB28;

LAB29:
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

LAB12:    xsi_set_current_line(27, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 5, 0LL);
    goto LAB14;

LAB16:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB17;

LAB18:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB19;

LAB20:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB21;

LAB22:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB23;

LAB25:    *((unsigned int *)t34) = 1;
    goto LAB27;

LAB26:    t42 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t43, t34, 0, *((unsigned int *)t44), 1, 0LL);
    goto LAB29;

}


extern void work_m_00000000002794170214_3976063849_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000002794170214_3976063849", "isim/application_tb_isim_beh.exe.sim/work/m_00000000002794170214_3976063849.didat");
	xsi_register_executes(pe);
}
