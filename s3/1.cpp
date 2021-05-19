// 실습문제1. 입력 받은 문자가 대문자이면 소문자로, 소문자이면 대문자로, 그 외는 그대로 출력하시오.

#include <stdio.h>

void main()
{
	char c;

	printf("문자를 입력하시오: ");
	scanf_s("%c", &c, 1);

	if (c >= 'A' && c <= 'Z') //대문자
	{
		c = c + 32;
	}
	else if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	printf("결과: %c", c);
}