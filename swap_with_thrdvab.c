#include <stdio.h>      //SWAP USING THIRD VARIABLE
int main()  
{
    int a, b, c;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("SWAP--> a=%d & b=%d", a, b);
    return 0;
}