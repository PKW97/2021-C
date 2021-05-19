// 6 음식값을 입력 받아 손님 3명의 ‘n분의 1’ 각 지불액을 구하시오. 단 1000원 미만은 한 사람에게 부과하시오. 
// (예)10000원이면 = > (4000원, 3000원, 3000원) 으로 분배

#include <stdio.h>

void main()
{
	int money;

	printf("음식값을 입력하시오: \n");
	scanf_s("%d", &money);

	int ex = (money % 3) * 1000;
	int n = money / 3 / 1000 * 1000;
	
	printf("%d원 %d원 %d원", n + ex, n, n);
	
}