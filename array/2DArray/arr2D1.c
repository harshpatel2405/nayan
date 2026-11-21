#include <stdio.h>
#define r 3
#define c 3

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

    // * display - normal
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
        printf("\n");
    }

    // * display - matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // * sum , multiplication - matrix
    int sum = 0;
    int mul = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j]; // * sum += i   ==> sum = sum + i
            mul *= arr[i][j];
        }
    }

    printf("Sum of All Array Elements is %d", sum);
    return 0;
}