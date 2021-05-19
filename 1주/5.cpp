// 5 1000만원을 예탁하여 2년 후 받게 되는 총액을 계산하시오. (연이율은 4%)

#include <stdio.h>

int main()
{
	int a = 1000; //예탁금
	double sum1 = a * 1.04; //1년
	double sum2 = sum1 * 1.04; //2년

	printf("2년 후 받게 되는 총액은 %.1lf만원이다 \n", sum2);
}