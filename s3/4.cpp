//실습문제4. 두 정수를 입력 받아  큰 수를 작은 수로 나눈 결과를 소수점 이하를 포함하여 정확하게 출력하시오.

#include <stdio.h>

void main()
{
	int a, b;
	double res;

	printf("두 정수를 입력하시오: ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
	{
		res = (double)a / (double)b;
	}
	else
	{
		res = (double)b / (double)a;
	}
	printf("결과: %lf", res);
}