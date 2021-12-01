/* write a c program to print the following pattern
 A B C D E
 A B C D
 A B C
 A B
 A
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        k = 65;
        for (j = 5; j >= i; j--)
        {
            printf(" %c", k);
            k++;
        }
        printf("\n");
    }
    getch();
}