// 4 ���׿����ڸ� �̿��Ͽ� �Է��� �� ���� �ִ��� ���Ͻÿ�.

#include <stdio.h>

void main()
{
	int a, b, c, max;
	
	printf("�� ���� �Է��Ͻÿ�: \n");
	scanf_s("%d %d %d", &a, &b, &c);

	max = a >= b ? (a >= c ? a : c) : (b >= c ? b : c);

	printf("�ִ�: %d", max);

}