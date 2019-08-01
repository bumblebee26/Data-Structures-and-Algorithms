#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,x1,x2;

    printf("Enter the values of a, b and c in a quadratic equation ax^2 + bx +c =0 : ");
    scanf("%f%f%f",&a,&b,&c);

    printf("\nThe entered quadratic equation : %f x^2 + %f x + %f = 0\n",a,b,c);

    d=b*b - 4*a*c;

    if(d<0)
    {
        printf("\nThe roots are complex in nature. \n");
    }
    else
    {
        printf("\nRoots are real in nature.\n");
        if(d==0)
        {
            printf("\nThe roots are equal.\n");
            x1=(-b)/(2*a);
            printf("Roots of the given quadratic equation are %f and %f\n",x1,x1);
        }
        else
        {
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b+sqrt(d))/(2*a);
            printf("/nRoots are %f and %f",x1,x2);
        }
    }
    return 0;
}
