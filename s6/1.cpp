//1 ���� ������ 30���� �迭�� ����� {5,10,15...}�� �ʱ�ȭ �� �� �迭�� ������ ���Ͻÿ�.

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

	printf("����: %d", sum);
}