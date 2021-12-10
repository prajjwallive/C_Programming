// Sum of Natural Numbers from 1 to n
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, sum;
    sum = 0;
    printf(" Enter the n th term of the natural number \n");
    scanf(" %d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf(" The sum of natural number is %d ", sum);
    getch();
}