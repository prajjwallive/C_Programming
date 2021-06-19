//Find the sum of the series: 1 + 4 + 9 ... up to n terms
#include <stdio.h>
#include <conio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the nth term for the series 1 + 4 + 9 .... n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\t+",(i*i));
        sum+= (i *i);
    }
    printf("\nThe sum of the series is %d",sum);
    getch();
    return 0;
}