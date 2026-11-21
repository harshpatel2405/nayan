// 145 = 1! + 4! + 5! = 145

// 1. get digits (loop)
// 2. find factorial of digit (loop)
// 3. sum of factorial of digit

#include <stdio.h>

int main()
{

    int n = 145;
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        printf("%d! = ", ld);

        int fact = 1;
        for (int j = ld; j >= 1; j--)
        {
            fact *= j;
        }
        printf("%d\n", fact);

        printf("Sum = %d + %d = ", sum, fact);
        sum += fact;
        printf("%d\n\n", sum);
        n /= 10;
    }

    if (sum == temp)
    {
        printf("%d is strong number", temp);
    }
    else
    {
        printf("%d is not strong number", temp);
    }

    return 0;
}