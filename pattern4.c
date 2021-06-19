/*
pattern 4 
1
2	3
4	5	6
7	8	9	10
11	12	13	14	15
*/
#include <stdio.h>
int main()
{
    int row, column, num, count;
    num = 5;
    count = 1;
    for (row = 1; row <= num; row++)
    {
        for (column = 1; column <= row; column++)
        {
            printf("%d \t", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}