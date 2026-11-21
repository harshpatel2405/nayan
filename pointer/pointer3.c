#include <stdio.h>

int main()
{
    int *p, *q;
    int a = 45, b = 90;

    p = &a;
    q = &b;

    printf("Before ::\tA : %d   B : %d\n", *p, *q);
    int temp = *p;
    *p = *q;
    *q = temp;

    printf("After ::\tA : %d   B : %d", *p, *q);
    return 0;
}