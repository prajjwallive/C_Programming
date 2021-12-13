// starting with pointers
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    int *p, *q;
    i = 10;
    j = 20;
    p = &i;
    q = &j;
    printf(" %d is the address of i \n %d is the address j \n", p, q);
    printf(" i = %d \n j = %d \n", *p, *q);
    getch();
}