//연습문제10 정수 형태의 문자열을 정수로 반환하는 함수를 구현하고 결과를 알아보는 프로그램을 작성

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void toint(char* str);

void main()
{
	char line[100];
	printf("정수를 하나 입력하세요: ");
	gets_s(line, 100);
	printf("%s\n", line);
	int ato = atoi(line);
	printf("먼저 함수 atoi()를 이용한 정수 -> %d\n", ato);
	toint(line);
}
void toint(char *str)
{
	int n = 0;
	for (int i = 0; str[i] >= '0' && str[i] <= '9'; i++)
	{
		n = 10 * n + (str[i] - '0');
	}
	printf("직접 구현한 함수를 이용한 정수 -> %d", n);
}