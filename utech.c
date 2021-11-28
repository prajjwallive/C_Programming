/*
pattern 3
U
T T
E E E
C C C C
H H H H H*/
#include <stdio.h>
int main()
{
    int row, column, num, count;
    num = 5;
    count = 0;
    char utc[5] = {'U', 'T', 'E', 'C', 'H'};
    for (row = 1; row <= num; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%c \t", utc[count]);
        }
        printf("\n");
        count++;
    }
    return 0;
}