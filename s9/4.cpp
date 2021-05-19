//4 문자열 인자에서 자음(consonant)만 골라, 자음으로만 된 문자열을 리턴해주는 함수를 만들고 호출해 보시오.

#include <stdio.h>

char* print_cons(char* p);

void main()
{
	char cc[100];
	char* pp;

	printf("문자열 입력: ");
	
	scanf_s("%s", cc, sizeof(cc));
	
	pp = print_cons(cc);
	
	printf("자음으로만 된 문자열 출력: %s", pp);

}

char* print_cons(char* p) {
	static char c[100];
	int i = 0;

	while (*p) {
		if (!(*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')) {
			c[i] = *p;
			i++;
		} p++;
	} return c;
	
}