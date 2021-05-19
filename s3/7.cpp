//실습문제7 상속액을 입력 받아 상속세 계산하기.
//(단, 1억 원까지는 10 %, 1억~5억 원 20 %, 5억~10억 원 30 %, 10억~30억 원 40 %, 30억 원 이상 분은 50 % 임.
//	(예)1억3천만원이면 상속세는 1억 * 10 % +3천만 * 20 % = 1600 만원임)

#include <stdio.h>

void main()
{
	double money; //상속액
	double tax; //상속세
	double taxrate; //세율

	printf("상속액을 입력하시오(만원 단위): ");
	scanf_s("%lf", &money);

	double a = 10000 * 0.1; //1억까지의 세금
	double b = 40000 * 0.2; //5억까지의 세금
	double c = 50000 * 0.3; //10억까지의 세금
	double d = 200000 * 0.4; //30억까지의 세금

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
	printf("상속세: %.0lf(만원)", tax);
}
