/* 4. Write a C program that swaps the values of two variables using a function and prints the values before and after swapping. */
#include <stdio.h>

void swapping(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int number1 = 10;
    int number2 = 14;

    printf("Before => | Number 1: %d | Number 2: %d | \n", number1, number2); 
    swapping(&number1, &number2); 
    printf("After => | Number 1: %d | Number 2: %d | \n", number1, number2);
}