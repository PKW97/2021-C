// 4 우리나라 국내총생산액을 구하시오. 일인당 국내총생산은 33,000달러이고, 우리나라 인구는 52,000,000명이다.(오버플로 주의!)

#include <stdio.h>

int main()
{
	double in = 33000; // 일인당 국내총생산
	double po = 52000000; //우리나라 인구

	double total = in * po; //국내총생산

	printf("우리나라 국내총생산액은 %.0lf달러다", total);
}