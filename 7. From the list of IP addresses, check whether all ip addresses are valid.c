#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[20] = "123.124.124.126";
    char st[20];
    strcpy(st, str);
    char *a = strtok(str, ".");
    int i = 0, x;
    while (a != NULL)
    {
        x = atoi(a);
        if ((x >= 0) && (x <= 255))
        {
            i++;
        }
        a = strtok(NULL, ".");
    }
    if (i == 4)
    {
        printf("%s = ", st);
        printf("this ip address is valid");
    }
    else
    {
        printf("Not valid");
    }
}