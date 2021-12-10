// write a program to find the sum of natural numbers using the recursive function
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, sum;
    printf("Enter the n number of the natural number\n");
    scanf(" %d", &n);
    sum = naturalsum(n);
    printf(" The sum of natural number is %d ", sum);
    getch();
}

// using recursive function here
int naturalsum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + naturalsum(n - 1);
    }
}