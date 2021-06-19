/* 
pattern 5
A
A	B
A	B	C
A	B	C	D
A	B	C	D	E
*/
#include <stdio.h>
int main(){
    int row, column,num,count;
    num=5;
    for (row = 1; row<=num; row++)
    {    
        count =65;
        for (column=1; column<=row;column++)
        {
            printf("%c \t",count);
            count++;
        }
        printf("\n");
    }
    
    return 0;
}