//4 입력 받은 문자열에서 맨 가운데 문자를 출력하시오.(길이가 짝수면 2개 출력)

#include <stdio.h>
#include <string.h>

void main()
{
	char line[100];

	printf("문자열을 입력: ");
	gets_s(line, 100);

	int a = strlen(line);
	if (a % 2 != 0)
		printf("%c", line[a / 2]);
	else
		printf("%c%c", line[(a/2)-1], line[a/2]);

}