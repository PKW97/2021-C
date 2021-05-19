//7. 난수를 이용하여 1에서 45 사이의 서로 다른 숫자 5개를 발생시켜 출력하시오.(중복제거하고, 라이브러리 rand(), srand(), time() 사용)

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