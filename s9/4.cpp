//4 ���ڿ� ���ڿ��� ����(consonant)�� ���, �������θ� �� ���ڿ��� �������ִ� �Լ��� ����� ȣ���� ���ÿ�.

#include <stdio.h>

char* print_cons(char* p);

void main()
{
	char cc[100];
	char* pp;

	printf("���ڿ� �Է�: ");
	
	scanf_s("%s", cc, sizeof(cc));
	
	pp = print_cons(cc);
	
	printf("�������θ� �� ���ڿ� ���: %s", pp);

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