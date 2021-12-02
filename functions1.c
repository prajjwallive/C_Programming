// Call by value and Call by refrence example
#include <stdio.h>
#include <conio.h>
void swap(int a, int b); // function prototype
void main()
{
    int x, y;
    printf("Enter the two values to be swapped:\n");
    scanf(" %d%d", &x, &y);
    printf(" The orignal value is %d %d", x, y);
    swap(x, y);
    refrence(&x, &y);
    printf(" \n The swapped value by reference is %d %d", x, y);
    getch();
}
void refrence(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\n The orignal value  swapped to %d %d", a, b);
}