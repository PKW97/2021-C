//2. a(����)�� b(�ڿ���)���� �� �ִ� �Լ��� ���� �����, ȣ���� ���ÿ�.

#include <stdio.h>
int mypow(int a, int b);

void main()
{
	int a, b;
	printf("�Է�: ");
	scanf_s("%d %d", &a, &b);

	int sum = mypow(a, b);
	printf("���: %d", sum);
}

int mypow(int a, int b) {
	int i = 0;
	int sum = 1;
	for (i = 1; i <= b; i++) {
		sum = sum * a;
	}
	return sum;
}

