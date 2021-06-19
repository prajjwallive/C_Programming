/*
pattern 3
1
2	2
3	3	3
4	4	4	4
5	5	5	5	5 */
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
        }
        printf("\n");
        count++;
    }
    return 0;
}