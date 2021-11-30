// Write a program to find the factorial of an number using recursive function
#include <stdio.h>
#include <conio.h>
int fact(int n);
void main()
{
    int n, ans=0;
    printf("\n Enter the number to find out the factorial of number:");
    scanf(" %d", &n);
    ans = fact(n);
    printf("\n The Factorial of the number is %d", ans);
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