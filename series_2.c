//Find the sum of the series: 1 + 1/2^2 + 1/1/3^2 ... up to n terms
#include <stdio.h>
#include <conio.h>
int main(){
    float i,n,sum=0;
    printf("Enter the nth term for the series  .... n \n");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        printf("1/%.f\t+",((i*i)));
        sum+= (1/(i*i));
    }
    printf("\nThe sum of the series is %f",sum);
    getch();
    return 0;
}