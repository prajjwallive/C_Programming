// Write a C program to print the given number in accending order //
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[12] = {1, 4, 6, 3, 6, 7, 8, 3, 5, 9, 11, 0};
    int i, j, temp;
    for (i = 0; i <= 12 ; i++)
    {
        for (j = (i + 1); j < 12; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n The numbers in accending order is :");
    for (i = 0; i < 12; i++)
    {
        printf("%d  ", arr[i]);
    }
    getch();
}