#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("Office.dat", "w+");
    fputc('o', ptr);
    fclose(ptr);
    return 0;
}