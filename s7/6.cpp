//6. �迭�� �� ���Ұ��� �Ųٷ� �ٲ��ִ� �Լ��� �����, ȣ���� ���ÿ�.({1,4,7,5} -> {5,7,4,1} ��:void rev_arr(int *, int))

#include <stdio.h>

void rev_arr(int aa[], int n);

void main()
{
	int data[4] = { 1,4,7,5 };
	int i;
	
	rev_arr(data, 4);
	printf("���: ");
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