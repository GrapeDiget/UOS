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
static const char *ng0 = "E:/OneDrive/my_xilinx/lab_05/lab_05.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {7, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {256U, 0U};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {5, 0};
static int ng8[] = {3, 0};



static void Always_36_0(char *t0)
{
    char t6[8];
    char t9[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB9;

LAB6:    if (t21 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB12:    xsi_set_current_line(49, ng0);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB14:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB15;

LAB16:    goto LAB2;

LAB8:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(42, ng0);

LAB13:    xsi_set_current_line(43, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 1368U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_minus(t34, 9, t31, 9, t33, 8);
    t32 = (t0 + 2088);
    xsi_vlogvar_assign_value(t32, t34, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB15:    xsi_set_current_line(49, ng0);

LAB17:    xsi_set_current_line(50, ng0);
    t8 = (t0 + 2408);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t24 = ((char*)((ng7)));
    memset(t9, 0, 8);
    t25 = (t11 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB19;

LAB18:    t31 = (t24 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t11) < *((unsigned int *)t24))
        goto LAB21;

LAB20:    *((unsigned int *)t9) = 1;

LAB21:    t33 = (t9 + 4);
    t17 = *((unsigned int *)t33);
    t18 = (~(t17));
    t19 = *((unsigned int *)t9);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB23;

LAB24:
LAB25:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB27;

LAB26:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB29;

LAB28:    *((unsigned int *)t6) = 1;

LAB29:    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB31;

LAB32:
LAB33:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB35;

LAB34:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB37;

LAB36:    *((unsigned int *)t6) = 1;

LAB37:    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 3);
    t17 = (t16 & 1);
    *((unsigned int *)t5) = t17;
    t8 = (t0 + 2408);
    t10 = (t0 + 2408);
    t11 = (t10 + 72U);
    t24 = *((char **)t11);
    t25 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t9, t24, 2, t25, 32, 1);
    t31 = (t9 + 4);
    t18 = *((unsigned int *)t31);
    t40 = (!(t18));
    if (t40 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 3);
    t17 = (t16 & 1);
    *((unsigned int *)t5) = t17;
    t8 = (t0 + 2568);
    t10 = (t0 + 2568);
    t11 = (t10 + 72U);
    t24 = *((char **)t11);
    t25 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t9, t24, 2, t25, 32, 1);
    t31 = (t9 + 4);
    t18 = *((unsigned int *)t31);
    t40 = (!(t18));
    if (t40 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 4, t4, 4, t5, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t10 = (t0 + 2888);
    t11 = (t10 + 56U);
    t24 = *((char **)t11);
    xsi_vlog_generic_get_index_select_value(t6, 1, t4, t8, 2, t24, 32, 1);
    t25 = (t0 + 2728);
    t31 = (t0 + 2728);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t35 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t9, t33, 2, t35, 32, 1);
    t36 = (t9 + 4);
    t12 = *((unsigned int *)t36);
    t40 = (!(t12));
    if (t40 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB19:    t32 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(51, ng0);
    t35 = (t0 + 2408);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng8)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t37, 4, t38, 32);
    t39 = (t0 + 2408);
    xsi_vlogvar_assign_value(t39, t34, 0, 0, 4);
    goto LAB25;

LAB27:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(53, ng0);
    t24 = (t0 + 2568);
    t25 = (t24 + 56U);
    t31 = *((char **)t25);
    t32 = ((char*)((ng8)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t31, 4, t32, 32);
    t33 = (t0 + 2568);
    xsi_vlogvar_assign_value(t33, t9, 0, 0, 4);
    goto LAB33;

LAB35:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(55, ng0);
    t24 = (t0 + 2728);
    t25 = (t24 + 56U);
    t31 = *((char **)t25);
    t32 = ((char*)((ng8)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t31, 4, t32, 32);
    t33 = (t0 + 2728);
    xsi_vlogvar_assign_value(t33, t9, 0, 0, 4);
    goto LAB41;

LAB42:    xsi_vlogvar_assign_value(t8, t6, 0, *((unsigned int *)t9), 1);
    goto LAB43;

LAB44:    xsi_vlogvar_assign_value(t8, t6, 0, *((unsigned int *)t9), 1);
    goto LAB45;

LAB46:    xsi_vlogvar_assign_value(t25, t6, 0, *((unsigned int *)t9), 1);
    goto LAB47;

}


extern void work_m_00000000003289659038_1913116180_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000003289659038_1913116180", "isim/lab_05_tb_isim_beh.exe.sim/work/m_00000000003289659038_1913116180.didat");
	xsi_register_executes(pe);
}
