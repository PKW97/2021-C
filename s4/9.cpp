//��������11 ǥ���Է����� ���� 9������ ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

void main()
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%d * %d = %d\n", i, j, i * j);
		printf("\n");
	}

}