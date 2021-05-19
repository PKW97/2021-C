// 1 밑원의 반지름과 높이를 입력 받아 원기둥의 부피를 구하시오.(단,  매크로 VOLUME(x,y)은 반지름이 x이고 높이 y인 원기둥의 부피)

#include <stdio.h>
#define VOLUME(x,y) (3.14*(x)*(x)*(y))

void main()
{
	int r , h;
	double bupi;

	printf("밑원의 반지름과 높이를 입력하시오 \n");
	scanf_s("%d %d", &r, &h);
	bupi = VOLUME(r, h);

	printf("부피: %lf\n", bupi);
}