//6 두 문자열을 서로 교환하는 함수를 만들고, 호출해 보시오.(단, 호출할 때 교환할 여유공간을 확보할 것)( void swapStr(char *, char *) )
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swapStr(char* c1, char* c2);

void main()
{
	char line1[100];
	char line2[100];
	printf("두 문자열을 입력: \n");
	gets_s(line1, 100);
	gets_s(line2, 100);
	printf("\n");

	swapStr(line1, line2);
	printf("%s %s", line1, line2);
}

void swapStr(char* c1, char* c2)
{
	char line[100];

	strcpy(line, c1);
	strcpy(c1, c2);
	strcpy(c2, line);
}




