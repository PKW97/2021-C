//실습문제5 구구단을 출력하시오(2단부터 9단까지).

#include <stdio.h>

void main()
{
	int i, j;

	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%d * %d = %d\n", i, j, i * j); {

		}
		printf("\n");
	}
	
}