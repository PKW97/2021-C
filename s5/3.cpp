//3 세 개의 정수포인터를 인자로 받아 제일 큰 수를 리턴 하는 함수를 만들고 호출해 보시오. (예)int  maxValue(int *, int *, int *)

#include <stdio.h>

int maxValue(int* p1, int* p2, int* p3)
{
	if (*p1 >= *p2 && *p1 > *p3)
		return *p1;
	else if (*p2 >= *p1 && *p2 >= *p3)
		return *p2;
	else
		return *p3;
}

void main()
{
	int a, b, c, res;

	printf("세개의 정수를 입력하시오: ");
	scanf_s("%d %d %d", &a, &b, &c);

	res = maxValue(&a, &b, &c);
	printf("%d", res);
}