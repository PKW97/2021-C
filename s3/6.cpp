//�ǽ�����6. ����ö �̿�Ÿ��� �Է� �޾� ����� ����Ͻÿ�.
//(10Km �̳� : 1250��, 10~50Km : 5Km���� 100�� �߰�, 50Km �ʰ��� : 8Km���� 100�� �߰�; (��)11Km�� 1250 + 100 = 1350��, 15Km�� 1250 + 100 = 1350��)

#include <stdio.h>

void main()
{
    int length; //�̿�Ÿ�
    int alpha; //�߰�
    int money; //���

    printf("����ö �̿�Ÿ��� �Է��Ͻÿ�. ");
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

    printf("���: %d", money);

}