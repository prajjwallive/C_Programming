// Write a program to find the sum of n natural number using recursive function
#include <stdio.h>
#include <conio.h>

int sum(int x);

void main()
{
    int n, result;
    printf("Enter the Nth term of number to find the sum upto\n");
    scanf(" %d", &n);
    result = sum(n);
    printf("\nthe sum of the %d natural number is %d", n, result);
    getch();
}

int sum(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        return (x + sum(x - 1));
    }
}