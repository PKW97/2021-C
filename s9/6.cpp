//1���� 100������ �ϳ��� ������ �����Ͽ� ����ڰ� �� ���� ���ߴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number;
int input;

static int min = 1;
static int max = 100;

void setNumber();
void printHead();
void printAnswer();
void printHigher();
void printLower();

void main()
{
	setNumber();
	printHead();

	while (1) {
		if (number < input)
			printHigher();
		else if (number > input)
			printLower();
		else {
			printAnswer();
			break;
		}
	}
}

void setNumber()
{
	long seconds = (long)time(NULL);
	srand(seconds);

	number = rand() % 100 + 1;
}

void printHead()
{
	printf("1���� 100������ �ϳ��� ������ �����Ǿ����ϴ�.\n");
	printf("�� ������ ���߾� ������? > ");
	scanf_s("%d", &input);
}

void printAnswer()
{
	printf("�����մϴ�! ������ %d�Դϴ�.\n", input);
}
void printHigher()
{
	max = input - 1;
	printf("���߾�� �� ������ �Է��� ���� %d���� �۽��ϴ�.\n", input);
	printf("%d���� %d ������ ������ �ٽ� �Է��ϼ���. > ", min, max);
	scanf_s("%d", &input);
	puts("");
}
void printLower()
{
	min = input + 1;
	printf("���߾�� �� ������ �Է��� ���� %d���� Ů�ϴ�.\n", input);
	printf("%d���� %d ������ ������ �ٽ� �Է��ϼ���. > ", min, max);
	scanf_s("%d", &input);
	puts("");
}

