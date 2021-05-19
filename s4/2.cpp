//실습문제2 1부터 10000 까지 5또는 7의 배수는 몇 개인지 구하시오.

#include <stdio.h>

void main()
{
	int i;
	int num = 0;

	for (int i = 1; i <= 10000; i++)
	{
		if (i % 5 == 0 || i % 7 == 0)
		num++;
	}
	printf("result: %d", num);
}