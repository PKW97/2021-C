//3 10���� ���� �Է� �޾� ������ �迭�� ������ ��, �ִ��� ����Ͻÿ�.

#include <stdio.h>

void main()
{
	int input[10];
	int i, max;

	printf("10���� ���� �Է��Ͻÿ�: ");
	
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &input[i]);
	}

	max = input[0];
	for (i = 1; i < 10; i++) {
		if (input[i] > max) max = input[i];
	}

	printf("\n�ִ�: %d", max);
}