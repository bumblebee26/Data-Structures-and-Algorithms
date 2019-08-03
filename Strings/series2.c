#include<stdio.h>


void gp(int n, int m)
{
    int i,prod=1,cnt=0;
    for(i=0;i<n;i++)
    {
        if(n>0)
        {
            prod=prod*m;
        }
        if(++cnt==n)
        {
            printf("%d, ",prod/m);
        }

    }
}

int main()
{
    int n,cm1,cm2,i;
    printf("Enter the no. of terms: ");
    scanf("%d",&n);
    printf("Enter the common ratio of series 1: ");
    scanf("%d",&cm1);
    printf("Enter the common ratio of series 2: ");
    scanf("%d",&cm2);

    for(i=1;i<n;i++)
    {
        if(i%2==1)
        {
            gp((i/2 + 1),cm1);
        }
        else
        {
            gp(i/2,cm2);
        }
    }

    return 0;
}
