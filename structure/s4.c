#include <stdio.h>
#include <string.h>

struct Student
{
    int age;
    char name[20];
    float marks;
} s1; // * global

void inputData(struct Student *s1)
{
    printf("Enter age : ");
    scanf("%d", &s1->age);

    printf("Enter name : ");
    scanf("%s", s1->name);

    printf("Enter marks : ");
    scanf("%f", &s1->marks);
}

void displayData(struct Student s1)
{
    printf("Age : %d\n", s1.age);
    printf("Name : %s\n", s1.name);
    printf("Marks : %f\n", s1.marks);
}

int main()
{
    printf("Size of Struct Student : %d\n", sizeof(struct Student));

    // * providing values
    // inputData(&s1);

    // *displaying values
    // displayData(s1);

    struct Student s2; // * local
    inputData(&s2);
    displayData(s2);

    return 0;
}