//프로그래밍 연습문제7. 다음을 참고로 표준입력으로 받은 종합소득 금액에 따른 세율을 정한 후 과세금액을 계산하여 출력
// 예) 2000만원이면 세금은 총 192만원

#include <stdio.h>

void main()
{
	double money; //종합소득
	double tax; // 세금
	double taxrate; //세율

	printf("종합소득을 입력하시오(만원 단위): ");
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
	printf("세금: %.0lf만원", tax);
}