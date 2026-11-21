#include <stdio.h>
// 123 -> 3 2 1
/*

*/

int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        int lastDigit = n % 10;
        // printf("lastDigit = %d modulus 10 = %d\n", n, n%10);
        printf("%d\t", lastDigit);
        n = n / 10;
    }

    return 0;
}