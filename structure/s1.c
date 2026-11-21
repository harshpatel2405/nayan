#include <stdio.h>
#include <string.h>

struct Student
{
    int age;
    char name[20];
    float marks;
} s1; // * global

struct Student s2; // * global

int main()
{
    printf("Size of Struct Student : %d\n", sizeof(struct Student));

    // * providing values
    s1.age = 12;
    strcpy(s1.name, "Harsh");
    s1.marks = 98.56;


    // *displaying values
    printf("Age : %d\n", s1.age);
    printf("Name : %s\n", s1.name);
    printf("Marks : %f\n", s1.marks);
    return 0;
}

