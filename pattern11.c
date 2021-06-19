/*
pattern 11

PROGRAMMING
PROGRAMMIN
PROGRAMMI
PROGRAMM
PROGRAM
PROGRA
PROGR
PROG
PRO
PR
P 
*/
#include <stdio.h>
int main()
{
    int row, column, num;
    char count[] = {"PROGRAMMING"};
    num = 1;
    for (row = 11; row >= num; row--)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%c",count[column-1]);
        }
        printf("\n");
    }

    return 0;
}