//1 정수 인자를 받아 3배 하여 리턴 하는 함수를 만들고,(  int  tripleValue(int ) ) 호출해보시오.

#include <stdio.h>

int tripleValue(int a)
{
	return a * 3;
}

void main()
{
	int n, ret;

	printf("정수를 입력: ");
	scanf_s("%d", &n);

	ret = tripleValue(n);
	printf("%d", ret);
}