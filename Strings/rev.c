#include<stdio.h>

int main()
{
    int n,rev=0,term;
    scanf("%d",&n);
    while(n!=0)
    {
        term=n%10;
        rev=rev*10+term;
        n=n/10;
    }
    printf("%d",rev);
}
