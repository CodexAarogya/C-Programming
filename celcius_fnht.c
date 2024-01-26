#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter temperature (in degree centigrade):");
    scanf("%f", &c);
    f = 1.8 * c + 32;
    printf("%.2f degree centegrade = %.2f degree fahrenheit.", c, f);

    return 0;
}