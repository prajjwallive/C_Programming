#include <stdio.h>
void disp(char ch);
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
            disp(utc[count]);
        }
        printf("\n");
        count++;
    }
    return 0;
}
void disp(char ch)
{
    printf("%c \t", ch);
}