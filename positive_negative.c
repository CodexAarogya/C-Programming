#include<stdio.h>
int main()
{
    int num1;
    printf("Enter any number:");
    scanf("%d",&num1);
    if(num1>0)
    {
        printf("%d is positive number.",num1);
    }
    else
    {
        printf("%d is negative number.",num1);
    }
    return 0;
}