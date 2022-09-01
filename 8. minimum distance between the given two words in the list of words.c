#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main()
{
    int i = 5, a = -1, b = -1;
    char str[5][20] = {"the", "quick", "brown", "fox", "quick"};
    char w1[] = "the";
    char w2[] = "quick";
    for (i = 0; i < 5; i++)
    {
        if (strcmp(str[i], w1) == 0)
            a = i;
        if (strcmp(str[i], w2) == 0)
            b = i;
    }
    if (a != -1 && b != -1)
    {
        printf("minimum distance is = %d", (abs(b - a) - 1));
    }
    getch;
    return 0;
}