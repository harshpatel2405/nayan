#include <stdio.h>

int main()
{
    // * If you are not providing size, then provide values.
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 4, 541, 56, 64, 654, 651, 6, 6, 6584};

    // * If you are providing size, then you have two options:

    //  *    1. Provide values
    int arr2[5] = {10, 20, 30, 40, 50};
    arr2[5] = 145;

    // printf("arr2[0] = %d\n", arr2[0]);
    // printf("arr2[1] = %d\n", arr2[1]);
    // printf("arr2[2] = %d\n", arr2[2]);
    // printf("arr2[3] = %d\n", arr2[3]);
    // printf("arr2[4] = %d\n", arr2[4]);
    // printf("arr2[5] = %d\n", arr2[5]);

    // * 2. Leave it as it is
    int arr3[5];

    // printf("Enter arr3[0] : ");
    // scanf("%d", &arr3[0]);
    // printf("Enter arr3[1] : ");
    // scanf("%d", &arr3[1]);
    // printf("Enter arr3[2] : ");
    // scanf("%d", &arr3[2]);
    // printf("Enter arr3[3] : ");
    // scanf("%d", &arr3[3]);
    // printf("Enter arr3[4] : ");
    // scanf("%d", &arr3[4]);

    // printf("arr3[0] = %d\n", arr3[0]);
    // printf("arr3[1] = %d\n", arr3[1]);
    // printf("arr3[2] = %d\n", arr3[2]);
    // printf("arr3[3] = %d\n", arr3[3]);
    // printf("arr3[4] = %d\n", arr3[4]);

    int n = 5;
    int arr4[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter arr4[%d] : ", i);
        scanf("%d", &arr4[i]);
    }

    for (int i = 0; i < n; i++)
    {
        // printf("\narr4[%d] = %d", i, arr4[i]);
        printf("%d\t", arr4[i]);
    }

    // *  sum
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr4[i];
    }
    printf("\nSum of Array Elements are %d\n\n", sum);

    for (int i = 0; i < n; i++)
    {
        if (arr4[i] % 2 == 0)
        {
            printf("%d\t", arr4[i]);
        }
    }
    // *  multiplication
    // * array odd elements sum
    // * array even elements sum

    return 0;
}