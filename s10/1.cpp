//1 ���ڿ����� ���ڹ���(�� ��0��~��9��)�� ������ �˷��ִ� �Լ��� �����, ȣ���� ���ÿ�.( int cntNumber(char *) )

#include <stdio.h>

int cntNumber(char* c);

void main()
{
	char line[100];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf_s("%s", line, 100);
	int count = cntNumber(line);
	printf("���ڹ����� ����: %d", count);
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
