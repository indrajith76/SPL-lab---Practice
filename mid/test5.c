/*Write a C program to check vowel or consonant.*/
#include <stdio.h>

int main()
{
    char charater;
    scanf("%c", &charater);

    int checkVowel = (charater == 'a' || charater == 'e' || charater == 'o' || charater == 'i' || charater == 'u' || charater == 'A' || charater == 'E' || charater == 'I' || charater == 'O' || charater == 'U');

    if (checkVowel)
    {
        printf("%c is Vowel", charater);
    }
    else
        printf("%c is Consonant", charater);
}
 