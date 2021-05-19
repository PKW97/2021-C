// 3 원주율(3.14)을 상수(const)로 선언하고, 반지름이 6400Km인 지구의 둘레길이를 구하시오.(단, 원주의 크기 = 2*π*r)

#include <stdio.h>

int main()
{
	const double PI = 3.14;
	int r = 6400;

	double dule = 2 * PI * r;

	printf("지구의 둘레는 %0.lfkm다 \n", dule);

}