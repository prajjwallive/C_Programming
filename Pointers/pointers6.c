// Printing the list of numbers using the decrement pointer ( Arthemethic pointers)
#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *p;
    p = &arr[7];
    int i;
    for (i = 0; i <= 7; i++, p--)
    {
        printf(" %d \t ", *p);
    }
}