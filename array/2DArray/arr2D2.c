#include <stdio.h>
#define r 3
#define c 3
/*
1   2   3   6
4   5   6   15
7   8   9   24
12  15  18

*/

int main()
{
    int arr[r][c];

    // * input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        } // * columns
        printf("\n");
    } // * rows

    // * row sum
    for (int i = 0; i < r; i++)
    {
        int sumR = 0;
        for (int j = 0; j < c; j++)
        {
            sumR += arr[i][j];
        }
        printf("Row %d sum  = %d", i, sumR);
        printf("\n");
    }
    // * column sum
    for (int i = 0; i < r; i++)
    {
        int sumC = 0;
        for (int j = 0; j < c; j++)
        {
            sumC += arr[j][i];
        }
        printf("column %d sum  = %d", i, sumC);
        printf("\n");
    }

    return 0;
}