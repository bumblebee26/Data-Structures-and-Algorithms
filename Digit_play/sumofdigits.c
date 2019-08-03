#include<stdio.h>

int main()
{
    int sum=0,n,temp,term;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=n;

    while(n>0)
    {
        term=n%10;
        sum=sum+term;
        n=n/10;
    }
    printf("The sum of digits of %d is %d",temp,sum);
    return 0;
}
