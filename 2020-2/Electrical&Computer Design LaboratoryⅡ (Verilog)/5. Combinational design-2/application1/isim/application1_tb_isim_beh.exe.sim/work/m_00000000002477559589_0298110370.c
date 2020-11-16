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
static const char *ng0 = "E:/OneDrive/my_xilinx/application1/application1.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {5U, 0U};
static unsigned int ng4[] = {7U, 0U};
static unsigned int ng5[] = {11U, 0U};
static unsigned int ng6[] = {13U, 0U};
static unsigned int ng7[] = {14U, 0U};
static unsigned int ng8[] = {0U, 0U};



static void Always_25_0(char *t0)
{
    char t4[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
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
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t5 = (t0 + 1528U);
    t6 = *((char **)t5);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = (t0 + 1208U);
    t8 = *((char **)t5);
    t5 = (t0 + 1048U);
    t9 = *((char **)t5);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t9, 1, t8, 1, t7, 1, t6, 1);
    t5 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB9;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t10) = 1;

LAB9:    t26 = (t10 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    t2 = (t0 + 1048U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t7, 1, t6, 1, t5, 1, t3, 1);
    t2 = ((char*)((ng3)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t2 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB16;

LAB13:    if (t22 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t10) = 1;

LAB16:    t12 = (t10 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    t2 = (t0 + 1048U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t7, 1, t6, 1, t5, 1, t3, 1);
    t2 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t2 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB23;

LAB20:    if (t22 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t10) = 1;

LAB23:    t12 = (t10 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    t2 = (t0 + 1048U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t7, 1, t6, 1, t5, 1, t3, 1);
    t2 = ((char*)((ng5)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t2 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB30;

LAB27:    if (t22 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t10) = 1;

LAB30:    t12 = (t10 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    t2 = (t0 + 1048U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t7, 1, t6, 1, t5, 1, t3, 1);
    t2 = ((char*)((ng6)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t2 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB37;

LAB34:    if (t22 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t10) = 1;

LAB37:    t12 = (t10 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    t2 = (t0 + 1048U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t7, 1, t6, 1, t5, 1, t3, 1);
    t2 = ((char*)((ng7)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t2 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t2);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t9);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB44;

LAB41:    if (t22 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t10) = 1;

LAB44:    t12 = (t10 + 4);
    t27 = *((unsigned int *)t12);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB47:
LAB40:
LAB33:
LAB26:
LAB19:
LAB12:    goto LAB2;

LAB8:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(26, ng0);
    t32 = ((char*)((ng2)));
    t33 = (t0 + 1928);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    goto LAB12;

LAB15:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(27, ng0);
    t25 = ((char*)((ng2)));
    t26 = (t0 + 1928);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    goto LAB19;

LAB22:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(28, ng0);
    t25 = ((char*)((ng2)));
    t26 = (t0 + 1928);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    goto LAB26;

LAB29:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(29, ng0);
    t25 = ((char*)((ng2)));
    t26 = (t0 + 1928);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    goto LAB33;

LAB36:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(30, ng0);
    t25 = ((char*)((ng2)));
    t26 = (t0 + 1928);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    goto LAB40;

LAB43:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(31, ng0);
    t25 = ((char*)((ng2)));
    t26 = (t0 + 1928);
    xsi_vlogvar_assign_value(t26, t25, 0, 0, 1);
    goto LAB47;

}


extern void work_m_00000000002477559589_0298110370_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000002477559589_0298110370", "isim/application1_tb_isim_beh.exe.sim/work/m_00000000002477559589_0298110370.didat");
	xsi_register_executes(pe);
}
