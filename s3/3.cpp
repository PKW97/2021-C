//실습문제3. 연도를 입력 받아 윤년인지 아닌지 알려주기(4의 배수이고 100의 배수 아니면 윤년임. 단 400의 배수이면 무조건 윤년임)

#include <stdio.h>

void main()
{
	int n;

	printf("연도를 입력하시오: ");
	scanf_s("%d", &n);

	if (n % 4 == 0 && n % 100 != 0)
	{
		printf("윤년");
	}
	else if (n % 400 == 0)
	{
		printf("윤년");
	}
	else
		printf("윤년 아님");

}