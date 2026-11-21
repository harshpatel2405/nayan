/*
^ Pattern 4 : Right Aligned Right Angle triangle

1 2 3 4 5
        *       -> row 1 -> space - 8
      * *      -> row 2 -> space - 6 
    * * *     -> row 3 -> space - 4  
  * * * *    -> row 4 -> space - 2 
* * * * *   -> row 5 -> space - 0  

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
            printf("  ");
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