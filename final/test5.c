/* 5. Write a C program that demonstrates the use of pointers by printing the memory address and the value of a variable. */

#include <stdio.h>

int main()
{
    int valueOfNum = 143;

    printf("Memory address of the variable is : %d\n", &valueOfNum);

    printf("The value of the variable is : %d", valueOfNum);
}