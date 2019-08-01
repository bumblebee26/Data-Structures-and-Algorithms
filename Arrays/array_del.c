#include<stdio.h>

int main()
{
    int a[100],i,n,index,temp;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the index of element to be deleted : ");
    scanf("%d",&index);
    for(i=0;i<n;i++)
    {
        if(i==index)
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            n--;
        }
    }
    printf("\nEdited array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}
