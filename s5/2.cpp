//2 정수변수 주소를 인자로 받아 해당 정수를 3배 하여 리턴 하는 함수를 만들어(int  triplePointer1(int*)) 호출해보시오.

#include <stdio.h>

int triplePointer1(int *p)
{
	return *p * 3;
}

void main()
{
	int n, ret;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);

	ret = triplePointer1(&n);
	printf("%d", ret);
}