//�ǽ�����1 �ڿ��� �ϳ��� �Է� �޾� �� �� ������ 3�� ��� ��� ����Ͻÿ�.

#include <stdio.h>

void main()
{
	int n, i;

	printf("�ڿ����� �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	for (i = 3; i <= n; i += 3)
	{
		printf("%3d", i);
	}
		
}