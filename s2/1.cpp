// 1 �ؿ��� �������� ���̸� �Է� �޾� ������� ���Ǹ� ���Ͻÿ�.(��,  ��ũ�� VOLUME(x,y)�� �������� x�̰� ���� y�� ������� ����)

#include <stdio.h>
#define VOLUME(x,y) (3.14*(x)*(x)*(y))

void main()
{
	int r , h;
	double bupi;

	printf("�ؿ��� �������� ���̸� �Է��Ͻÿ� \n");
	scanf_s("%d %d", &r, &h);
	bupi = VOLUME(r, h);

	printf("����: %lf\n", bupi);
}