#include <stdio.h>

int main()
{
    int **p;
    int *q;
    int a = 15;

    q = &a;

    p = &q;

    printf("A : %d\n", a);     // * 15
    printf("&a : %u\n", &a);   // * 1500
    printf("q : %u\n", q);     // * 1500
    printf("*q : %d\n", *q);   // * 15
    printf("&q : %u\n", &q);   // * 1504
    printf("p : %u\n", p);     // * 1504
    printf("*p : %u\n", *p);   // * 1500
    printf("**p : %d\n", **p); // * 15
    printf("&p : %u", &p);     // * 1508
    return 0;
}