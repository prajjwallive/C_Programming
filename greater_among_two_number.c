// Program to find the greater number among two number using switch //
#include <stdio.h>
#include <conio.h>
void main(){
    int a, b;
    printf("Enter the two numbers \n ");
    scanf("%d %d",&a,&b);
    int c = a>b;
    switch (c){
        case 1:
        printf("The greatest number is %d\n", a);
        break;
        case 0:
        printf("The greatest number is %d\n", b);
        break;
        default:
        printf("they are equal");
    }
    getch();
}  
