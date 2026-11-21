/*
 * Recursion - function calling itself (behaviour like loop)
 * recursion needs a back condition to stop infinite behaviour
 */

#include <stdio.h>

void demo(int n)
{
    printf("Hello , This is Demo Function\n");
    if(n == 1)
    {
        return ;
    }
    demo(n-1);
}

int main()
{
    demo(4);
    return 0;
}