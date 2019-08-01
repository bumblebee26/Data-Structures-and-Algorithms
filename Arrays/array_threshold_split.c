#include<stdio.h>

int main()
{
    int a[100],i,b[100],c[100],thres,n,temp;
    int p,q,j=0,k=0;

    printf("Enter the total no. of elements : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nEntered array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nEnter the threshold value : ");;
    scanf("%d",&thres);

    printf("\nNew array of the elements greater than the %d is formed\n\n",thres);

    for(i=0;i<n;i++)
    {
        if(a[i]>thres)
        {
            b[j]=a[i];
            p=++j;
        }
        else
        {
            c[k]=a[i];
            q=++k;
        }
    }

    printf("\nOld array :\n");
    for(i=0;i<q;i++)
    {
        printf("%d\t",c[i]);
    }

    printf("\nNew array :\n");
    for(i=0;i<p;i++)
    {
        printf("%d\t",b[i]);
    }

    return 0;
}
