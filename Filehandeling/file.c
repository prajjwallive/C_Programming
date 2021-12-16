#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("student.txt", "r");
    char c[4];
    fgets(c, 100, ptr);
    printf("The character i read was %s", c);
    fclose(ptr);
    return 0;
}