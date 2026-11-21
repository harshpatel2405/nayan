//  * add element right shift
/*
 *  0  1  2  3  4  5
 * 10 20 30 40 50  G
 * 10 20 95 30 40 50
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
    int value;

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

    printf("Enter value you want to add at %d index : ", position);
    scanf("%d", &value);

    //* Display
    printf("Array Before Entering element at %d index ::\t", position);
    for (int i = 0; i < n; i++)
    {
        // printf("\narr4[%d] = %d", i, arr4[i]);
        printf("%d\t", arr[i]);
    }

    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    n++;
    //* Display
    printf("\nArray After Entering element at %d index ::\t", position);
    for (int i = 0; i < n; i++)
    {
        // printf("\narr4[%d] = %d", i, arr4[i]);
        printf("%d\t", arr[i]);
    }

    return 0;
}