//5 여러 함수에 의해 호출될 수 있는 어떤 함수(예를 들어 foo() 함수) 
// 자신이 몇 번 호출되었는지 리턴해주는 함수를 만들고 여러 번 호출하여 검증해보시오.

#include <stdio.h>

static int cnt = 0;
void foo();
void foo1();
void foo2();
void foo3();

int main()
{
	foo();
	foo1();
	foo2();
	foo3();
	printf("%d번 호출", cnt);
}

void foo() {
	cnt++;
}
void foo1() {
	cnt++;
}
void foo2() {
	cnt++;
}
void foo3() {
	cnt++;
}