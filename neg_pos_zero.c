//  Check wheather the given number is negative postive or zero 
#include <stdio.h>
#include <conio.h>
void main(){
    int a,c;
    printf("Enter any number \n");
    scanf("%d",&a);
    if(a>0){
         c=1;
    }
    if(a<0){
        c = 0;
    }
    switch (c)
    {
     case 1:
     printf("The number is postive");
     break;
     case 0:
     printf("The number is negative");
     break;
    default:
     printf("the number is zero");
    break;
    }
    getch();
}