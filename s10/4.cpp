//4 �Է� ���� ���ڿ����� �� ��� ���ڸ� ����Ͻÿ�.(���̰� ¦���� 2�� ���)

#include <stdio.h>
#include <string.h>

void main()
{
	char line[100];

	printf("���ڿ��� �Է�: ");
	gets_s(line, 100);

	int a = strlen(line);
	if (a % 2 != 0)
		printf("%c", line[a / 2]);
	else
		printf("%c%c", line[(a/2)-1], line[a/2]);

}