// Sum of first  n natural numbers , odd numbers , even numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, sum, n;
    sum = 0;
    printf(" Enter the nth term of the number \n");
    scanf(" %d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    printf(" The sum of first %d odd numbers is : %d", n, sum);
    getch();
}