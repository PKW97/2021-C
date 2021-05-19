//연습문제 7 표준입력으로 받은 int 형의 두 정수의 사칙연산을 수행하는 프로그램 작성

#include <stdio.h>

void main()
{
	double n;

	int* p1 = (int*)&n;
	int* p2 = (int*)&n+1;

	printf("두 정수 입력: ");

	scanf_s("%d %d", p1, p2);

	printf("덧셈: %d\n", *p1 + *p2);
	printf("뺄셈: %d\n", *p1 - *p2);
	printf("곱셈: %d\n", *p1 * *p2);
	printf("나눗셈: %d\n", *p1 / *p2);
}