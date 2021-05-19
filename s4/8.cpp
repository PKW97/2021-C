/* 실습문제8 입력 받은 정수를 32비트의 이진수형태로 출력하시오.(7이면 0000 0000  0000 0000  0000 0000  0000 0111) */

#include <stdio.h>

void main()
{
	int n, i;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	for (i = 31; i >= 0; i--)
	{
		printf("%d", (n >> i) & 1);
		if (i % 4 == 0)
			printf(" ");
	}
}