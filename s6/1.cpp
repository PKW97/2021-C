//1 원소 개수가 30개인 배열을 만들고 {5,10,15...}로 초기화 한 후 배열의 총합을 구하시오.

#include <stdio.h>

void main()
{
	int array[30] = { };
	int sum = 0;
	int i;

	for (i = 0; i < 30; i++)
	{
		array[i] = (i + 1) * 5;
		sum += array[i];
	}

	printf("총합: %d", sum);
}