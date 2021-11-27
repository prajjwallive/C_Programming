// wrtie a program to find the Greatest common divisor using function //
#include <stdio.h>
#include <conio.h>
int gcd(int a, int b);
int main()
{
    int a, b, hcf;
    printf(" Enter two number to find the GCD\n:");
    scanf("%d%d", &a, &b);
    hcf = gcd(a, b);
    printf(" \n The Greatest common divisior of the two number is %d ", hcf);
    return 0;
    getch();
}
int gcd(int a, int b)
{
    int temp, i, hcf;
    if (a > b)
        ;
    {
        temp = a;
        a = b;
        b = temp;
    }
    for (i = a; i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
            break;
        }
    }
    return hcf;
}