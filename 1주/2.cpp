// 2  ������(3.14)�� ��ũ�λ���� �����ϰ�, �������� 6400Km�� ������ �ѷ����̸� ���Ͻÿ�.(��, ������ ũ�� = 2*��*r)

#include <stdio.h>
#define PI 3.14

int main()
{
	int r = 6400;
	
	double dule = 2 * PI * r;

	printf("������ �ѷ��� %.0lfkm�� \n", dule);
}

