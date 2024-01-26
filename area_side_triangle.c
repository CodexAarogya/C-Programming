// to find area of triangle using its three sides...
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter side a(in m):");
    scanf("%f", &a);
    printf("Enter side b(in m):");
    scanf("%f", &b);
    printf("Enter side c(in m):");
    scanf("%f", &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area = %.2fm.sq. ", area);

    return 0;
}