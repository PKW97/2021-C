// 5 �����Կ� Ű�� �Է� �޾� BMI(body mass index)�� ����Ͻÿ�.
// (��, BMI=������/Ű2, ������:kg ����, Ű:m ����) (��) ������ 55kg,  Ű 165 cm ��� => BMI = 55/1.65 2 = 20.2

#include <stdio.h>

void main()
{
	double w, h;
	double bmi;

	printf("�����Կ� Ű�� �Է��Ͻÿ�: \n");
	scanf_s("%lf %lf", &w, &h);

	bmi = w / ((h * 0.01) * (h * 0.01));

	printf("BMI = %.1lf \n", bmi);

}
