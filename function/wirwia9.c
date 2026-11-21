// * 9. Print Fibonacci series up to 10 terms.
/*
*  0 1 1 2 3 5 8 13 21 34 55

a = 0 b = 1  next = a + b
a = b b = next  next = a + b
*/

#include <stdio.h>

// * function declaration / prototype
void fibonaaciSeries();

int main()
{
    // * function calling
    fibonaaciSeries();
    return 0;
}

// * function definition
void fibonaaciSeries()
{
    int n;

    printf("Enter number of terms you want in fibonaaci series : ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int next;

    for (int i = 1; i <= n; i++)
    {
        printf("%d\t", a);
        next = a + b;
        a = b;
        b = next;
    }
}