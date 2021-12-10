// write a program to input two matrices and add them
#include <stdio.h>
#include <conio.h>
void main()
{
    int mat1[3][3], mat2[3][3], result[3][3];
    int i, j;
    printf(" Enter the first matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" enter the a[%d][%d] element :\n", i+1, j+1);
            scanf(" %d", &mat1[i][j]);
        }
        printf(" \n");
    }
    printf(" Enter the second matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" enter the a[%d][%d] element :\n", i+1, j+1);
            scanf(" %d", &mat2[i][j]);
        }
        printf(" \n");
    }
    // adding two matrices
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
        printf(" \n");
    }

    printf(" The sum of two matrices is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("  %d", 
            result[i][j]);
        }
        printf("\n");
    }

    getch();
}