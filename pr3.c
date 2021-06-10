// Write a program to check whether the given number is even or odd using if-else statement//
#include <stdio.h>
#include <conio.h>
int main(){
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%2 ==0){
        printf("The given number is even");
    }
    else{
        printf("The given number is odd");
    }
    getch();
    return 0;
}