// write a C program to find the factorial of number using recursive function
#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf(" Enter the n number for the factorial\a \n");
    scanf(" %d", &n);
    printf(" The factorial of the given number is %d", fact(n));
    getch();
}
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}