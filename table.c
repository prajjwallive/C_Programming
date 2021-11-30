// Write a C program to print the Multiplication table of the given number
#include <stdio.h>
#include <conio.h>

void main()
{
    int number, i = 1;
    printf("Enter the number to find the multiplication table\n");
    scanf(" %d", &number);
    while (i <= 10)
    {
        printf("\n %d x %d = %d", number, i, number * i);
        i++;
    }
    getch();
}