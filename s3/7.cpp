//�ǽ�����7 ��Ӿ��� �Է� �޾� ��Ӽ� ����ϱ�.
//(��, 1�� �������� 10 %, 1��~5�� �� 20 %, 5��~10�� �� 30 %, 10��~30�� �� 40 %, 30�� �� �̻� ���� 50 % ��.
//	(��)1��3õ�����̸� ��Ӽ��� 1�� * 10 % +3õ�� * 20 % = 1600 ������)

#include <stdio.h>

void main()
{
	double money; //��Ӿ�
	double tax; //��Ӽ�
	double taxrate; //����

	printf("��Ӿ��� �Է��Ͻÿ�(���� ����): ");
	scanf_s("%lf", &money);

	double a = 10000 * 0.1; //1������� ����
	double b = 40000 * 0.2; //5������� ����
	double c = 50000 * 0.3; //10������� ����
	double d = 200000 * 0.4; //30������� ����

	if (money <= 10000)
	{
		taxrate = 0.1;
		tax = money * taxrate;
	}
	else if (money <= 50000)
	{
		taxrate = 0.2;
		tax = a + (money - 10000) * taxrate;
	}	
	else if (money <= 100000)
	{
		taxrate = 0.3;
		tax = a + b + (money - 50000) * taxrate;
	}
	else if (money <= 300000)
	{
		taxrate = 0.4;
		tax = a + b + c + (money - 100000) * taxrate;
	}
	else
	{
		taxrate = 0.5;
		tax = a + b + c + d + (money - 300000) * taxrate;
	}
	printf("��Ӽ�: %.0lf(����)", tax);
}
