//5 ���� ������ �Է� �޾� �ѱ۷� �ٲٽÿ�.(5�ڸ� ������ ��) (���� 253 �̸�, �̿���)
  
#include <stdio.h>

void main()
{

	int n, i, tmp, array[10];
	
	printf("���� ������ �Է�: ");
	scanf_s("%d", &n);

	tmp = n;
	i = 0;

	while (tmp > 0) {
		array[i] = tmp % 10;
		tmp = tmp / 10;
		i++;
	}
	i--;
	for (; i>=0; i--) {
		if (array[i] == 0) printf("��");
		else if (array[i] == 1) printf("��");
		else if (array[i] == 2) printf("��");
		else if (array[i] == 3) printf("��");
		else if (array[i] == 4) printf("��");
		else if (array[i] == 5) printf("��");
		else if (array[i] == 6) printf("��");
		else if (array[i] == 7) printf("ĥ");
		else if (array[i] == 8) printf("��");
		else               printf("��");
	}
}