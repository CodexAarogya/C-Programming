#include <stdio.h>
int main()
{
    int i, j;
    for (i = 6; i > 1; i--)
    {
        for (j = 0; j < (i - 1); j++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }

    return 0;
}