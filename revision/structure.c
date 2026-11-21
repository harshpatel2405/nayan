#include <stdio.h>
/*
* Structure is a user defined data type (primitve + derived)
* custom data type

*/
struct Student
{
    int age;
    float marks;
    char name[20];
} s1; // * global
// * global and local

struct Student s2; // * global

int main()
{
    struct Student s3; // * local
    return 0;
}