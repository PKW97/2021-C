//5 몸무게와 키를 입력하여 BMI(body mass index)를 구하고, 18미만이면 “저체중”, 18~25이면 “정상”, 25초과면 “과체중”을 출력하시오.
//  (단, BMI = 몸무게/키2 , 몸무게:kg 단위, 키:m 단위)  (예) 몸무게 55kg,  키 1.65 m 라면 => BMI = 55/1.65 2 = 20.2

#include <stdio.h>

void main()
{
	double w, h;
	
	printf("몸무게와 키를 입력하시오: ");
	scanf_s("%lf %lf", &w, &h);

	double bmi = w / ((h * 0.01) * (h * 0.01));

	printf("%.1lf", bmi);
	printf("\n");

	if (bmi < 18.0)
	{
		printf("저체중");
	}
	else if (bmi <= 25.0)
	{
		printf("정상");
	}
	else
	{
		printf("과체중");
	}
}