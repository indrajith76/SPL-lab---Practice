#include<stdio.h>

int main(){
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    int sum = num1 + num2;
    int products = num1 * num2;
    int division = num1 / num2;

    printf("Sum: %d, Products: %d, Division: %d", sum, products, division);
}