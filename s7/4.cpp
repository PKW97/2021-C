//4. 입력된 수의 10승, 20승, 30승, 40승, 50승을 출력하시오(라이브러리 함수 pow() 사용)

#include <stdio.h>
#include <math.h>

void main()
{
	double a, i;

	printf("수를 입력하시오: ");
	scanf_s("%lf", &a);

	for (i = 10; i <= 50; i += 10)
	{
		printf("%.0lf ", pow((double)a, (double)i));
	}
	
}