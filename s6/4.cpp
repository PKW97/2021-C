//4 a,b,c,d,e 각 변수의 주소값를 가지고 있는 포인터배열을 이용하여, 5개 변수 중 최댓값을 구하시오. 

#include <stdio.h>

void main()
{
	int a, b, c, d, e;
	int* pa[5] = { &a, &b, &c, &d, &e };
	int i;

	printf("5개의 값을 입력: \n");
	
	for (i = 0; i < 5; i++) {
		scanf_s("%d", pa[i]);
	}
	int max = *pa[0];
	for (i = 1; i < 5; i++) {
		if (*pa[i] > max) max = *pa[i];
	}
	printf("최댓값: %d", max);
}