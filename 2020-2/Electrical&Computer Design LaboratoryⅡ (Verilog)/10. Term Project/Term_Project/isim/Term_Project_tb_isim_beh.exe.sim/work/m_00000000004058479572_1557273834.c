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
static const char *ng0 = "E:/OneDrive/my_xilinx/Term_Project/Clock_sep.v";
static int ng1[] = {9, 0};
static int ng2[] = {0, 0};
static int ng3[] = {19, 0};
static int ng4[] = {1, 0};
static int ng5[] = {10, 0};
static int ng6[] = {29, 0};
static int ng7[] = {2, 0};
static int ng8[] = {20, 0};
static int ng9[] = {39, 0};
static int ng10[] = {3, 0};
static int ng11[] = {30, 0};
static int ng12[] = {49, 0};
static int ng13[] = {4, 0};
static int ng14[] = {40, 0};
static int ng15[] = {59, 0};
static int ng16[] = {5, 0};
static int ng17[] = {50, 0};
static int ng18[] = {69, 0};
static int ng19[] = {6, 0};
static int ng20[] = {60, 0};
static int ng21[] = {79, 0};
static int ng22[] = {7, 0};
static int ng23[] = {70, 0};
static int ng24[] = {89, 0};
static int ng25[] = {8, 0};
static int ng26[] = {80, 0};
static int ng27[] = {99, 0};
static int ng28[] = {90, 0};



static void Always_27_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) > *((unsigned int *)t4))
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB16;

LAB15:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;

LAB18:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB25;

LAB24:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB27;

LAB26:    *((unsigned int *)t6) = 1;

LAB27:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB34;

LAB33:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB34;

LAB37:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB36;

LAB35:    *((unsigned int *)t6) = 1;

LAB36:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB43;

LAB42:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB45;

LAB44:    *((unsigned int *)t6) = 1;

LAB45:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng15)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB52;

LAB51:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB54;

LAB53:    *((unsigned int *)t6) = 1;

LAB54:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB56;

LAB57:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB61;

LAB60:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB63;

LAB62:    *((unsigned int *)t6) = 1;

LAB63:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng21)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB70;

LAB69:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB70;

LAB73:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB72;

LAB71:    *((unsigned int *)t6) = 1;

LAB72:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng24)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB79;

LAB78:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB79;

LAB82:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB81;

LAB80:    *((unsigned int *)t6) = 1;

LAB81:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng27)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB88;

LAB87:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB88;

LAB91:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB90;

LAB89:    *((unsigned int *)t6) = 1;

LAB90:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(68, ng0);

LAB96:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB94:
LAB85:
LAB76:
LAB67:
LAB58:
LAB49:
LAB40:
LAB31:
LAB22:
LAB13:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(28, ng0);

LAB14:    xsi_set_current_line(29, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 4);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 0);
    *((unsigned int *)t2) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 15U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 15U);
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    goto LAB13;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(32, ng0);

LAB23:    xsi_set_current_line(33, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t3, 7, t2, 32);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 4);
    goto LAB22;

LAB25:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB27;

LAB29:    xsi_set_current_line(36, ng0);

LAB32:    xsi_set_current_line(37, ng0);
    t9 = ((char*)((ng7)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t3, 7, t2, 32);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 4);
    goto LAB31;

LAB34:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB36;

LAB38:    xsi_set_current_line(40, ng0);

LAB41:    xsi_set_current_line(41, ng0);
    t9 = ((char*)((ng10)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t3, 7, t2, 32);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 4);
    goto LAB40;

LAB43:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB45;

LAB47:    xsi_set_current_line(44, ng0);

LAB50:    xsi_set_current_line(45, ng0);
    t9 = ((char*)((ng13)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t3, 7, t2, 32);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 4);
    goto LAB49;

LAB52:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB54;

LAB56:    xsi_set_current_line(48, ng0);

LAB59:    xsi_set_current_line(49, ng0);
    t9 = ((char*)((ng16)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t3, 7, t2, 32);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 4);
    goto LAB58;

LAB61:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB63;

LAB65:    xsi_set_current_line(52, ng0);

LAB68:    xsi_set_current_line(53, ng0);
    t9 = ((char*)((ng19)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng20)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t3, 7, t2, 32);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 4);
    goto LAB67;

LAB70:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB72;

LAB74:    xsi_set_current_line(56, ng0);

LAB77:    xsi_set_current_line(57, ng0);
    t9 = ((char*)((ng22)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t3, 7, t2, 32);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 4);
    goto LAB76;

LAB79:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB81;

LAB83:    xsi_set_current_line(60, ng0);

LAB86:    xsi_set_current_line(61, ng0);
    t9 = ((char*)((ng25)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng26)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t3, 7, t2, 32);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 4);
    goto LAB85;

LAB88:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB90;

LAB92:    xsi_set_current_line(64, ng0);

LAB95:    xsi_set_current_line(65, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 1768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng28)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t3, 7, t2, 32);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t6, 0, 0, 4);
    goto LAB94;

}


extern void work_m_00000000004058479572_1557273834_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000004058479572_1557273834", "isim/Term_Project_tb_isim_beh.exe.sim/work/m_00000000004058479572_1557273834.didat");
	xsi_register_executes(pe);
}
