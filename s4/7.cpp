/* �ǽ�����7 for���� �̿��Ͽ� ����ó�� ����Ͻÿ�.
1
212
32123
4321234
543212345 */

#include <stdio.h>

void main()
{
	int i, j;

	for (int i = 1; i <= 5; i++)
	{
		for (j = i; j >= 1; j--) {
			printf("%d", j);
			
		}
		for (j = 2; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}
}
