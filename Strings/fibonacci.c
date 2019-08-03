#include<stdio.h>

int fibo(int n)
{
    if (n==0||n==1)
        return n;
    else
        return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int c=0,i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Fibonacci series upto %d: \n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n",fibo(c));
        c++;
    }
    return 0;
}


///1,1,3,2,9,4,27,8,81,16,721
