//�������� 7 ǥ���Է����� ���� int ���� �� ������ ��Ģ������ �����ϴ� ���α׷� �ۼ�

#include <stdio.h>

void main() {
	double* input;
	int* p = (int*)&input;

	scanf_s("%d %d", p, p + 1);

	printf("%d + %d = %d\n", *p, *(p + 1), *p + *(p + 1));
	printf("%d - %d = %d\n", *p, *(p + 1), *p - *(p + 1));
	printf("%d * %d = %d\n", *p, *(p + 1), *p * *(p + 1));
	printf("%d / %d = %d\n", *p, *(p + 1), *p / (*(p + 1)));
}