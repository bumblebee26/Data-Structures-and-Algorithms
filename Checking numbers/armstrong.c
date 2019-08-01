#include<stdio.h>

void main()
{
    int i,a,temp,n,sum;
    printf("Enter the limit, up to which you want Armstrong numbers : ");
    scanf("%d",&n);

    printf("Armstrong numbers from 0 to %d are : \n",n);
    for(i=1;i<=n;i++)
    {
        temp=i;
        sum=0;
        while(temp>0)
        {
            a=temp%10;
            sum=sum+(a*a*a);
            temp=temp/10;
        }
        if(i==sum)
            printf("%d\n",i);
    }
}
