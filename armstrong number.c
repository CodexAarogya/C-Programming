#include <stdio.h>              // ARMSTRONG NUMBER..
#include <math.h>
int main()
{
    int num, a, b, c, d, e, amst;
    printf("Enter a number:");
    scanf("%d", &num);
    a = num % 10;
    b = num / 10;
    c = b % 10;
    d = b / 10;
    e = d % 10;
    
    amst = (pow(a, 3) + pow(c, 3) + pow(e, 3));
    if (amst == num)
    {
        printf("%d is a Armstrong number.", num);
    }
    else
    {
        printf("%d is not a Armstrong number.", num);
    }

    return 0;
}