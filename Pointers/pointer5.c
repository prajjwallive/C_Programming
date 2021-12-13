// Pointer Arthematic (Subtraction)
#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 5, 6, 7};
    int *p;
    p = &arr[5];
    int *q;
    q = &arr[0];
    printf(" %d ", p - q);
}