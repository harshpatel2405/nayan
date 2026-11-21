/*
 *       *      *
 *       **    **
 *       ***  ***
 *       ********
 *       ********
 *       ***  ***
 *       **    **
 *       *      *
 */

#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // * left stars
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        // * space
        for (int k = 1; k <= (n - i); k++)
        {
            printf("  ");
        }
        // * right stars
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n ; i >= 1; i--)
    {
        // * left stars
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        // * space
        for (int k = 1; k <= (n - i); k++)
        {
            printf("  ");
        }
        // * right stars
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}