//�������� 7 ǥ���Է����� ���� int ���� �� ������ ��Ģ������ �����ϴ� ���α׷� �ۼ�

#include <stdio.h>

void main()
{
	double n;

	int* p1 = (int*)&n;
	int* p2 = (int*)&n+1;

	printf("�� ���� �Է�: ");

	scanf_s("%d %d", p1, p2);

	printf("����: %d\n", *p1 + *p2);
	printf("����: %d\n", *p1 - *p2);
	printf("����: %d\n", *p1 * *p2);
	printf("������: %d\n", *p1 / *p2);
}