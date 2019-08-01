#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers a,b,c :");
    scanf("%d %d %d",&a,&b,&c);
    (a>b)?((a>c)?printf("a is greatest"):printf("c is greatest")):((b>c)?printf("b is greatest"):printf("c is greatest"));
}
