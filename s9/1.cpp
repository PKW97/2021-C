//1 ���������� �ϳ� �����ϰ� �� �������� ����ŭ ��Hello���� ���� �� ����ϴ� �Լ��� ����ÿ�. main()���� �� �������� ���� �Է��� ��, 
// �Լ�ȣ���Ͻÿ�. 

#include <stdio.h>

int bun;
void hello();

void main()
{
	printf("��� ����ұ��? ");
	scanf_s("%d", &bun);
	hello();		
}

void hello() {
	int i;
	for (i = 0; i < bun; i++) {
		puts("Hello");
	}
}