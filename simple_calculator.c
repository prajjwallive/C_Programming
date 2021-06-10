// Demo project for simple calculator using C programm switch statement //
#include <stdio.h>
#include <conio.h>
void main(){
    float a=0,b=0;
    int c;
    printf("..............................Welcome to Simple Calculator...............................................\n");
    printf("Enter the first number  for calculation\n");
    scanf("%f",&a);
    printf("Enter a Second number for calculation \n");
    scanf("%f",&b);
    printf("............................Select the Operation to  be performed...............\n");
    printf(" 1.Option 1 for Multiplication\n");
    printf(" 2.Option 2 for Divide\n");
    printf(" 3.Option 3 for Addition\n");
    printf(" 4.Option 4 for Subtraction\n");
    scanf("%d",&c);
    switch (c){
        case 1:
        printf(" %.2f x %.2f = %.3f",a,b,a*b);
        break;
        case 2:
        printf(" %.2f / %.2f = %.3f",a,b,a/b);
        break;
        case 3:
        printf(" %.2f + %.2f = %.3f",a,b,a+b);
        break;
        case 4:
        printf(" %.2f - %.2f = %.3f",a,b,a-b);
        break;
        default:
        printf("Please choose the valid option");
        break;
    }
   getch();
}
