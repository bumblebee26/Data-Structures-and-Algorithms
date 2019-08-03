#include<stdio.h>

int main()
{
    int rev=0,temp,rem,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=n;

    while(n>0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    printf("\n\nThe reverse of %d is %d ",temp,rev);
}
