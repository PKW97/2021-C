//7 두 개의 포인터변수값을 서로 바꿔주는 swap2(   ,   )함수를 구현하고 호출하여 적절히 바뀜을 보이시오.
//  (즉, 포인터 변수에 저장된 주소값을 서로 바꿈. 2중 포인터 필요함)

#include <stdio.h>

void swap2(int** p, int** q) {
	int t;
	t = **p;
	**p = **q;
	**q = t;
}

void main()
{
	int a, b;
	printf("두개의 정수 입력: ");
	scanf_s("%d %d", &a, &b);

	int* p1 = &a;
	int* p2 = &b;

	swap2(&p1, &p2);
	printf("%d %d", a, b);
}
