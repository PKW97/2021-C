/* �ǽ�����6 for loop�� �̿��Ͽ� ����ó�� ����ϰ� �Ͻÿ�.
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
