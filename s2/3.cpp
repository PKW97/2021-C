// 3 �Ǽ� 2���� �Է� �޾� ���� ������ ���� ���Ͻÿ�.
// (��)5.3 ��  2.7 �Է� = > 5 * 2 = 10

#include <stdio.h>

void main()
{
	double a, b;
	int res;

	printf("�Ǽ� 2���� �Է��Ͻÿ�: \n");
	scanf_s("%lf %lf", &a, &b);

	res = (int)a * int(b);

	printf("���ϱ�: %d", res);

}