#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern int a[10];

void init_arr()
{
	int i;

	srand(time(NULL));
	for (i = 0; i < 10; i++) {
		a[i] = rand();
	}
}

void print_sum()
{
	int i;
	int sum = 0;

	for (i = 0; i < 10; i++)
	{
		sum += a[i];
	}
	printf("гу╟Х: %d", sum);
}