// Check wheather the given character is uppercase, lowercase,digit,whitespace or special symbol
#include <stdio.h>
#include <conio.h>
void main()
{
    char a;
    int c;
    printf("Enter any keyword \n");
    scanf("%c", &a);
    printf("%d \n", a);
    if (a >= 48 && a <= 58)
    {
        c = 1;
    }
    else if (a >= 97 && a <= 122)
    {
        c = 2;
    }
    else if (a >= 65 && a >= 90)
    {
        c = 3;
    }
    else if ((a>32 && a<=47) || (a>58 && a<=64) || (a>91 && a<=96) || (a>123 && a<=126))
    {
        c = 5;
    }
    else
    {
        c = 4 ;
    }
    switch (c)
    {
    case 1:
        printf("Digit");
        break;
    case 2:
        printf("lowercase");
        break;
    case 3:
        printf("Uppercase");
        break;
    case 4:
        printf("White space");
        break;

    case 5:
        printf("special character");
        break;
    }
}