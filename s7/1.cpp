//1. ��1 + �� 2 + �� + ��n �� ����Ͻÿ�.(���̺귯�� �Լ� sqrt()�̿�)

#include <stdio.h>
#include <math.h>


void main()
{
	int n, i;
	double sum = 0.0;

	printf("���ڸ� �Է�: ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		sum = sum + sqrt(double(i));
	}
	printf("��: %lf", sum);
}