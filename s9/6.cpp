//1에서 100까지의 하나의 난수를 저장하여 사용자가 이 값을 맞추는 프로그램을 작성하시오.

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
	printf("1에서 100까지의 하나의 정수가 결정되었습니다.\n");
	printf("이 정수를 맞추어 보세요? > ");
	scanf_s("%d", &input);
}

void printAnswer()
{
	printf("축하합니다! 정답은 %d입니다.\n", input);
}
void printHigher()
{
	max = input - 1;
	printf("맞추어야 할 정수가 입력한 정수 %d보다 작습니다.\n", input);
	printf("%d에서 %d 사이의 정수를 다시 입력하세요. > ", min, max);
	scanf_s("%d", &input);
	puts("");
}
void printLower()
{
	min = input + 1;
	printf("맞추어야 할 정수가 입력한 정수 %d보다 큽니다.\n", input);
	printf("%d에서 %d 사이의 정수를 다시 입력하세요. > ", min, max);
	scanf_s("%d", &input);
	puts("");
}

