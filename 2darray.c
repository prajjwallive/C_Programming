// Write a program  to input and display 2D array transpose
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, r, c;
    int arr[10][10];
    printf("Enter the no of rows of matrics \n");
    scanf(" %d", &r);
    printf(" Enter the no of columns of matrics \n");
    scanf(" %d", &c);
    printf("Enter the 2D matrix:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("for position [%d][%d] \n", i + 1, j + 1);
            scanf(" %d", &arr[i][j]);
        }
    }
    printf(" The inputted matrix transpose is \n");
    for (j = 0; j < c; j++)
    {
        for (i = 0; i < r; i++)
        {
            printf(" %d", arr[i][j]);
        }
        printf(" \n");
    }

    getch();
}