//6 수업시간에 구현한 swap()함수를 그대로 이용하여 배열의 bubble 정렬을 구현하시오.

#include <stdio.h>

void swap(int* p, int* q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}

void main()
{
	int a[5] = { 2, 4, 8, 10, 6 };
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
}