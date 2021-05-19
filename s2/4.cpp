// 4 삼항연산자를 이용하여 입력한 세 수의 최댓값을 구하시오.

#include <stdio.h>

void main()
{
	int a, b, c, max;
	
	printf("세 수를 입력하시오: \n");
	scanf_s("%d %d %d", &a, &b, &c);

	max = a >= b ? (a >= c ? a : c) : (b >= c ? b : c);

	printf("최댓값: %d", max);

}