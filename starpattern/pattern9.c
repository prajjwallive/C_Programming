/* Write a C program to print the following pattern
    *
   ***
  *****
 *******
*********
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k, space;
    k = 1;
    for (i = 1; i <= 5; i++)
    {
        for (space = 1; space <= (5 - i); space++)
        {
            printf(" ");
        }
        for (j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        k += 2;
    }
    getch();
}