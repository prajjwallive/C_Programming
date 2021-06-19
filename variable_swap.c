// swapping the content of two vairable //
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c = 0;
    printf("Enter two variables \n");
    scanf("%c %c", &a, &b);
    switch (a != b)
    {
    case 1:
        c = a;
        a = b;
        b = c;
        printf("The swapped variable are %c %c", a, b);
        break;
    default:
        printf("they are equal no need to swap");
        break;
        
    }
    
}