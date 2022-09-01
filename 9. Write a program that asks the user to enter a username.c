#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    char str[5][20] = {"deepak", "pritam", "dipu", "sunil", "suman"};
    char s[] = "suni";
    int i;
    for (i = 0; i < 5; i++)
    {

        srand(time(0));
        if (strcmp(str[i], s) == 0)
        {
            int x = rand() % 10;
            int y = 1;
            for (i = x; i > 0; i--)
            {
                y = y * i;
                printf("%d\n", y);
            }
            printf("factorial of %d is %d ", x, y);
            break;
        }
    }
    if (strcmp(str[i], s) != 0)
    {
        printf("error");
    }
    return 0;
}