//7 �� ���� �����ͺ������� ���� �ٲ��ִ� swap2(   ,   )�Լ��� �����ϰ� ȣ���Ͽ� ������ �ٲ��� ���̽ÿ�.
//  (��, ������ ������ ����� �ּҰ��� ���� �ٲ�. 2�� ������ �ʿ���)

#include <stdio.h>

void swap2(int** p, int** q) {
	int t;
	t = **p;
	**p = **q;
	**q = t;
}

void main()
{
	int a, b;
	printf("�ΰ��� ���� �Է�: ");
	scanf_s("%d %d", &a, &b);

	int* p1 = &a;
	int* p2 = &b;

	swap2(&p1, &p2);
	printf("%d %d", a, b);
}
