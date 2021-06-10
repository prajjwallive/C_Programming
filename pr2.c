//  Write a program to check whether the given number is negative positive or zero using if statement.//
#include <stdio.h>
#include <conio.h>
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a>0){
        printf("The number is positive\n");
    }
    if(a<0){
        printf("the number is negative");
    }
    if(a==0){
        printf("The number is zero");
    }
    getch();
    return 0;
}