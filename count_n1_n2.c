//List the even numbers from n1 and n2. Also count them.
#include <stdio.h>
#include <conio.h>
int main(){
    int n1, n2, counter=0;
    printf("Enter n1\n");
    scanf(" %d",&n1);
    printf("enter n2 \n");
    scanf(" %d",&n2);
    for(n1; n1<=n2; n1++){
       if( (n1 % 2)==0){
           printf(" %d \t",n1);
           counter++;
       }
    } 
    printf("\nThe total even numbers are: %d",counter);
    getch();
}