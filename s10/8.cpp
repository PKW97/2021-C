//��������10 ���� ������ ���ڿ��� ������ ��ȯ�ϴ� �Լ��� �����ϰ� ����� �˾ƺ��� ���α׷��� �ۼ�

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void toint(char* str);

void main()
{
	char line[100];
	printf("������ �ϳ� �Է��ϼ���: ");
	gets_s(line, 100);
	printf("%s\n", line);
	int ato = atoi(line);
	printf("���� �Լ� atoi()�� �̿��� ���� -> %d\n", ato);
	toint(line);
}
void toint(char *str)
{
	int n = 0;
	for (int i = 0; str[i] >= '0' && str[i] <= '9'; i++)
	{
		n = 10 * n + (str[i] - '0');
	}
	printf("���� ������ �Լ��� �̿��� ���� -> %d", n);
}