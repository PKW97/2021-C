// 3 ������(3.14)�� ���(const)�� �����ϰ�, �������� 6400Km�� ������ �ѷ����̸� ���Ͻÿ�.(��, ������ ũ�� = 2*��*r)

#include <stdio.h>

int main()
{
	const double PI = 3.14;
	int r = 6400;

	double dule = 2 * PI * r;

	printf("������ �ѷ��� %0.lfkm�� \n", dule);

}