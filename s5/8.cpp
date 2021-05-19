//연습문제 7 표준입력으로 받은 int 형의 두 정수의 사칙연산을 수행하는 프로그램 작성

#include <stdio.h>

void main() {
	double* input;
	int* p = (int*)&input;

	scanf_s("%d %d", p, p + 1);

	printf("%d + %d = %d\n", *p, *(p + 1), *p + *(p + 1));
	printf("%d - %d = %d\n", *p, *(p + 1), *p - *(p + 1));
	printf("%d * %d = %d\n", *p, *(p + 1), *p * *(p + 1));
	printf("%d / %d = %d\n", *p, *(p + 1), *p / (*(p + 1)));
}