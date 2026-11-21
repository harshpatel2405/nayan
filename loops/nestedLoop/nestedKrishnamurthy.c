
// Find krishnaurthy between 1 and 1000
// * loop for 1 to 1000
// 1. get digits (loop)
// 2. find factorial of digit (loop)
// 3. sum of factorial of digit

#include <stdio.h>

int main()
{

    int n;
    int sum;
    for (int i = 1; i <= 100000; i++)
    {
        n = i;
        int temp = n;
        sum = 0;
        while (n > 0)
        {
            int ld = n % 10;
            int fact = 1;
            for (int j = ld; j >= 1; j--)
            {
                fact *= j;
            }
            sum += fact;
            n /= 10;
        }

        if (sum == temp)
        {
            printf("%d\t", temp);
        }
    }

    return 0;
}