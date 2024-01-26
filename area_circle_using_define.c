#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
    float rad,area;
    printf("Enter Radius(in m):");
    scanf("%f",&rad);
    area=pi*pow(rad,2);
    printf("Area of circle = %.2fm.sq",area);
    return 0;
}