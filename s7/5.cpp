//5. �迭�� ���ڷ� �޾� �ִ밪�� ���� ���Ҹ� ���� ���ִ� �Լ��� �����, �� �Լ��� �̿��Ͽ� �Էµ� ���� �� �� �ִ밪�� ����Ͻÿ�.

#include <stdio.h>
double mymax(double ary[], int n);

void main()
{
	double ary[5];
	double max;
	int i;

	printf("5���� ���� �Է�:\n");

	for (i = 0; i < 5; i++) {
		scanf_s("%lf", &ary[i]);
	}
	for (i = 0; i < 5; i++) {
		max = mymax(ary, 5);
	}
	printf("max: %.0lf", max);
	
}

double mymax(double ary[], int n) {
	int i = 0;
	
	double max = ary[0];
	for (i = 1; i < n; i++) {

		if (ary[i] > max) max = ary[i];
	}
	return max;
}

