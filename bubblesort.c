// Write a program to print the arrange the given list of number in assending order
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10], i, j, temp;
    printf("Enter the random number upto 10 chracters.\n");
    for (i = 0; i < 10; i++)
    {
        scanf(" %d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = (i + 1); j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf(" The number in accending order is :\n");
    for (i = 0; i < 10; i++)
    {
        printf(" %d \t", arr[i]);
    }

    getch();
}