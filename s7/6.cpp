//6. 배열의 각 원소값을 거꾸로 바꿔주는 함수를 만들고, 호출해 보시오.({1,4,7,5} -> {5,7,4,1} 예:void rev_arr(int *, int))

#include <stdio.h>

void rev_arr(int aa[], int n);

void main()
{
	int data[4] = { 1,4,7,5 };
	int i;
	
	rev_arr(data, 4);
	printf("결과: ");
	for (i = 0; i < 4; i++) {
		printf("%d ", data[i]);
	}
	
}


void rev_arr(int aa[], int n)
{
	int i = 0;
	int min, tmp;

	for (i = 0; i < n/2; i++) {
		min = n - 1 - i;

		tmp = aa[min];
		aa[min] = aa[i];
		aa[i] = tmp;
	}
}