/* 실습문제6 for loop를 이용하여 다음처럼 출력하게 하시오.
987654321
98765432
...
98
9 */

#include <stdio.h>

void main()
{
	int i, j;

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 9; j >= i; j--) {
			printf("%d", j);
		} 
		printf("\n");
	}
}
