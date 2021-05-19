//연습문제11 표준입력으로 받은 9이하의 정수로 구구단을 출력하는 프로그램을 작성하시오.

#include <stdio.h>

void main()
{
	int n;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%d * %d = %d\n", i, j, i * j);
		printf("\n");
	}

}