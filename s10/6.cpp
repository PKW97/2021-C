//6 �� ���ڿ��� ���� ��ȯ�ϴ� �Լ��� �����, ȣ���� ���ÿ�.(��, ȣ���� �� ��ȯ�� ���������� Ȯ���� ��)( void swapStr(char *, char *) )
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swapStr(char* c1, char* c2);

void main()
{
	char line1[100];
	char line2[100];
	printf("�� ���ڿ��� �Է�: \n");
	gets_s(line1, 100);
	gets_s(line2, 100);
	printf("\n");

	swapStr(line1, line2);
	printf("%s %s", line1, line2);
}

void swapStr(char* c1, char* c2)
{
	char line[100];

	strcpy(line, c1);
	strcpy(c1, c2);
	strcpy(c2, line);
}




