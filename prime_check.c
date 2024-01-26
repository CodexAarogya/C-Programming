#include<stdio.h>
int main()
{
    int num1,i,counter=0;
    printf("Enter a number:");
    scanf("%d",&num1);

    if(num1==0)
    {
        printf("0 is neither prime nor composite.");
    }
    else
    {
        for(i=1;i<=num1;i++)
        {
            if(num1%i==0)
            {
                counter++;
            }
        }
        if(counter==2)
        {
            printf("%d is a prime number.",num1);
        }
        else
        {
            printf("%d is composite number.",num1);
        }
        
    }
    return 0;
}