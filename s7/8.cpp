//8. 20�� �̻��� �Ҽ�(prime number) 10�� ã��.(�Ҽ����� �˷��ִ� �Լ��� ������ �� ��: int is_prime(int) )

#include <stdio.h>

int is_prime(int n);

void main()
{
	int i;
	int count = 0;
	for (i = 2000000000; ; i++) {
		if (is_prime(i) == 1) {
			printf("%d\n", i);
			count++;
		}
		else if (count >= 10)
			break;
	}
}


int is_prime(int n)
{
	int i;
	int a = n / 2;
	for (i = 2; i < a; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}