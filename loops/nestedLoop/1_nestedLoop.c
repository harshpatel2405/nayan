#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        printf("I : %d\tJ : ", i);
        for (j = 1; j <= 3; j++)
        {
            printf("%d, ", j);
        } // inner temple
        printf("\n");
    } // outer temple
    return 0;
}