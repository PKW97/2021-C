//2 3*4*5 크기의 3차원 배열을 만들고, 임의의 값(rand(),srand() 이용)으로 초기화 한 후, 평균을 구하시오. 
//  (단, int rand() : 0~32767 리턴함, stdlib.h 필요)

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
	printf("평균 : %lf", avg);
}