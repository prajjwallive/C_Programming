/* Creat a  Structure for the following data :
 Employee id emp name address Department DOB(mm-dd-yyyy)
 And alsor write a program to input 100 employee record and display whose department is 'Sales'
 */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#define N 3
struct date
{
    int mm;
    int yr;
    int dd;
};
struct employee
{
    int emp_id;
    char emp_name[50];
    char emp_add[50];
    char department[50];
    float salary;
    struct date dob;
};
void main()
{
    int i = 0;
    struct employee e[N];
    printf("\nEnter the Employee details  of %d employee ;", N);
    for (i = 0; i < N; i++)
    {
        printf("\nEnter the following details for %d entry", i + 1);
        printf("\n Enter the Employee id:");
        scanf(" %d", &e[i].emp_id);
        printf("\n Enter the Employee name:");
        scanf(" %[^\n]", e[i].emp_name);
        printf("\n Enter the Employee Department:");
        scanf(" %[^\n]", e[i].department);
        printf("\n ENter the Employee Address:");
        scanf("%[^\n]", e[i].emp_add);
        printf("\n Enter the Salary of the person:");
        scanf(" %f", &e[i].salary);
        printf("\nEnter the Date of Birth in Following format mm-dd-yyyy:");
        scanf(" %d%d%d", &e[i].dob.mm, &e[i].dob.dd, &e[i].dob.yr);
    }
    printf("............................................................................................................\n");
    printf("...........................Employee Details..................................................................\n");
    for (i = 0; i < N; i++)
    {
        if (strcmp("sales", strlwr(e[i].department)) == 0)
        {

            printf("\n  ID: %d", e[i].emp_id);
            printf("\n Name: %s", e[i].emp_name);
            printf("\n Department: %s", e[i].department);
            printf("\n Address: %s", e[i].emp_add);
            printf("\n Sales: %.2f", e[i].salary);
            printf(" \n DOB : %dM-%dD-%dY", e[i].dob.mm, e[i].dob.dd, e[i].dob.yr);
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>NEXT<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
        }
    }

    getch();
}