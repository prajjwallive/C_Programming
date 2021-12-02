// Print the Fibonacci series upto nth term
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, first = 0, second = 1, i, sum;

    printf(" Enter the number of the terms for the fibonacci series \n :");
    scanf(" %d", &n);
    printf(" The required series is %d %d", first, second);
    for (i = 1; i <= n-2; i++)
    {
        sum = first + second;
        printf(" %d", sum);
        first = second;
        second = sum;
        }
    getch();
}