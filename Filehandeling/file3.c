// Create a structre called book having member name,price,author and published date in day ,month and year.
// Write a program to read 100 books information from the user and display those  books having price greater than $250;
// Note : USE DMA for the memory allocation
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct date
{
    int yr;
    int mm;
    int day;
};
struct books
{
    char name[30];
    char author[30];
    struct date dob;
    float price;
};

void main()
{
    int i, n = 2;
    struct books *sptr;
    sptr = (struct books *)malloc(n * sizeof(struct books));
    FILE *fptr = NULL;
    fptr = fopen("books.txt", "w");
    if (fptr == NULL)
    {
        printf("File cannot be opened");
    }
    else
    {
        printf("File has been successfully created\n");
    }
    printf("Enter the following details of the book\n");
    for (i = 0; i < n; i++)
    {
        printf("\n...........................\nEnter the Name of Author\n:");
        scanf(" %[^\n]", (sptr + i)->author);
        fprintf(fptr, "\n........................\nAuthor name: %s\n", (sptr + i)->author);
        printf("Enter the Name of Book\n");
        scanf(" %[^\n]", (sptr + i)->name);
        fprintf(fptr, "Title of Book: %s \n", (sptr + i)->name);
        printf("Enter the price of the book\n");
        scanf(" %f", &(sptr + i)->price);
        fprintf(fptr, "Price: $%.2f", (sptr + i)->price);
        printf("Enter the date of Release(mm-dd-yr):\n");
        scanf(" %d-%d-%d", &(sptr + i)->dob.day, &(sptr + i)->dob.mm, &(sptr + i)->dob.yr);
        fprintf(fptr, "Published Date: %d-%d-%d \n", (sptr + i)->dob.mm, (sptr + i)->dob.day, (sptr + i)->dob.yr);
    }
    fclose(fptr);
    // Data entry for the book has been done using DMA and file handeling has been also done -- Here no need of file so file has been closed
    printf("\nList of the book which price is More than $250:\n");
    for (i = 0; i < n; i++)
    {
        if ((sptr + i)->price >= 250)
        {
            printf("Author name: %s\n", (sptr + i)->author);
            printf("Title of Book: %s \n", (sptr + i)->name);
            printf("Price: $%.2f \n", (sptr + i)->price);
            printf("Published Date: %d-%d-%d \n", (sptr + i)->dob.mm, (sptr + i)->dob.day, (sptr + i)->dob.yr);
        }
    }
    free(sptr);
    getch();
}