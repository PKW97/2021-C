//8 ������ �Է� �޾� ū ���� ȭ�� ���ַ� �� ������ ������ ���Ͻÿ�.(��: 108,000�� => 50,000���� 2��, 5,000���� 1��, 1,000���� 3��)

#include <stdio.h>

void main()
{
	int money, i, tmp;
	int array[4] = { 50000,10000,5000,1000 };

	printf("���� �Է�: ");
	scanf_s("%d", &money);

	for (i = 0; i < 4; i++) {
		tmp = money / array[i];
		money = money % array[i];
		printf("%d�� %d�� ", array[i], tmp);
		
	}
}