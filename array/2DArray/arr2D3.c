#include <stdio.h>
#define r 3
#define c 3
/*


r == c
n * n  n = 3
1 2 3
4 5 6
7 8 9

* Primary --   1(00)  5(11)  9(22)  i and j are same
* Secondary -- 3(02)  5(11)  7(20)  i + j == n-1
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

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    printf("%d\t", arr[i][j]);
                }
                else if (i + j == r - 1)
                {
                    printf("%d\t", arr[i][j]);
                }
                else
                {
                    printf("\t");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("To get Diagonal elements matrix should be sqaure matrix only");
    }
    return 0;
}