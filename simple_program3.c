// Check a number is prime or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, counter;
    counter = 0;
    printf(" Enter the number \n");
    scanf(" %d", &n);
    for (i = 2; i < (n - 1); i++)
    {
        if (n % i == 0)
        {
            counter++;
        }
    }
    if (counter > 0)
    {
        printf(" The number is not prime \n");
    }
    else
    {
        printf(" The number is  prime \n");
    }
    getch();
}