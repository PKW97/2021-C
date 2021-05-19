//7 10개의 수를 배열에 입력 받고, 그 중 소수(prime number)를 모두 출력하시오.

#include <stdio.h>

void main()
{
	int array[10];
	int i, j;

	printf("10개의 값을 입력하시오\n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &array[i]);
	}
	printf("소수: ");

	for (int i = 0; i < 10; i++) {
		for (j = 2; j < array[i]; j++) {
			if (array[i] % j == 0)
				break;
			if (j + 1 == array[i])
				printf("%d ", array[i]);
		}
	
	}
}
