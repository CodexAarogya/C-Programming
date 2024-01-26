#include <stdio.h>
int main()
{
    int a, fact = 1, i;
    printf("Enter any number:");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("0!=1");
    }
    else
    {

        for (i = 1; i <= a; i++)
        {
            fact *= i;
        }
        
        printf("%d!=%d", a, fact);
    }

    return 0;
}