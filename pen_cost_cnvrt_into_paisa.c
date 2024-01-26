#include <stdio.h>
int main()
{
    int n;
    float amt, rupee;
    printf("Enter number of pens:"); // let cost of 1 pen is 50 paisa.
    scanf("%d", &n);
    amt = n * 50;
    rupee = amt * 0.01;
    printf("Amount= %.2f Paisa  \n", amt);
    printf("Amount= %.2f Rupees", rupee);
    return 0;
}