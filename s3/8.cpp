//���α׷��� ��������7. ������ ����� ǥ���Է����� ���� ���ռҵ� �ݾ׿� ���� ������ ���� �� �����ݾ��� ����Ͽ� ���
// ��) 2000�����̸� ������ �� 192����

#include <stdio.h>

void main()
{
	double money; //���ռҵ�
	double tax; // ����
	double taxrate; //����

	printf("���ռҵ��� �Է��Ͻÿ�(���� ����): ");
	scanf_s("%lf", &money);

	if (money <= 1200)
	{
		taxrate = 0.06;
		tax = money * taxrate;
	}
	else if (money <= 4600)
	{
		taxrate = 0.15;
		tax = 72 + (money - 1200) * taxrate;
	}
	else if (money <= 8800)
	{
		taxrate = 0.24;
		tax = 582 + (money - 4600) * taxrate;
	}
	else if (money <= 30000)
	{
		taxrate = 0.35;
		tax = 1590 + (money - 8800) * taxrate;
	}
	else
	{
		taxrate = 0.38;
		tax = 9010 + (money - 30000) * taxrate;
	}
	printf("����: %.0lf����", tax);
}