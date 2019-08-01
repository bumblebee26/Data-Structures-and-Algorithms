#include<stdio.h>

int pow_func(int x, int y);

int main()
{
    int a,b;
    double res;
    XYZ:
        {
        printf("Enter the value of base and exponent : ");
        scanf("%d,%d",&a,&b);
        res=pow_func(a,b);
        printf("\n%d raised to %d = %f\n",a,b,res);
        }
    printf("\nPress any key to continue\n\n");
    goto XYZ;
    return 0;
}

int pow_func(int x, int y)
{
    double pow=1;
    while(y!=0)
    {
        pow=pow*x;
        y--;
    }
    return pow;
}

