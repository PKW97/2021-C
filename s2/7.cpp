// 7 비트논리연산자를 이용하여 입력 받은 문자의 아스키값을 이진수로 출력하시오.(가령 ‘A’ 면, 0100 0001 출력)

#include <stdio.h>

void main()
{
	char c;
	printf("문자를 입력하시오: ");
	scanf_s("%c", &c, 1);
	
	printf("%d", c & 128 ? 1 : 0);
	printf("%d", c & 64 ? 1 : 0);
	printf("%d", c & 32 ? 1 : 0);
	printf("%d ", c & 16 ? 1 : 0);
	printf("%d", c & 8 ? 1 : 0);
	printf("%d", c & 4 ? 1 : 0);
	printf("%d", c & 2 ? 1 : 0);
	printf("%d", c & 1 ? 1 : 0);

}