//Printing the sequence of the number
#include <stdio.h>
#include <conio.h>
void main(){
    int n, i;
    printf("Enter the nth term for the sequence \n");
    scanf(" %d", &n);
    for(i=1;i<=n;i++){
     printf("%d \t ",i);
    }
}