#include <stdio.h>

// * for compiler to know a function with this declaration will come
// * function declaration / prototype / signature
void additionFunction(); // & no no
void subtraction();      // & no no

int main()
{
    additionFunction();
    subtraction();
    return 0;
}

// ^ function definition
void additionFunction()
{
    int a, b;

    printf("Enter a and b : ");
    scanf("%d%d", &a, &b);
    int addition = a + b;
    printf("Addition of %d and %d is %d\n\n", a, b, addition);
}

void subtraction()
{
    int a, b;

    printf("Enter a and b : ");
    scanf("%d%d", &a, &b);
    int subtraction = a - b;
    printf("Subtraction of %d and %d is %d", a, b, subtraction);
}
