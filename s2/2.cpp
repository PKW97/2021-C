// 2 문자 2개를 입력 받아 아스키값이 그 다음인 문자를 출력하시오. (예, ‘a’와 ‘d’라면 ‘b’와 ‘e’ 출력)

#include <stdio.h>

void main()
{
	char c1, c2;

	printf("문자 두개를 입력하시오 \n");
	scanf_s("%c %c", &c1, 1, &c2, 1);
	printf("그 다음 문자 : %c %c \n", ++c1, ++c2);
}
