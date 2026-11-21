#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    } // * back condition

    return n * factorial(n-1);
}

int main()
{
    int ans = factorial(5);
    printf("Factorial of 5 is %d", ans);
    return 0;
}