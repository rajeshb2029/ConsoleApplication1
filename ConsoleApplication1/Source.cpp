#include <stdio.h>
#include <omp.h>

int main(int argc, char **argv)
{
	printf("Hello World\n");

	#pragma omp parallel num_threads(4)
	{
		int ID = omp_get_thread_num();
		printf("Hello from thread %d\n", ID);
	}

	getchar();
	return 0;
}