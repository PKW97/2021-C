//4 �� ���� ���������͸� ���ڷ� �޾� ���� ū ���� �ּҸ� ���� �ϴ� �Լ��� ����� ȣ���� ���ÿ�. (��)int * maxPosition(int *, int *, int *)

#include <stdio.h>

int* maxPosition(int* p1, int* p2, int* p3)
{
	if (*p1 >= *p2 && *p1 > *p3)
		return p1;
	else if (*p2 >= *p1 && *p2 >= *p3)
		return p2;
	else
		return p3;
}

void main()
{
	int a, b, c;
	int* retp;

	printf("������ ������ �Է�: ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	retp = maxPosition(&a, &b, &c);

	printf("%d", *retp);
}