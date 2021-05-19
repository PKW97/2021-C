//1 문자열내의 숫자문자(즉 ‘0’~’9’)의 개수를 알려주는 함수를 만들고, 호출해 보시오.( int cntNumber(char *) )

#include <stdio.h>

int cntNumber(char* c);

void main()
{
	char line[100];

	printf("문자열을 입력하시오: ");
	scanf_s("%s", line, 100);
	int count = cntNumber(line);
	printf("숫자문자의 개수: %d", count);
}

int cntNumber(char *c) {
	int cnt = 0;

	while (*c) {
		if (*c >= '0' && *c <= '9')
			cnt++;
		c++;
	}
	return cnt;
}
