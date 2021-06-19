/*
pattern 9
5	5	5	5	5
4	4	4	4
3	3	3
2	2
1
*/
#include <stdio.h>
int main()
{
    int row, column, num, count;
    num = 1;
    count = 5;
    for (row = 5; row >= num; row--)
    {    
        for (column = 1; column <= row; column++)
        {
            printf("%d \t", count);
        }
        count--;
        printf("\n");
    }
    return 0;
}