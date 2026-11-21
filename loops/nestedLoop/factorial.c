// * Task  : find factorial of numbers between 1 to 10

#include <stdio.h>

int main()
{
    int n;
    for (int i = 1; i <= 10; i++)
    {
        n = i;
        int fact = 1;
        for (int j = n; j >= 1; j--)
        {
            fact *= j;
        }

        printf("%d! = %d\n", n, fact);
    }
    return 0;
}