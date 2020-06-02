/********************************************************************
 * www.anggalab.com
 * Angga Saputra
 *UDF for integrating turbulent dissipation and displaying it in the console
*********************************************************************/

#include "udf.h"

DEFINE_ADJUST(my_adjust,d)
{
Thread *t;
/* Integrate dissipation. */
real sum_diss=0.;
cell_t c;
thread_loop_c(t,d)
{
begin_c_loop(c,t)
sum_diss += C_D(c,t)*
C_VOLUME(c,t);
end_c_loop(c,t)
}
printf("Volume integral of turbulent dissipation: %g\n", sum_diss);
}