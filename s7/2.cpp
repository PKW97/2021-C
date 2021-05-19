//2. a(정수)의 b(자연수)승을 해 주는 함수를 직접 만들고, 호출해 보시오.

#include <stdio.h>
int mypow(int a, int b);

void main()
{
	int a, b;
	printf("입력: ");
	scanf_s("%d %d", &a, &b);

	int sum = mypow(a, b);
	printf("결과: %d", sum);
}

int mypow(int a, int b) {
	int i = 0;
	int sum = 1;
	for (i = 1; i <= b; i++) {
		sum = sum * a;
	}
	return sum;
}

