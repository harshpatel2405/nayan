/*
^ Pattern 1 : Filled Square
& row - 5 , column - 4

1 2 3 4
* * * *  -> row 1
* * * *  -> row 2
* * * *  -> row 3
* * * *  -> row 4

*/

#include <stdio.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}