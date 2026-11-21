// * With Return Type Without Arguments

#include <stdio.h>

// * function prototype and function declaration
int getSumTillTen(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{

    int n;
    printf("Enter value of n till you want to get the sum : ");
    scanf("%d", &n);
    // printf("Sum of 1 to %d is %d", n,getSumTillTen()); // * no arguments passed
    
    int ans = getSumTillTen(n);
    printf("Sum of 1 to %d is %d", n, ans);
    return 0;
}