//3. �Էµ� 3�� �� ���� ū ���� ���� ���� ���� ���Ͻÿ�.(ū �� ���ؼ� �����ϴ� �Լ���, ���� �� ���ؼ� �����ϴ� �Լ��� ���� ����)

#include <stdio.h>

int mymax(int a, int b, int c);
int mymin(int a, int b, int c);

void main()
{
	int a, b, c;

	printf("������ �� �Է�: ");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("max: %d  min: %d", mymax(a, b, c), mymin(a, b, c));
}

int mymax(int a, int b, int c) {
	int max = a >= b ? (a >= c ? a : c) : (b >= c ? b : c);
	return max;
}

int mymin(int a, int b, int c) {
	int min = a <= b ? (a <= c ? a : c) : (b <= c ? b : c);
	return min;
}