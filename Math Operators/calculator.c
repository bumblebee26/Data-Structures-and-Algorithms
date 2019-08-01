#include<stdio.h>

int main()
{
    int a,b,sum=0;
    float prod,div,rem;
    char n;

    XYZ:
        {
        printf("'+' Addition\n'-' Subtraction\n'*' Multiplication\n'/' Division\n'%' Remainder\n");
        printf("\nEnter your choice : ");
        scanf("%c",&n);

        switch (n)
        {
            case '+':
                {
                    printf("Enter two numbers : ");
                    scanf("%d %d",&a,&b);
                    sum=a+b;
                    printf("Addition of %d and %d : %d",a,b,sum);
                    break;
                }
            case '-':
                {
                    printf("Enter two numbers : ");
                    scanf("%d %d",&a,&b);
                    sum=a-b;
                    printf("Subtraction of %d and %d : %d",a,b,sum);
                    break;
                }
            case '*':
                {
                    printf("Enter two numbers : ");
                    scanf("%d %d",&a,&b);
                    prod=a*b;
                    printf("Subtraction of %d and %d : %f",a,b,prod);
                    break;
                }
            case '/':
                {
                    printf("Enter two numbers : ");
                    scanf("%d %d",&a,&b);
                    div=a/b;
                    printf("Division of %d and %d : %f",a,b,div);
                    break;
                }
            case '%':
                {
                    printf("Enter two numbers : ");
                    scanf("%d %d",&a,&b);
                    rem=a%b;
                    printf("Remainder of %d and %d : %f",a,b,rem);
                    break;
                }
            default :
                {
                    printf("\nInvalid Input");
                }
        }
        }
    printf("\n\nPress any key to continue\n\n\n");
	goto XYZ;
    return 0;
}
