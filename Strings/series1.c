#include<stdio.h>

void fibo(int n)
{
    /// Fibonacci series function
    int i,t1,t2,nt=0;
    t1=0;
    t2=1;
    for(i=1;i<=n;i++)
    {
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
    {printf("%d, ",t1);}
}

void prime(int n)
{
    /// Prime series function
    int i,j,flag,cnt=0;
    for(i=2;i<=1000;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            if(++cnt==n)
            {
                {printf("%d, ",i);}
            }
    }
}
int main()
{
    int i,n;
    printf("Enter the a value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            fibo(i/2 + 1);
        }
        else
        {
            prime(i/2);
        }
    }
    return 0;
}
