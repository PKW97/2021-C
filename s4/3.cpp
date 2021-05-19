//실습문제3 첫 번째 입력 받은 정수부터 두 번째 입력 받은 정수까지의 합을 구하시오.

#include <stdio.h>

void main()
{
	int a, b, n1, n2, i, sum = 0;

	printf("두 정수를 입력하시오: ");
	scanf_s("%d %d", &a, &b);

	if (a < b)
	{
		n1 = a;
		n2 = b;
	}
	else
	{
		n2 = a;
		n1 = b;
	}
	for (i = n1; i <= n2; i++)
	{
		sum = sum + i;
	}
	printf("합: %d", sum);
} 