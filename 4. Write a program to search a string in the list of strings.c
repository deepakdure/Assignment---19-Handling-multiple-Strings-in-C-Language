#include <stdio.h>
#include <string.h>
int main()
{
    char str[5][10], st[10];
    int i, j;
    printf("enter 5 strings\n");
    for (i = 0; i < 5; i++)
    {
        gets(str[i]);
    }
    printf("!!!!!!!!!!!!!!!!!!\n");
    printf("enter a string for searching = ");
    gets(st);
    for (i = 0; i < 4; i++)
    {
        if (strcmp(str[i], st) == 0)
        {
            printf("string found");
            break;
        }
    }
    if (strcmp(str[i], st) != 0)
        printf("String not found");
}