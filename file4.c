// write a program to create "student.txt" file to store the student roll no , name, address, faculty,DOB  and also display these records of students who are
// not from pokhara
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct dob
{
    int dd;
    int mm;
    int yr;
};
struct student
{
    char name[30];
    char add[30];
    char faculty[30];
    int roll;
    struct dob date;
};
void main()
{
    int i, n = 3;
    struct student e[3];
    FILE *ptr = NULL;
    ptr = fopen("student.txt", "w");
    if (ptr == NULL)
    {
        printf(" File cannot be created \n");
    }
    else
    {
        printf(" File has been created successfully \n");
    }
    printf("Enter the following details of the students\n");
    for (i = 0; i < n; i++)
    {
        printf("Name:\n ");
        scanf(" %[^\n]", e[i].name);
        fprintf(ptr, "\n.............................................\nName: %s \n", e[i].name);
        printf("Address: \n");
        scanf(" %[^\n]", e[i].add);
        fprintf(ptr, "Address: %s \n", e[i].add);
        printf("Faculty: \n");
        scanf(" %[^\n]", e[i].faculty);
        fprintf(ptr, "Faculty: %s \n", e[i].faculty);
        printf("Rol no: \n");
        scanf(" %d", &e[i].roll);
        fprintf(ptr, "Roll No: %d \n", e[i].roll);
        printf("Enter the Date of Birth in mm-dd-yr  format \n");
        scanf(" %d-%d-%d", &e[i].date.mm, &e[i].date.dd, &e[i].date.yr);
        fprintf(ptr, "Date of Birth(mm-dd-yr): %d-%d-%d", e[i].date.mm, e[i].date.dd, e[i].date.yr);
    }
    for (i = 0; i < n; i++)
    {
        if ((strcmp(strlwr(e[i].add),"pokhara")==0))
        {
            printf("\n.............................................\nName: %s \n", e[i].name);
            printf("Address: %s \n", e[i].add);
            printf("Faculty: %s \n", e[i].faculty);
            printf("Roll No: %d \n", e[i].roll);
            printf("Date of Birth(mm-dd-yr): %d-%d-%d", e[i].date.mm, e[i].date.dd, e[i].date.yr);
        }
    }
    fclose(ptr);
    getch();
}