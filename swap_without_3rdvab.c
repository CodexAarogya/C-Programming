#include <stdio.h>      //SWAP WOTHOUT USING THIRD VARIABLE
int main()
{
    int a, b;
    printf("enter a and b:");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d & b=%d", a, b);
    return 0;
}