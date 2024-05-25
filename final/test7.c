/* 7. Write a C program that takes an integer input n from the user and calculates the factorial of n using a recursive function. */

#include <stdio.h>

int factorialRecurFunc(int num);

int main()
{
    int n;
    printf("Enter an integer value: ");
    scanf("%d", &n);

    int sumOfFactorial = factorialRecurFunc(n);
    printf("%d", sumOfFactorial);

    return 0;
}

int factorialRecurFunc(int num)
{
    if (num > 0)
    {
        return num * factorialRecurFunc(num - 1);
    }
    else
    {
        return 1;
    }
}