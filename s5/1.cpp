//1 ���� ���ڸ� �޾� 3�� �Ͽ� ���� �ϴ� �Լ��� �����,(  int  tripleValue(int ) ) ȣ���غ��ÿ�.

#include <stdio.h>

int tripleValue(int a)
{
	return a * 3;
}

void main()
{
	int n, ret;

	printf("������ �Է�: ");
	scanf_s("%d", &n);

	ret = tripleValue(n);
	printf("%d", ret);
}