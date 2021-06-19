/*
pattern 2
1
1	2
1	2	3
1	2	3	4
1	2	3	4	5 */
#include <stdio.h>
int main()
{
    int row, column, num, count;
    num = 5;
    for (row = 1; row <= num; row++)
    {     
        count =1;
        for (column = 1; column <= row; column++)
        {
            printf("%d \t",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}