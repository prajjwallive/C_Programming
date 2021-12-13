#include <stdio.h>
void main()
{
    int a = 10, b = 5;
    int *p, *q;
    p = &a;
    q = &b;
    q = p;
    printf(" %d %d %d", a, *p, *q);
}