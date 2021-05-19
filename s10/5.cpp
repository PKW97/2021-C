//5 문자열을 거꾸로 출력해주는 함수를 만들고, 호출해 보시오.

#include <stdio.h>
#include <string.h>

void rev(char* c);

void main()
{
	char line[100];
	
	printf("문자열 입력: ");
	gets_s(line, 100);

	printf("결과: ");
	rev(line);
}

void rev(char* c)
{
	int a = strlen(c)-1;

	for (int i = a; i >= 0; i--) {
		printf("%c", c[i]);
	}
}