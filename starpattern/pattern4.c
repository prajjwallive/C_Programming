/* Write a C program to print following pattern
 *
 *  *
 *  *  *
 *  *
 *
 */

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            if ((i + j) <= 5)
            {
                printf("   ");
            }
            else
            {
                printf(" * ");
            }
        }
        printf(" \n");
    }
    getch();
}