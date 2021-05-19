//5 양의 정수를 입력 받아 한글로 바꾸시오.(5자리 이하의 수) (만일 253 이면, 이오삼)
  
#include <stdio.h>

void main()
{

	int n, i, tmp, array[10];
	
	printf("양의 정수를 입력: ");
	scanf_s("%d", &n);

	tmp = n;
	i = 0;

	while (tmp > 0) {
		array[i] = tmp % 10;
		tmp = tmp / 10;
		i++;
	}
	i--;
	for (; i>=0; i--) {
		if (array[i] == 0) printf("영");
		else if (array[i] == 1) printf("일");
		else if (array[i] == 2) printf("이");
		else if (array[i] == 3) printf("삼");
		else if (array[i] == 4) printf("사");
		else if (array[i] == 5) printf("오");
		else if (array[i] == 6) printf("육");
		else if (array[i] == 7) printf("칠");
		else if (array[i] == 8) printf("팔");
		else               printf("구");
	}
}