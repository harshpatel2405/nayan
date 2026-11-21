// * 4th pro - local + adding data one by one
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

int empCount = 0; // * will keep the count of number of employees added

// * will collect all data of employees at once
void inputData(struct Employee *e)
{
    if (empCount < SIZE)
    {
        printf("\nEnter Details for Employee %d\n", empCount);

        printf("Enter ID : ");
        scanf("%d", &e->id);

        printf("Enter Age : ");
        scanf("%d", &e->age);

        printf("Enter Salary : ");
        scanf("%f", &e->salary);

        printf("Enter name : ");
        scanf("%s", e->name);

        printf("Enter Department : ");
        scanf("%s", e->dept);

        empCount++;
        printf("Data Added Successfully...\n\n");
    }
    else
    {
        printf("No more employees can be added\n\n");
    }
}

// * will display All records in the structure
void displayData(struct Employee emp[])
{
    if (empCount > 0)
    {
        printf("\nID\tAge\tSalary\tName\tDepartment\n--\t---\t------\t----\t----------\n");
        for (int i = 0; i < empCount; i++)
        {
            printf("%d\t%d\t%0.1f\t%s\t%s\n", emp[i].id, emp[i].age, emp[i].salary, emp[i].name, emp[i].dept);
        }
        printf("\n");
    }
    else
    {
        printf("No Employee data present\n\n");
    }
}

int main()
{
    int choice = 0;
    struct Employee emp[SIZE]; // * local

    while (choice != 3)
    {
        printf("1. Add Employee\n2. Display All Employee\n3. Exit\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            inputData(&emp[empCount]); // * add one employee at a time
            break;
        case 2:
            displayData(emp);
            break;
        case 3:
            printf("Exiting the program");
            break;
        default:
            printf("Select Correct Operation\n\n");
        }
    }
    return 0;
}