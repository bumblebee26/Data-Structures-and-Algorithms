#include<stdio.h>

int main()
{
    int i,n,sum=0,a[100];
    printf("Enter the no. of elements for an array : \n");
    scanf("%d",&n);
    printf("Enter the elements of an array : \n");
    for(i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
            sum=sum+a[i];
    }

    printf("\nSum of the elements of an array : %d",sum);
    return 0;
}
