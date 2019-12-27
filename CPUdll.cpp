#include <omp.h>
int cpucheck()
{
	int NT;
#pragma omp parallel
	{
		NT = omp_get_num_threads();
	}
	return NT;
}
