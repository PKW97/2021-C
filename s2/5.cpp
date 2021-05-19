// 5 몸무게와 키를 입력 받아 BMI(body mass index)를 계산하시오.
// (단, BMI=몸무게/키2, 몸무게:kg 단위, 키:m 단위) (예) 몸무게 55kg,  키 165 cm 라면 => BMI = 55/1.65 2 = 20.2

#include <stdio.h>

void main()
{
	double w, h;
	double bmi;

	printf("몸무게와 키를 입력하시오: \n");
	scanf_s("%lf %lf", &w, &h);

	bmi = w / ((h * 0.01) * (h * 0.01));

	printf("BMI = %.1lf \n", bmi);

}
