//�ǽ�����3. ������ �Է� �޾� �������� �ƴ��� �˷��ֱ�(4�� ����̰� 100�� ��� �ƴϸ� ������. �� 400�� ����̸� ������ ������)

#include <stdio.h>

void main()
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);

	if (n % 4 == 0 && n % 100 != 0)
	{
		printf("����");
	}
	else if (n % 400 == 0)
	{
		printf("����");
	}
	else
		printf("���� �ƴ�");

}