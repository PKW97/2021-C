//5 ���� �Լ��� ���� ȣ��� �� �ִ� � �Լ�(���� ��� foo() �Լ�) 
// �ڽ��� �� �� ȣ��Ǿ����� �������ִ� �Լ��� ����� ���� �� ȣ���Ͽ� �����غ��ÿ�.

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
	printf("%d�� ȣ��", cnt);
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