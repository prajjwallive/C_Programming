// Write a program to find the given string is Palindrome or not //
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[20];
    int len = 0, i, flag;
    i = 0, flag = 0;
    printf("Enter the string \n ");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\n %s is palindrome String", str);
    }
    else
    {
        printf("\n %s is not palindrome String", str);
    }
    return 0;
    getch();
}