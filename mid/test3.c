/*Write a C program to find maximum between three numbers*/
#include <stdio.h>

int main()
{
    int num1 = 3, num2 = 10, num3 = 7;

    if (num1 < num2)
    {
        printf("Number %d is Maximum", num2);
    }
    else if (num1 < num3)
    {
        printf("Number %d is Maximum", num3);
    }
    else
    {
        printf("Number %d is Maximum", num1);
    }
}