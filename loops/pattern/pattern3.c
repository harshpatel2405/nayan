/*
^ Pattern 3 : Upper Triangular

1 2 3 4 5
    *       -> row 1 -> space - 4  (5-1)  (n-i)
   * *      -> row 2 -> space - 3  (5-2)
  * * *     -> row 3 -> space - 2  (5-3)
 * * * *    -> row 4 -> space - 1  (5-4)
* * * * *   -> row 5 -> space - 0  (5-5)

*/

#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        //* space
        for (int k = 1; k <= (n - i); k++)
        {
            printf(" ");
        }

        // * stars
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}