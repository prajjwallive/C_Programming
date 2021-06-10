#include <stdio.h>
#include <conio.h>
void main(){
    int a,b,c,d=0;
    printf("Enter a number \n");
    scanf(" %d",&a);
    for(b=1;b<=a;b++){
        c = a % b;
        if(c == 0){
            d++;
        }
    }
    if(d==1){
      printf("the number is neither prime nor composite");
    }
    else if(d==2){
        printf("the number is prime");
    }
    else{
        printf("The number is not prime");
    }
}