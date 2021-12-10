// write a program to print the following sequence 1^1 .. 2^2... 3^3...4^4....5^5....n.^n
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, disp, n, temp;
    printf(" Enter the nth term of the sequence ......\n");
    scanf(" %d", &n);
    for (i = 1; i <= n; i++)
    {
        disp = 1;
        for (j = 1; j <= i; j++)
        {
            temp = i;
            disp = disp * temp;
        }
        printf(" %d \t", disp);
    }
    getch();
}