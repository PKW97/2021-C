//6 �����ð��� ������ swap()�Լ��� �״�� �̿��Ͽ� �迭�� bubble ������ �����Ͻÿ�.

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