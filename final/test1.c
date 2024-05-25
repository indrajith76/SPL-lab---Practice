/* 1. Write a C program that takes an integer input n from the user and prints a star pattern in the
following format:
*
* *
* * *
* * * *
* * * * *
* * * * * * */
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}