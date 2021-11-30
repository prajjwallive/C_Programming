// C program to make an Simple Calculator using Switch Statement //
#include <stdio.h>
#include <conio.h>
void main()
{
    int option;
    printf("Welcome to Simple Calculator Program\n");
    printf("Please press the following key for the respective operation \n");
    printf("\n1. Press 1 for Additin");
    printf("\n2. Press 2 for the subtraction");
    printf("\n3. Press 3 for the Multiplication");
    printf("\n4. Press 4 for the division\n");
    scanf(" %d", &option);
    int a, b;
    printf("\nEnter the value that you want to be operated\n");
    scanf(" %d%d", &a, &b);
    switch (option)
    {
    case 1:
        printf("%d + %d = %d", a, b, a + b);
        break;
    case 2:
        printf("%d-%d= %d", a, b, (a - b));
        break;
    case 3:
        printf("%dx%d=%d", a, b, (a * b));
        break;
    case 4:
        printf("%d/%d=%d", a, b, (a / b));
    default:
        printf("\nPlease choose the valid option");
        break;
    }

    getch();
}