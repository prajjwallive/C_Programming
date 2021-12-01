/* write a program to print the following pattern
 A
 A B
 A B C
 A B C D
 A B C D E
 */
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        k = 65;
        for (j = 1; j <= i; j++)
        {
            printf(" %c", k);
            k++;
        }
        printf("\n");
    }
    getch();
}