//4 a,b,c,d,e �� ������ �ּҰ��� ������ �ִ� �����͹迭�� �̿��Ͽ�, 5�� ���� �� �ִ��� ���Ͻÿ�. 

#include <stdio.h>

void main()
{
	int a, b, c, d, e;
	int* pa[5] = { &a, &b, &c, &d, &e };
	int i;

	printf("5���� ���� �Է�: \n");
	
	for (i = 0; i < 5; i++) {
		scanf_s("%d", pa[i]);
	}
	int max = *pa[0];
	for (i = 1; i < 5; i++) {
		if (*pa[i] > max) max = *pa[i];
	}
	printf("�ִ�: %d", max);
}