// Write a C program to print the matrix multiplication
#include <stdio.h>
#include <conio.h>
void main()
{
    int mat1[3][3], mat2[3][3], result[3][3];
    int i, j, k, value;
    printf("Enter the first matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" enter the a[%d][%d] element :\n", i + 1, j + 1);
            scanf(" %d", &mat1[i][j]);
        }
        printf(" \n");
    }
    printf(" Enter the second matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" enter the a[%d][%d] element :\n", i + 1, j + 1);
            scanf(" %d", &mat2[i][j]);
        }
        printf(" \n");
    }
    // Matrix multiplication
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            value = 0;
            for (k = 0; k < 3; k++)
            {
                value = value + mat1[i][k] * mat2[k][j];
            }
            result[i][j] = value;
        }
    }

    // printing the output of the matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    getch();
}
