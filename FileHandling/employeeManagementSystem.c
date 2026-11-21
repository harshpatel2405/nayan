// * management system - c create , r read, u update , d delete , search
#include <stdio.h>
#define SIZE 5
FILE *fp;

struct Employee
{
    int id;
    int age;
    char name[20];
    char dept[20];
    float salary;
};

int empCount = 0;
struct Employee emp[SIZE];

// * will search employee by id
int searchEmployeebyId(int id)
{
    fp = fopen("employee.txt", "r");

    fseek(fp, 0, SEEK_END);
    int position = ftell(fp);
    int records = position / sizeof(struct Employee);
    fseek(fp, 0, SEEK_SET);
    struct Employee emp;
    if (records != 0)
    {
        while ((fread(&emp, sizeof(struct Employee), 1, fp)) == 1)
        {
            if (emp.id == id)
            {
                return 1; // *  (employee exists)
            }
        }
    }
    return 0; // * no employee found or no data exists
}

// * will collect all data of employees at once
void inputData()
{
    struct Employee emp;
    printf("\nEnter Details for Employee %d\n", empCount);

    printf("Enter ID : ");
    scanf("%d", &emp.id);

    int index = searchEmployeebyId(emp.id);
    if (index == 1)
    {
        printf("Employee with same id already exists\n\n");
        return;
    }

    printf("Enter Age : ");
    scanf("%d", &emp.age);

    printf("Enter Salary : ");
    scanf("%f", &emp.salary);

    printf("Enter name : ");
    scanf("%s", emp.name);

    printf("Enter Department : ");
    scanf("%s", emp.dept);

    printf("Data Added Successfully...\n\n");

    fp = fopen("employee.txt", "a");
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
}

// * will display All records in the structure
void displayData()
{
    fp = fopen("employee.txt", "r");

    printf("Cursor at %d\n", ftell(fp));

    fseek(fp, 0, SEEK_END);
    printf("Cursor at %d\n", ftell(fp));

    int position = ftell(fp);
    int records = position / sizeof(struct Employee);
    fseek(fp, 0, SEEK_SET);
    printf("Cursor at %d\n", ftell(fp));
    printf("Number of Records : %d\n", records);

    struct Employee emp;

    if (records > 0)
    {
        printf("\nID\tAge\tSalary\tName\tDepartment\n--\t---\t------\t----\t----------\n");
        while ((fread(&emp, sizeof(struct Employee), 1, fp)) == 1)
        {
            printf("%d\t%d\t%0.1f\t%s\t%s\n", emp.id, emp.age, emp.salary, emp.name, emp.dept);
        }
        printf("\n");
    }
    else
    {
        printf("No Employee data present\n\n");
    }
    fclose(fp);
}

void updateEmployee()
{
    if (empCount != 0)
    {
        int id;
        printf("Enter Employee id to be updated : ");
        scanf("%d", &id);

        int index = searchEmployeebyId(id);
        if (index == -1)
        {
            printf("Employee Does not exists\n\n");
            return;
        }
        printf("Enter Age (Old Value - %d): ", emp[index].age);
        scanf("%d", &emp[index].age);

        printf("Enter Salary : ");
        scanf("%f", &emp[index].salary);

        printf("Enter name : ");
        scanf("%s", emp[index].name);

        printf("Enter Department : ");
        scanf("%s", emp[index].dept);

        printf("Data Updated Successfully...\n\n");
    }
    else
    {
        printf("No Employees Present\n\n");
    }
}

void deleteEmployee()
{
    if (empCount != 0)
    {
        int id;
        printf("Enter Employee id to be deleted : ");
        scanf("%d", &id);

        int index = searchEmployeebyId(id);
        if (index == -1)
        {
            printf("Employee Does not exists\n\n");
            return;
        }

        for (int i = index; i < empCount; i++)
        {
            emp[i] = emp[i + 1];
        }

        empCount--;

        printf("Data deleted Successfully...\n\n");
    }
    else
    {
        printf("No Employees Present\n\n");
    }
}

void displayParticularEmployee(int index)
{
    printf("ID : %d\n", emp[index].id);
    printf("Age : %d\n", emp[index].age);
    printf("Salary : %0.2f\n", emp[index].salary);
    printf("Name : %s\n", emp[index].name);
    printf("Department : %s\n", emp[index].dept);
}

int main()
{
    int choice = 0;

    while (choice != 6)
    {
        printf("1. Add Employee\n2. Display All Employee\n3. Update\n4. Delete\n5. Search an Employee\n6. Exit\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            inputData(); // * add one employee at a time
            break;
        case 2:
            displayData();
            break;
        case 3:
            // updateEmployee();
            break;
        case 4:
            // deleteEmployee();
            break;
        case 5:
            int id;
            printf("Enter ID you want to search : ");
            scanf("%d", &id);
            int index = searchEmployeebyId(id);
            if (index == -1)
            {
                printf("No Employees present\n\n");
            }
            else
            {
                displayParticularEmployee(index);
            }
            break;
        case 6:
            printf("Exiting the program");
            break;
        default:
            printf("Select Correct Operation\n\n");
        }
    }
    return 0;
}
// * update - delete 
/*
*  position - record
* position - sizeof(struct EMployee)


12  harsh 24 it  24
*/