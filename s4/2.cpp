//�ǽ�����2 1���� 10000 ���� 5�Ǵ� 7�� ����� �� ������ ���Ͻÿ�.

#include <stdio.h>

void main()
{
	int i;
	int num = 0;

	for (int i = 1; i <= 10000; i++)
	{
		if (i % 5 == 0 || i % 7 == 0)
		num++;
	}
	printf("result: %d", num);
}