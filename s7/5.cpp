//5. 배열을 인자로 받아 최대값을 가진 원소를 리턴 해주는 함수를 만들고, 이 함수를 이용하여 입력된 여러 수 중 최대값을 출력하시오.

#include <stdio.h>
double mymax(double ary[], int n);

void main()
{
	double ary[5];
	double max;
	int i;

	printf("5개의 숫자 입력:\n");

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

