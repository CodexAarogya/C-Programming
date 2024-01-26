#include<stdio.h>
int main()
{
    float p,t,r;
    float interest;
    printf("Enter principle amount:");
    scanf("%f",&p);
    printf("Enter rate of interest:");
    scanf("%f",&r);
    printf("Enter time period(in yrs):");
    scanf("%f",&t);
    interest=(p*t*r)/100;
    printf("Interest for Rs.%.2f for %.2f years at %.2f rate is %.2f.",p,t,r,interest);
    return 0;


}