#include <stdio.h>
#include <stdlib.h>

#define N 100

int main(int argc, char **argv)
{
	// Dynamic memory allocation
	int *system;

	system = (int*)malloc(sizeof(int)*N);
	printf("size of system %d\n", sizeof(system));

	for (int i = 0; i < N; i++)
	{
		system[i] = i * 2;
		printf("sytem %d = %d\n", i, system[i]);
	}

	free(system);

	getchar();
	return 0;
}