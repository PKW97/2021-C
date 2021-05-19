//1. √1 + √ 2 + … + √n 을 계산하시오.(라이브러리 함수 sqrt()이용)

#include <stdio.h>
#include <math.h>


void main()
{
	int n, i;
	double sum = 0.0;

	printf("숫자를 입력: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		sum = sum + sqrt(double(i));
	}
	printf("합: %lf", sum);
}