/* 2. Write a C program that takes two integer inputs from the user and uses functions to calculate and print the sum, subtraction, multiplication, and division of these two numbers. */
#include <stdio.h>

int calculateNum(int n1, int n2)
{
    int sum = n1 + n2;
    int sub = n1 - n2;
    int mult = n1 * n2;
    int div = n1 / n2;
    printf("Sum: %d\t", sum);
    printf("Sub: %d\t", sub);
    printf("Mult: %d\t", mult);
    printf("Div: %d\t", div);
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    calculateNum(num1, num2);
}
