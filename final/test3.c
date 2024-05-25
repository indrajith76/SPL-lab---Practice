/* 3. Write a C program that takes an integer input n from the user and prints the first n numbers in the Fibonacci series. */
#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &num);

    int firstNum = 0, secondNum = 1;
    int fiboNum;

    for (int i = 1; i <= num; i++)
    {
        if (num == i)
        {
            printf("%d = ", firstNum);
        }
        else{
            printf("%d + ", firstNum);

        }
        sum += firstNum;
        fiboNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = fiboNum;
    }
    printf("%d", sum);
}