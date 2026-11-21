// * With Return Type Without Arguments

#include <stdio.h>

// * function prototype and function declaration
int getSumTillTen()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    // printf("Sum of 1 to 10 is %d", getSumTillTen()); // * no arguments passed

    int ans = getSumTillTen();

    printf("Sum of 1 to 10 is %d", ans);
    return 0;
}