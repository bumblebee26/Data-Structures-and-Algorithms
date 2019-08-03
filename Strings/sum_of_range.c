#include<stdio.h>

int main()
{
    int j,i,n,sum=0;
    scanf("%d",&i);
    scanf("%d",&n);
    for(j=i;j<=n;j++)
    {
        sum=sum+j;
    }
    printf("%d",sum);
}
