//7 ���ڿ� 5���� �Է� �޾� ������������� �����Ͽ� ����Ͻÿ�.(2���� �迭 �̿�) (���ڿ� ����: ��a��<��aaa��<��ab��<��<��zzz��)

#include <stdio.h>
#include <string.h>

void main() 
{
	char str[5][100];
	printf("���ڿ� 5�� �Է�: \n");
	gets_s(str[0]);
	gets_s(str[1]);
	gets_s(str[2]);
	gets_s(str[3]);
	gets_s(str[4]);
		
	char cc[100];

	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (strcmp(str[j], str[j + 1]) > 0) {
				strcpy_s(cc, str[j]);
				strcpy_s(str[j], str[j + 1]);
				strcpy_s(str[j + 1], cc);
			}
		}
	}

	printf("\n");

	for (int i = 0; i <= 4; i++) {
		printf("%s\n", str[i]);
	}

}


