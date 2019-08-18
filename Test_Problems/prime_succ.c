/// In mathematics, Sexy Primes are prime numbers that differ from each other by six.
/// For example, the numbers 5 and 11 are both sexy primes, because they differ by 6.
/// If p + 2 or p + 4 (where p is the lower prime) is also prime.
/// Example
///Input : 4 20
///Output : 4    --->  Total elements in this list {(5,11) (7, 13) (11, 17) (13, 19)}


#include<stdio.h>

int main()
{
    int a,b,i,j,k=0,count=0,prime[100],flag;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
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
        {
            prime[k]=i;
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<k;j++)
        {
            if(prime[j]-prime[i]==6)
                ++count;
        }
    }
    printf("%d",count);
    return 0;
}

