/* Write a program to print the following pattern
*********
 *******
  *****
   ***
    *
    */
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k, space;
    k = 9;
    for (i = 1; i <= 5; i++)
    {
        for (space = 5; space > (6 - i); space--)
        {
            printf(" ");
        }
        for (j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        k -= 2;
    }
    getch();
}