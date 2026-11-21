#include <stdio.h>
#include <string.h>

struct Teacher
{
    int teacherId;
    char teacherName[30];
};

struct Student
{
    int studentId;
    char studentName[30];
};

struct School
{
    int schoolId;
    char schoolName[50];

    struct Principal
    {
        int principalId;
        char principalName[30];
    } p;              // * one variable of principal
    struct Teacher t; // *  one variable of teacher
    struct Student s; // * one variable of student

    // struct Teacher t[5]; // * five variable of teacher
    // struct Student s[5]; // * five variable of student
};

int main()
{
    struct School DPS; // * variable is local

    // * school Details
    DPS.schoolId = 101;
    strcpy(DPS.schoolName, "Delhi Public School");

    printf("School ID : %d\n", DPS.schoolId);
    printf("School Name : %s\n", DPS.schoolName);

    // * principal details
    DPS.p.principalId = 10101;
    strcpy(DPS.p.principalName, "Manjari Goradia");

    printf("Principal ID : %d\n", DPS.p.principalId);
    printf("Principal Name : %s\n", DPS.p.principalName);

    // * teacher details
    DPS.t.teacherId = 1010101;
    strcpy(DPS.t.teacherName, "Khushbu Shah");

    printf("Teacher ID : %d\n", DPS.t.teacherId);
    printf("Teacher Name : %s\n", DPS.t.teacherName);

    // * student details
    DPS.s.studentId = 101010101;
    strcpy(DPS.s.studentName, "Akay Sharma");

    printf("Student ID : %d\n", DPS.s.studentId);
    printf("Student Name : %s\n", DPS.s.studentName);

    return 0;
}