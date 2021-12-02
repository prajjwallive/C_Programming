/* Write a program to list the marks of n studeents in C in Descending order using DMA. Find the third highest and second lowest marks.
 */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    float *marks, temp;
    int n, i, j;
    printf(" How many marks?\n");
    scanf(" %d", &n);
    marks = (float *)malloc(n * sizeof(float));
    printf(" Enter %d marks \n", n);
    for (i = 0; i < n; i++)
    {
        printf("marks %d:", i + 1);
        scanf(" %f", marks + i);
    }
    // Shorting in Descending order
    for (i = 0; i < n; i++)
    {
        for (j = (i + 1); j < n; j++)
        {
            if (marks[i] < marks[j])
            {
                temp = marks[j];
                marks[j] = marks[i];
                marks[i] = temp;
            }
        }
    }
    printf(" \n The list of the marks of N students in Descending order is \n ");
    for (i = 0; i < n; i++)
    {
        printf(" %.2f \n", marks[i]);
    }
    printf(" The Third Highest number is \n %.2f", marks[2]);
    printf(" \n  The third lowest marks is \n %.2f", marks[n - 3]);

    getch();
}