//�ǽ�����3 ù ��° �Է� ���� �������� �� ��° �Է� ���� ���������� ���� ���Ͻÿ�.

#include <stdio.h>

void main()
{
	int a, b, n1, n2, i, sum = 0;

	printf("�� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &a, &b);

	if (a < b)
	{
		n1 = a;
		n2 = b;
	}
	else
	{
		n2 = a;
		n1 = b;
	}
	for (i = n1; i <= n2; i++)
	{
		sum = sum + i;
	}
	printf("��: %d", sum);
} 