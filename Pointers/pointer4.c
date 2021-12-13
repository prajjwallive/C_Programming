// pointer arthemetic (Addition)
#include <stdio.h>
void main()
{
    int arr[] = {2,3,4,6};
    int *p;
    p = &arr[0];
    p += 2;
    printf(" %d \n", *p);
}