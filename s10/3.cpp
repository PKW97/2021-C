/* 3 ���ڿ��� ���ڷ� �޾� ���������� �̷���� ���ڿ��� ����, ������ ���ڷ� ������ �ִ� �Լ��� �����, ȣ���� ���ÿ�.
    (��, ������ a,e,i,o,u ��)   ( void strVowel(char *, char *) )*/

#include <stdio.h>
#include <string.h>

void strVowel(char* s1, char* s2);

void main()
{
    char s1[100];
    char s2[100];

    printf("���ڿ� �Է�: ");
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

