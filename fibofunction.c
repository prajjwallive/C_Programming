// Print the fibonacci series for nth term by using recursive function
#include <conio.h>
#include <stdio.h>
void fibo(int f, int s, int n);
void main()
{
    int n;
    printf(" Enter the number of fibonacci series you want \n");
    scanf(" %d", &n);
    fibo(0, 1, n);
    getch();
}
void fibo(int f, int s, int n)
{
    int i, sum;
    printf(" The required fibonacci series is  %d %d", f, s);
    for (i = 1; i <= n-2; i++)
    {
        sum = f + s;
        printf(" %d", sum);
        f = s;
        s = sum;
    }
    getch();
}