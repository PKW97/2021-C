//1 전역변수를 하나 선언하고 그 전역변수 값만큼 “Hello”를 여러 번 출력하는 함수를 만드시오. main()에서 그 전역변수 값을 입력한 후, 
// 함수호출하시오. 

#include <stdio.h>

int bun;
void hello();

void main()
{
	printf("몇번 출력할까요? ");
	scanf_s("%d", &bun);
	hello();		
}

void hello() {
	int i;
	for (i = 0; i < bun; i++) {
		puts("Hello");
	}
}