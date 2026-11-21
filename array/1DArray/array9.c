//* Left rotate array
/*
 * n = 6
 * 0  1  2  3  4  5
 * 10 20 30 40 50 60       2
 * 20 30 40 50 60 10
 * 30 40 50 60 10 20

*/

#include <stdio.h>

int main()
{
    int k;
    int n;

    printf("Enter value of n : ");
    scanf("%d", &n);

    int arr[n];

    // * input
    for (int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("How many times you want to left rotate : ");
    scanf("%d", &k);

    //* Display
    printf("\nArray Before rotating element :: ");
    for (int i = 0; i < n; i++)
    {
        // printf("\narr4[%d] = %d", i, arr4[i]);
        printf("%d\t", arr[i]);
    }

    for (int i = 1; i <= k; i++)
    {
        printf("\nPass %d : ", i);
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
        for (int i = 0; i < n; i++)
        {
            // printf("\narr4[%d] = %d", i, arr4[i]);
            printf("%d\t", arr[i]);
        }
    }
    //* Display
    printf("\nArray After rotating element :: ");
    for (int i = 0; i < n; i++)
    {
        // printf("\narr4[%d] = %d", i, arr4[i]);
        printf("%d\t", arr[i]);
    }

    return 0;
}