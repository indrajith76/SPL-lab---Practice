/* 6. Write a C program that calculates and prints the length of an array. */

#include <stdio.h>

int main()
{
    int numberOfArray[] = {12, 23, 42, 21, 45, 53, 56, 32, 83, 24, 36};

    int firstCalc = sizeof(numberOfArray) / sizeof(numberOfArray[0]);
    int secondCalc = sizeof(numberOfArray) / 4;

    printf("Size of numberOfArray = %d\n", firstCalc);
    
    printf("Size of numberOfArray = %d\n", secondCalc);
}