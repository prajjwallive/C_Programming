/* Program to print pattern 2 in reverse
 *  *  *  *  *
 *  *  *  *
 *  *  *
 *  *
 *             */
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
    getch();
}