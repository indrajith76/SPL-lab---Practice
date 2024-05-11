/*Write a C program to calculate the distance between two points.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int x1 = 2, x2 = -2, y1 = 2, y2 = -3;

    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%f", distance);
}