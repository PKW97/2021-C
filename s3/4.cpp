//�ǽ�����4. �� ������ �Է� �޾�  ū ���� ���� ���� ���� ����� �Ҽ��� ���ϸ� �����Ͽ� ��Ȯ�ϰ� ����Ͻÿ�.

#include <stdio.h>

void main()
{
	int a, b;
	double res;

	printf("�� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &a, &b);

	if (a > b)
	{
		res = (double)a / (double)b;
	}
	else
	{
		res = (double)b / (double)a;
	}
	printf("���: %lf", res);
}