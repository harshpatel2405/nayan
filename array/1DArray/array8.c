//  * remove element left shift
/*
 *  0  1  2  3  4
 * 10 20 30 40 50
 * 10 30 40 50
 *
 * arr[5] = arr[4]
 *
 * position        <=n
 */

#include <stdio.h>

int main()
{
    int position;
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

    printf("Enter index at which you want to add the value : ");
    scanf("%d", &position);

    //* Display
    printf("Array Before removing element at %d index ::\t", position);
    for (int i = 0; i < n; i++)
    {
        // printf("\narr4[%d] = %d", i, arr4[i]);
        printf("%d\t", arr[i]);
    }

    for (int i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
    //* Display
    printf("\nArray After removing element at %d index ::\t", position);
    for (int i = 0; i < n; i++)
    {
        // printf("\narr4[%d] = %d", i, arr4[i]);
        printf("%d\t", arr[i]);
    }

    return 0;
}