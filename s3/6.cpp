//실습문제6. 지하철 이용거리를 입력 받아 요금을 계산하시오.
//(10Km 이내 : 1250원, 10~50Km : 5Km마다 100원 추가, 50Km 초과시 : 8Km마다 100원 추가; (예)11Km면 1250 + 100 = 1350원, 15Km면 1250 + 100 = 1350원)

#include <stdio.h>

void main()
{
    int length; //이용거리
    int alpha; //추가
    int money; //요금

    printf("지하철 이용거리를 입력하시오. ");
    scanf_s("%d", &length);

    if (length <= 10) 
    {
        money = 1250;
    }
    else if (length <= 50)
    {
        alpha = ((length - 1) / 5);
        money = 1250 + (alpha - 1) * 100;
    }
    else
    {
        alpha = ((length - 51) / 8);
        money = 2050 + (alpha + 1) * 100;
    }

    printf("요금: %d", money);

}