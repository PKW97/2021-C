//7 10���� ���� �迭�� �Է� �ް�, �� �� �Ҽ�(prime number)�� ��� ����Ͻÿ�.

#include <stdio.h>

void main()
{
	int array[10];
	int i, j;

	printf("10���� ���� �Է��Ͻÿ�\n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &array[i]);
	}
	printf("�Ҽ�: ");

	for (int i = 0; i < 10; i++) {
		for (j = 2; j < array[i]; j++) {
			if (array[i] % j == 0)
				break;
			if (j + 1 == array[i])
				printf("%d ", array[i]);
		}
	
	}
}
