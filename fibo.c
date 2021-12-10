// write a program to print the fibonacci series upto nth term;
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i;
    printf("Enter the n term of fibonacci series\n");
    scanf(" %d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d \t", fibo(i));
    }
    getch();
}
int fibo(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }
}