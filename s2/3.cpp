// 3 실수 2개를 입력 받아 정수 값만의 곱을 구하시오.
// (예)5.3 과  2.7 입력 = > 5 * 2 = 10

#include <stdio.h>

void main()
{
	double a, b;
	int res;

	printf("실수 2개를 입력하시오: \n");
	scanf_s("%lf %lf", &a, &b);

	res = (int)a * int(b);

	printf("곱하기: %d", res);

}