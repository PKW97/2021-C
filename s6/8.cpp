//8 현금을 입력 받아 큰 단위 화폐 위주로 각 단위의 개수를 구하시오.(예: 108,000원 => 50,000원권 2개, 5,000원권 1개, 1,000원권 3개)

#include <stdio.h>

void main()
{
	int money, i, tmp;
	int array[4] = { 50000,10000,5000,1000 };

	printf("현금 입력: ");
	scanf_s("%d", &money);

	for (i = 0; i < 4; i++) {
		tmp = money / array[i];
		money = money % array[i];
		printf("%d원 %d개 ", array[i], tmp);
		
	}
}