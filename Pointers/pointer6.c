// pre increment pointers p++
#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int *p;
    p = arr;
    printf(" %d", *p++);
    printf("\n %d", *p);
}