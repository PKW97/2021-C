//��������13 4x3��Ŀ��� �� ����� �հ� ���� ���Ͻÿ�.

#include <stdio.h>

void main()
{
	int a[4][3] = { 46,79,78,35,57,28,43,68,76,56,78,98 };
	int b[4][3] = { 78,35,99,85,82,34,58,69,29,34,59,35 };
	int i, j;
	int sum[4][3];
	int min[4][3];

	printf("��\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			sum[i][j] = a[i][j] + b[i][j];
			printf("%3d ", sum[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("��\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			min[i][j] = a[i][j] - b[i][j];
			printf("%3d ", min[i][j]);
		}
		printf("\n");
	}
}