#include <stdio.h>

// 123 -> 321
int main()
{
    int n;
    int rev = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        int ld = n % 10;
        printf("rev = %d * 10 + %d = ", rev, ld);
        rev = rev * 10 + ld;
        printf("%d\n", rev);
        n /= 10;
    }

    return 0;
}