/*
pattern 8
1	1	1	1	1
2	2	2	2
3	3	3
4	4
5 
*/
#include <stdio.h>
int main(){
    int row, column,num,count;
    num =1;
    count =1;
    for( row=5;row>=num;row--){
        for (column = 1; column <=row; column++)
        {
            printf("%d \t",count);
        }
        printf("\n");
        count++;
    }
    return 0;
}