//2 �������� �ּҸ� ���ڷ� �޾� �ش� ������ 3�� �Ͽ� ���� �ϴ� �Լ��� �����(int  triplePointer1(int*)) ȣ���غ��ÿ�.

#include <stdio.h>

int triplePointer1(int *p)
{
	return *p * 3;
}

void main()
{
	int n, ret;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	ret = triplePointer1(&n);
	printf("%d", ret);
}