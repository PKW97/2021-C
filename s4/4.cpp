//실습문제4 서기 1년부터 서기 4000년까지의 윤년 개수를 구하시오.(4의 배수이고 100의 배수 아니면 윤년임. 단 400의 배수이면 무조건 윤년임)

#include <stdio.h>

void main()
{
	int i, num = 0;
	int max = 4000;

	for (int i = 1; i <= 4000; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			num++;
	}
	printf("result : %d", num);
	
}