//5 ���ڿ��� �Ųٷ� ������ִ� �Լ��� �����, ȣ���� ���ÿ�.

#include <stdio.h>
#include <string.h>

void rev(char* c);

void main()
{
	char line[100];
	
	printf("���ڿ� �Է�: ");
	gets_s(line, 100);

	printf("���: ");
	rev(line);
}

void rev(char* c)
{
	int a = strlen(c)-1;

	for (int i = a; i >= 0; i--) {
		printf("%c", c[i]);
	}
}