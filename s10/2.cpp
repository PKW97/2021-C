//2 ���ڿ��� �Է� �޾� (gets() �̿�), 3 ���ھ� �߶� ���� �� ���ο� ����Ͻÿ�.

#include <stdio.h>

void main()
{
	char line[100];
	int i = 0;
	printf("���ڿ��� �Է��Ͻÿ�: \n");
	
	gets_s(line, 100);
	
	while (line[i]) {
		printf("%c", line[i]);
		i++;
		if (i % 3 == 0)
			printf("\n");
	}

}