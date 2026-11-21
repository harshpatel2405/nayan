#include <stdio.h>

int main()
{
    int i, j;
    int n;
    int count;
    int sp = 10, ep = 500;

    for (j = sp; j <= ep; j++)
    {
        n = j;
        count = 0;
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
                count++;
        }
       
        if (count == 2)
            printf("%d\t", n);
    }
    return 0;
}