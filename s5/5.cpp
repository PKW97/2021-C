//5 ������ ������ �ش纯���� N��ŭ �����ִ� �Լ��� ����ÿ�.(  void   addN(int *p, int N)   )

#include <stdio.h>

void addN(int* p, int N)
{
	int sum = *p + N;
	printf("%d", sum);
}

void main()
{
	int a, b, sum;
	printf("�� ������ �Է�: ");
	scanf_s("%d %d", &a, &b);

	addN(&a, b);
	
}