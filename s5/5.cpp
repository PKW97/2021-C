//5 포인터 인자의 해당변수를 N만큼 더해주는 함수를 만드시오.(  void   addN(int *p, int N)   )

#include <stdio.h>

void addN(int* p, int N)
{
	int sum = *p + N;
	printf("%d", sum);
}

void main()
{
	int a, b, sum;
	printf("두 정수를 입력: ");
	scanf_s("%d %d", &a, &b);

	addN(&a, b);
	
}