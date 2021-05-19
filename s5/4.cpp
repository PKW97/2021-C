//4 세 개의 정수포인터를 인자로 받아 제일 큰 수의 주소를 리턴 하는 함수를 만들고 호출해 보시오. (예)int * maxPosition(int *, int *, int *)

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

	printf("세개의 정수를 입력: ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	retp = maxPosition(&a, &b, &c);

	printf("%d", *retp);
}