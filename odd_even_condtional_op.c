#include <stdio.h>      // ODD EVEN COMDITIONAL OPERATOR
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    num % 2 == 0 ? printf("even") : printf("odd");
    return 0;
}