// * 3rd pro - local + adding all data at once 
#include <stdio.h>
#define SIZE 2

struct Employee
{
    int id;
    int age;
    char name[20];
    char dept[20];
    float salary;
};

// * will collect all data of employees at once (without pointer)
// void inputData(struct Employee emp[])
// {
//     for (int i = 0; i < SIZE; i++)
//     {
//         printf("\nEnter Details for Employee %d\n", i);

//         printf("Enter ID : ");
//         scanf("%d", &emp[i].id);

//         printf("Enter Age : ");
//         scanf("%d", &emp[i].age);

//         printf("Enter Salary : ");
//         scanf("%f", &emp[i].salary);

//         printf("Enter name : ");
//         scanf("%s", emp[i].name);

//         printf("Enter Department : ");
//         scanf("%s", emp[i].dept);
//     }
// }

// * will collect all data of employees at once (with pointer)
void inputData(struct Employee *emp)
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
void displayData(struct Employee emp[])
{
    printf("\nID\tAge\tSalary\tName\tDepartment\n---\t------\t----\t----------\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\t%d\t%0.1f\t%s\t%s\n", emp[i].id, emp[i].age, emp[i].salary, emp[i].name, emp[i].dept);
    }
}

int main()
{
    struct Employee emp[SIZE]; // * local
    inputData(emp); // * in real , it is passing &emp[0]
    displayData(emp);
    return 0;
}