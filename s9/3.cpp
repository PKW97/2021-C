/* 3 �迭 2���� �Է� �޾�, ���� ÷���� �� ���� �� ū ������ �̷���� �迭�� �����ϴ� �Լ� �����(int * maxA(int a[], int b[], int sz)
   (���� ���{ 4,5,8,.. }��{ 1,7,3,.. }�� ���ڷ� ������{ 4,7,8,.. }�� ������.
   ����� �迭 ù ������ �ּҸ� ������) */

#include <stdio.h>

int* maxA(int a[], int b[], int sz);

void main()
{
	int i, aa[3], bb[3];
	int* p;

	printf("�� �迭�� �Է�: ");
	for (i = 0; i < 3; i++) {
		scanf_s("%d", &aa[i]);
	}
	printf("\n");
	for (i = 0; i < 3; i++) {
		scanf_s("%d", &bb[i]);
	}

	p = maxA(aa, bb, 3);
	for (i = 0; i < 3; i++) {
		printf("%d ", p[i]);
	}
}

int* maxA(int a[], int b[], int sz) {
	static int c[100], i;

	for (i = 0; i < sz; i++) {
		if (a[i] >= b[i]) 
			c[i] = a[i];	
		else
			c[i] = b[i];
	}
	return c;
}