/* 3 문자열을 인자로 받아 모음만으로 이루어진 문자열을 구해, 포인터 인자로 전달해 주는 함수를 만들고, 호출해 보시오.
    (단, 모음은 a,e,i,o,u 임)   ( void strVowel(char *, char *) )*/

#include <stdio.h>
#include <string.h>

void strVowel(char* s1, char* s2);

void main()
{
    char s1[100];
    char s2[100];

    printf("문자열 입력: ");
    gets_s(s1, 100);
    strVowel(s1, s2);
    puts(s2);
}

void strVowel(char* s1, char* s2)
{
    while (*s1) {
        if (*s1 == 'a' || *s1 == 'e' || *s1 == 'i' || *s1 == 'o' || *s1 == 'u'){
            *s2 = *s1;
            s2++;
        } 
        s1++;
    }
    *s2 = '\0';

}

