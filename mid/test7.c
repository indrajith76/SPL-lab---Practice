/*Write a program in C to display the cube of the number up to an integer*/
#include<math.h>
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int calc = pow(num, 3);
    printf("%d cube of this number is %d", num, calc);
}