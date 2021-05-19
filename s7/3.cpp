//3. 입력된 3수 중 가장 큰 값과 가장 작은 값을 구하시오.(큰 값 구해서 리턴하는 함수와, 작은 값 구해서 리턴하는 함수를 각각 구현)

#include <stdio.h>

int mymax(int a, int b, int c);
int mymin(int a, int b, int c);

void main()
{
	int a, b, c;

	printf("세개의 수 입력: ");
	scanf_s("%d %d %d", &a, &b, &c);

	printf("max: %d  min: %d", mymax(a, b, c), mymin(a, b, c));
}

int mymax(int a, int b, int c) {
	int max = a >= b ? (a >= c ? a : c) : (b >= c ? b : c);
	return max;
}

int mymin(int a, int b, int c) {
	int min = a <= b ? (a <= c ? a : c) : (b <= c ? b : c);
	return min;
}