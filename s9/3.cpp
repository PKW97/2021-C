/* 3 배열 2개를 입력 받아, 같은 첨자의 두 원소 중 큰 값으로 이루어진 배열을 리턴하는 함수 만들기(int * maxA(int a[], int b[], int sz)
   (예를 들어{ 4,5,8,.. }와{ 1,7,3,.. }을 인자로 받으면{ 4,7,8,.. }를 리턴함.
   사실은 배열 첫 원소의 주소를 리턴함) */

#include <stdio.h>

int* maxA(int a[], int b[], int sz);

void main()
{
	int i, aa[3], bb[3];
	int* p;

	printf("두 배열값 입력: ");
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