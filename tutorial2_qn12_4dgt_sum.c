#include <stdio.h>
int main()
{
    int n, fst, lst, sum;
    printf("Enter 4-digit number:");
    scanf("%d",&n);
    fst = n % 10;   // we can get first digit..
    lst = n / 1000; // we can get last digit..
    sum = fst + lst;
    printf("1st digit=%d\t Last digit=%d\t sum=%d", fst, lst, sum);

    return 0;
}