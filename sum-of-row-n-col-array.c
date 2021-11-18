#include <stdio.h>

int main()
{
    int m,n;       //Row Column Declaration
    printf("Enter the number of rows and column\n");
    scanf("%d %d",&m,&n);    //Row Column Initialization
    int arr[m][n];   //Matrix Declaration
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<m;i++)     //Matrix Initialization
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nElements in the matrix are \n");
    for(int i=0;i<m;i++)     //Print Matrix
   {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nRow Sum....\n");
    for(int i=0;i<m;i++)   
    {
        int rsum=0;
        for(int j=0;j<n;j++)
        {
            rsum=rsum+arr[i][j];
        }
        printf("\nSum of all the elements in row %d is %d\n",i,rsum);
    }
    printf("\nColumn Sum....\n");
    for(int i=0;i<m;i++)
    {
        int csum=0;
        for(int j=0;j<n;j++)
        {
            csum=csum+arr[j][i];
        }
        printf("\nSum of all the elements in column %d is %d\n",i,csum);
    }
    return 0;
}
