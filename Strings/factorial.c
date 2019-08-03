#include<stdio.h>


int factorial(int n)
{
    int fact=1,i;
    if (n==1)
        return fact;
    else
        return (n * factorial(n-1));
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}


///1,1,3,2,9,4,27,8,81,16,721
