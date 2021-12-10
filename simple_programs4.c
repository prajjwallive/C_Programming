// List down the first n prime numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, j, counter;
    printf("Enter the n the term of the number \n");
    scanf(" %d", &n);
    for (i = 2; i <= n; i++)
    {
        counter = 1;
        for (j = 2; j < i / 2; j++)
        {
            if ((i % j) == 0)
            {
                counter = 0;
            }
        }
        if (counter == 1)
        {
            printf(" %d", i);
        }
    }
    getch();
}