// 1 È­¾¾ 90µµ´Â ¼·¾¾ ¸î µµÀÎÁö ±¸ÇÏ½Ã¿À(´Ü, C = (F -32)/1.8 )

#include <stdio.h>

int main()
{
	double f = 90.0;

	double c = (f - 32) / 1.8;

	printf("È­¾¾ %lfµµ´Â ¼·¾¾%lfµµ´Ù \n", f, c);
}