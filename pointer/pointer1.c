#include <stdio.h>

int main()
{
    int *p; // * declaration part
    int a = 10;

    p = &a;

    printf("A : %d\n", a);   // * 10
    printf("&a : %u\n", &a); // * 1500
    printf("p : %u\n", p);   // * 1500
    printf("*p : %d\n", *p); // * 10 -- accessing the value at the address stored in p
    return 0;
}