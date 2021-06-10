/* b. An electricity board charges according to the following rates
For the first 100 units --- Rs 40 Per Unit
For the next 200 units --- Rs 50 Per Unit
For the next 300 units --- Rs 60 Per Unit
All users are also charge meter charge, which is equal to Rs 50. Write a program to read number of units consumed and print out the total charges. */
#include <stdio.h>
#include <conio.h>
int main(){
    float unit, cost;
    printf("Enter your meter unit \n");
    scanf("%f", &unit);
    if(unit <=100){
        cost = 40 * unit ;
    }
    else if(unit <=300 && unit >100){
        cost = 4000+((unit - 100)*50);
    }
    else if(unit <=600 && unit >200){
        cost = 4000 + 10000 +((unit - 300)*60);
    }
    else
    {
        printf("Please enter the valid parameter");
    }
    printf("The total cost is Rs %.3f \n", cost);
    printf("The Grand total is  Rs %.3f", (cost + 50));
    getch();
    return 0;
}