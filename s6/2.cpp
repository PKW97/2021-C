//2 3*4*5 ũ���� 3���� �迭�� �����, ������ ��(rand(),srand() �̿�)���� �ʱ�ȭ �� ��, ����� ���Ͻÿ�. 
//  (��, int rand() : 0~32767 ������, stdlib.h �ʿ�)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int array[3][4][5], i, j, k, sum = 0;
	double avg;

	srand(time(NULL));
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 5; k++)
			{
				array[i][j][k] = rand();
				sum += array[i][j][k];
				printf("%6d", array[i][j][k]);
			}
		}
	}
	avg = sum / 60.0;
	printf("��� : %lf", avg);
}