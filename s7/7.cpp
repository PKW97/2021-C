//7. ������ �̿��Ͽ� 1���� 45 ������ ���� �ٸ� ���� 5���� �߻����� ����Ͻÿ�.(�ߺ������ϰ�, ���̺귯�� rand(), srand(), time() ���)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

void main()
{
	int aa[5], i;

	long seconds = (long)time(NULL);
	srand(seconds);

	for (i = 0; i < 5; i++) {
		aa[i] = rand() % MAX + 1;
		for (int j = 0; j < i; j++) {
			if (aa[i] == aa[j]) i--;
		}

	}
	for (i = 0; i < 5; i++){
	printf("%5d", aa[i]);
	}
}