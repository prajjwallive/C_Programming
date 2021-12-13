// Write a program to check the given word is palindrome or not (without using string function)
#include <stdio.h>
#include <conio.h>
void main()
{

    int ispalindrome = 1, i, len;
    char arr[30];
    printf("Enter the word that you want to check \n");
    scanf(" %s", arr);
    for (len = 0; arr[len] != 0; len++)
        ;
    for (i = 0; i < len; i++)
    {
        if (arr[i] != arr[len - 1 - i])
        {
            ispalindrome = 0;
            break;
        }
    }
    if (ispalindrome == 1)
    {
        printf("The given word is  palindrome\n");
    }
    else
    {
        printf("The given word is not palindrome\n");
    }

    getch();
}