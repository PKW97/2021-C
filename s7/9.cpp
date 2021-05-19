//연습문제14 일차원 배열을 복사하는 함수를 작성하여 결과를 알아보는 프로그램을 작성하시오.

#include <stdio.h>

void copyarray(int from[], int to[], int n);

void main()
{
	int i;
	int aa[4] = { 2,4,6,8 };
	int bb[4] = { 1,2,3,4 };

	copyarray(aa, bb, 4);

	for (i = 0; i < 4; i++) {
		printf("%d ", bb[i]);
	}
}

void copyarray(int from[], int to[], int n)
{
	int i;

	for (i = 0; i < n; i++) {
		to[i] = from[i];
	}
}

