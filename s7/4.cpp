//4. �Էµ� ���� 10��, 20��, 30��, 40��, 50���� ����Ͻÿ�(���̺귯�� �Լ� pow() ���)

#include <stdio.h>
#include <math.h>

void main()
{
	double a, i;

	printf("���� �Է��Ͻÿ�: ");
	scanf_s("%lf", &a);

	for (i = 10; i <= 50; i += 10)
	{
		printf("%.0lf ", pow((double)a, (double)i));
	}
	
}