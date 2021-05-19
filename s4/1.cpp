//실습문제1 자연수 하나를 입력 받아 그 수 이하의 3의 배수 모두 출력하시오.

#include <stdio.h>

void main()
{
	int n, i;

	printf("자연수를 입력하시오: ");
	scanf_s("%d", &n);

	for (i = 3; i <= n; i += 3)
	{
		printf("%3d", i);
	}
		
}