//7 문자열 5개를 입력 받아 영어사전식으로 정렬하여 출력하시오.(2차원 배열 이용) (문자열 정렬: “a”<“aaa“<“ab”<…<“zzz”)

#include <stdio.h>
#include <string.h>

void main() 
{
	char str[5][100];
	printf("문자열 5개 입력: \n");
	gets_s(str[0]);
	gets_s(str[1]);
	gets_s(str[2]);
	gets_s(str[3]);
	gets_s(str[4]);
		
	char cc[100];

	for (int i = 0; i <= 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (strcmp(str[j], str[j + 1]) > 0) {
				strcpy_s(cc, str[j]);
				strcpy_s(str[j], str[j + 1]);
				strcpy_s(str[j + 1], cc);
			}
		}
	}

	printf("\n");

	for (int i = 0; i <= 4; i++) {
		printf("%s\n", str[i]);
	}

}


