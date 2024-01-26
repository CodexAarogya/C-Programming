#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, inrt, real, img, r1, r2;
    printf("Equation must be in Ax² + Bx + C = 0  \n");
    printf("Enter A:");
    scanf("%f", &a);
    printf("Enter B:");
    scanf("%f", &b);
    printf("Enter C:");
    scanf("%f", &c);

    inrt = b * b - 4 * a * c;

    if (inrt > 0)
    {
        r1 = (-b + sqrt(inrt)) / 2 * a;
        r2 = (-b - sqrt(inrt)) / 2 * a;
        printf("x1=%.2f \t x2=%.2f", r1, r2);
    }
    else if (inrt == 0)
    {
        r1 = r2 = -b / 2 * a;
        printf("x1=x2=%.2f", r1);
    }
    else
    {
        r1 = (-b / 2 * a);
        r2 = (sqrt(4 * a * c - b * b) / 2 * a);
        printf("x1=%.2f  \t x2=%.2fi", r1, r2);
    }
    return 0;
}