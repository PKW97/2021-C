// 7 ��Ʈ�������ڸ� �̿��Ͽ� �Է� ���� ������ �ƽ�Ű���� �������� ����Ͻÿ�.(���� ��A�� ��, 0100 0001 ���)

#include <stdio.h>

void main()
{
	char c;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &c, 1);
	
	printf("%d", c & 128 ? 1 : 0);
	printf("%d", c & 64 ? 1 : 0);
	printf("%d", c & 32 ? 1 : 0);
	printf("%d ", c & 16 ? 1 : 0);
	printf("%d", c & 8 ? 1 : 0);
	printf("%d", c & 4 ? 1 : 0);
	printf("%d", c & 2 ? 1 : 0);
	printf("%d", c & 1 ? 1 : 0);

}