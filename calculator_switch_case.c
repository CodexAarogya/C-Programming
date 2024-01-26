#include <stdio.h>
int main()
{
    float num1, num2, add, sub, mul, div;
    char read;
    printf("Enter num1:");
    scanf("%f", &num1);
    printf("Enter num2:");
    scanf("%f", &num2);
    printf("Press (1) for addition.\nPress (2) for subtraction.\nPress (3) for division.\nPress (4) for mltiplication:\n");
    scanf("%d",&read);
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;  
    switch (read)
    {
    case 1:
        printf("%.2f + %.2f = %.2f", num1, num2, add);
        break;
    case 2:
        printf("%.2f - %.2f = %.2f", num1, num2, sub);
        break;
    case 3:
        printf("%.2f / %.2f = %.2f", num1, num2, div);
        break;
    case 4:
        printf("%.2f * %.2f = %.2f", num1, num2, mul);
        break;

    default:
        printf("Please Enter a Valid Number.");
    }
    return 0;
}