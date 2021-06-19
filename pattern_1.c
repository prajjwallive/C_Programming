/* Pattern 1
1
1	1
1	1	1
1	1	1	1
1	1	1	1	1
*/
#include <stdio.h>
void main()
{
    int row, column,num,count;
    num =5;
    for (row = 1; row <=num; row++)
    {        
        count=1;
        for (column = 1; column <= row; column++)
        {
            printf("%d\t ", count);
        }
        printf("\n");
    }
}