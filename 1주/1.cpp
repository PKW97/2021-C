// 1 ȭ�� 90���� ���� �� ������ ���Ͻÿ�(��, C = (F -32)/1.8 )

#include <stdio.h>

int main()
{
	double f = 90.0;

	double c = (f - 32) / 1.8;

	printf("ȭ�� %lf���� ����%lf���� \n", f, c);
}