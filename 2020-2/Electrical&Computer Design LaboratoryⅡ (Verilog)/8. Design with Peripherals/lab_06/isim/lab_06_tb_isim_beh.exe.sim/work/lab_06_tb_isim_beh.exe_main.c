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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001056837543_2863607527_init();
    work_m_00000000000621472996_2746496898_init();
    work_m_00000000000570706027_3305719485_init();
    work_m_00000000001461401086_3943597998_init();
    work_m_00000000000337210478_0271206864_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000337210478_0271206864");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
