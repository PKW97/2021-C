//6 10���� ���� �迭�� �Է� �ް�, �������� ������� �����Ͻÿ�.

#include <stdio.h>

void main()
{
	int array[10];
	int i, j, tmp, min;

	printf("10���� ���� �Է�: \n");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &array[i]);
	}

	for (i = 0; i < 9; i++) {
		min = i;
		for (j = i; j < 10; j++) {
			if (array[min] > array[j]) min = j;
		}
		tmp = array[min];
		array[min] = array[i];
		array[i] = tmp;
	}

	for (i = 0; i < 10; i++)
		printf("%d ", array[i]);
}
