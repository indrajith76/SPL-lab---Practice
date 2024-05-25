/* 8. Write a C program that defines a struct to store information for 5 students, including their name, age, and grade, and then prints this information. */
#include <stdio.h>

struct student
{
    int stdId;
    char name[20];
    int age;
    char grade[2];
};

int main()
{
    struct student std1, std2, std3, std4, std5;
    struct student students[] = {std1, std2, std3, std4, std5};

    for (int i = 0; i < 5; i++)
    {
        printf("Enter stdID:");
        scanf("%d", &students[i].stdId);
        printf("Enter Name:");
        scanf("%s", &students[i].name);
        printf("Enter Age: ");
        scanf("%d", &students[i].age);
        printf("Enter Grade:");
        scanf("%s", students[i].grade);
        printf("\n");
    }
    printf("Print Students date:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("stdId: %d\n", students[i].stdId);
        printf("name: %s\n", students[i].name);
        printf("age: %d\n", students[i].age);
        printf("grade: %s\n", students[i].grade);
        printf("\n");
    }
}