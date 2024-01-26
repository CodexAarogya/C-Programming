#include<stdio.h>
int main()
{
    float slry,med,rnt,pf,ntslry;
    printf("Enter Salary:");
    scanf("%f",&slry);
    med=0.1*slry;
    rnt=0.08*slry;
    pf=0.1*slry;
    ntslry=slry+med+rnt+pf;
    printf("Net Salary= %.2f",ntslry);
    return 0;
}