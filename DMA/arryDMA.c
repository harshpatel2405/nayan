#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter size : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); // * address

    for (int i = 0; i < n; i++)
    {
        printf("enter arr[%d] : ", i);
        scanf("%d", &(*(ptr + i)));
    }

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] : %d\n", i, (*(ptr + i)));
    }

    free(ptr);

    return 0;
}