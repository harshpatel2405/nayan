#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;

    printf("Enter size : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); // * address

    printf("%d", *ptr);
    *ptr = 456; // * value
    printf("\n%d", *ptr);

    free(ptr);
    return 0;
}