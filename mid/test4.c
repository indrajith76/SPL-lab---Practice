/* Write a C program check whether a number is even or odd. */
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is Even", num);
    }
    else
        printf("%d is Odd", num);
}