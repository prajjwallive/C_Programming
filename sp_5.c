// PRogram to print the reverse of the program
#include <stdio.h>
#include <conio.h>
void main()
{
    int num, rev = 0, rem;
    printf(" Enter the number \n");
    scanf(" %d", &num);
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf(" Reversed number = %d", rev);
    getch();
}