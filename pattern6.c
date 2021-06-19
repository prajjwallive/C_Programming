/*
pattern 6
A
B	C
D	E	F
G	H	I	J
K	L	M	N	O
*/
#include <stdio.h>
int main()
{
    int row, column, num, count;
    num = 5;
    count =65;
    for (row = 1; row <= num; row++)
    {
        for( column =1 ; column<=row; column++){
         printf("%c \t",count);
         count++;
        }
        printf("\n");
    }
    return 0;
}