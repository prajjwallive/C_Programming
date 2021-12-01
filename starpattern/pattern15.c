/* write a C program to print the following pattern
 A
 B B
 C C C
 D D D D
 E E E E E
 */
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k = 65;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %c", k);
        }
        printf("\n");
        k++;
    }
    getch();
}