//5 �����Կ� Ű�� �Է��Ͽ� BMI(body mass index)�� ���ϰ�, 18�̸��̸� ����ü�ߡ�, 18~25�̸� ������, 25�ʰ��� ����ü�ߡ��� ����Ͻÿ�.
//  (��, BMI = ������/Ű2 , ������:kg ����, Ű:m ����)  (��) ������ 55kg,  Ű 1.65 m ��� => BMI = 55/1.65 2 = 20.2

#include <stdio.h>

void main()
{
	double w, h;
	
	printf("�����Կ� Ű�� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &w, &h);

	double bmi = w / ((h * 0.01) * (h * 0.01));

	printf("%.1lf", bmi);
	printf("\n");

	if (bmi < 18.0)
	{
		printf("��ü��");
	}
	else if (bmi <= 25.0)
	{
		printf("����");
	}
	else
	{
		printf("��ü��");
	}
}