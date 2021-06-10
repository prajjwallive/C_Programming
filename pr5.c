// Write a Program to determine in which quadrant a given point lies/
#include <stdio.h>
#include <conio.h>
int main(){
    int x,y;
    printf("Enter the coordinates(x,y)? \n");
    scanf("%d %d",&x,&y);
    if(x>0){
        if(y>0){
            printf("It lies in I quadrant");
        }

    }
    if(x<0){
        if(y>0){
            printf("It lies in II quadrant");
        }
    }

    if(x<0){
        if(y<0){
            printf("It lies in III quadrant");
        }
    }

    if(x>0){
        if(y<0){
            printf("It lies in IV quadrant");
        }
    }
    if(x ==0 || y ==0){
        printf("The coordinates lies in Axis");
    }
    getch();
    return 0;
}