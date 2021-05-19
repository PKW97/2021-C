//3 10개의 값을 입력 받아 일차원 배열에 저장한 후, 최댓값을 출력하시오.

#include <stdio.h>

void main()
{
	int input[10];
	int i, max;

	printf("10개의 값을 입력하시오: ");
	
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &input[i]);
	}

	max = input[0];
	for (i = 1; i < 10; i++) {
		if (input[i] > max) max = input[i];
	}

	printf("\n최댓값: %d", max);
}