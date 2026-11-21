#include <stdio.h>
#define SIZE 3

struct Employee
{
    int age;
    float salary;
    char name[20];
};

struct Employee emp[SIZE];

void inputData()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("\nEnter Data for Employee %d\n", i);
        printf("Enter Age : ");
        scanf("%d", &emp[i].age);
        printf("Enter Salary : ");
        scanf("%f", &emp[i].salary);
        printf("Enter Name : ");
        scanf("%s", emp[i].name);
    }

    printf("All Data has been Stored Successfully...\n\n");
}

void displayData()
{
    printf("Age\tSalary\tName\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t%0.1f\t%s\n", emp[i].age, emp[i].salary, emp[i].name);
    }
}

int main()
{
    inputData();
    displayData();
    return 0;
}
// * one by one add data into the array of structure
// * empCount = 0
