// * 1st pro - global + adding all data at once (loop)
#include <stdio.h>
#define SIZE 3

struct Employee
{
    int id;
    int age;
    char name[20];
    char dept[20];
    float salary;
};

struct Employee emp[SIZE];

// * will collect all data of employees at once
void inputData()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter Details for Employee %d\n", i);

        printf("Enter ID : ");
        scanf("%d", &emp[i].id);

        printf("Enter Age : ");
        scanf("%d", &emp[i].age);

        printf("Enter Salary : ");
        scanf("%f", &emp[i].salary);

        printf("Enter name : ");
        scanf("%s", emp[i].name);

        printf("Enter Department : ");
        scanf("%s", emp[i].dept);
    }
}

// * will display All records in the structure
void displayData()
{
    printf("\nID\tAge\tSalary\tName\tDepartment\n---\t------\t----\t----------\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t%d\t%0.1f\t%s\t%s\n", emp[i].id, emp[i].age, emp[i].salary, emp[i].name, emp[i].dept);
    }
}

int main()
{
    inputData();
    displayData();
    return 0;
}