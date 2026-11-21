#include <stdio.h>

int main()
{
    int *p; // * declaration part
    int a = 10, b = 9;

    p = &a;

    a = 20;

    printf("A : %d\n", a);   // * 20
    printf("&a : %u\n", &a); // * 1500
    printf("p : %u\n", p);   // * 1500
    printf("*p : %d\n", *p); // * 20 -- accessing the value at the address stored in p
    printf("&p : %u\n", &p);
    return 0;
}