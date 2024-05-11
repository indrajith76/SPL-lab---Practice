/*Write a program in C to display n terms of natural numbers and their sum.*/
#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the value of N:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum += i;

        if (i == n)
        {
            printf("%d ", i);
        }
        else
        {
            printf("%d + ", i);
        }
    }
    printf(" = %d", sum);
}