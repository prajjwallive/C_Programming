/* write a C program to print the following C pattern
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
 1 2 3 4 5 6
 */
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, counter;
    for (i = 1; i <= 6; i++)
    {
        counter = 1;
        for (j = 1; j <= i; j++)
        {
            printf(" %d", counter);
            counter++;
        }
        printf(" \n");
    }
    getch();
}