// 조건연산자를 이용하여 임의의 달을 입력 받아 이 달이 상반기이면 "상반기입니다."를 하반기이면 "하반기입니다."를 출력하는 프로그램을 작성하시오.

#include <stdio.h>

void main()
{
	int month;
	
	printf("달을 입력하시오: ");
	scanf_s("%d", &month);

	// month < 7 ? printf("상반기입니다.") : printf("하반기입니다.");
	printf("%s", month < 7 ? "상반기입니다." : "하반기입니다.");
	
}