#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter size : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); // * address

    // printf("%d", *ptr);
    // *ptr = 456; // * value
    for (int i = 0; i < 3; i++)
    {
        printf("enter arr[%d] : ", i);
        scanf("%d", &(*(ptr + i)));
    }

    for (int i = 0; i < 3; i++)
    {
        printf("arr[%d] : %d\n", i, (*(ptr + i)));
    }

    ptr = realloc(ptr, 3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("enter arr[%d] : ", i);
        scanf("%d", &(*(ptr + i)));
    }

    for (int i = 0; i < 3; i++)
    {
        printf("arr[%d] : %d\n", i, (*(ptr + i)));
    }
    // printf("\n%d", *(ptr + 3));

    return 0;
}