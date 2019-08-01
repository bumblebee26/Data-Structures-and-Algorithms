#include<stdio.h>

int main()
{
    int a[100],i,n,ser;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be searched in the array : ");
    scanf("%d",&ser);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]==ser)
        {
            printf("%d is present at index %d\n",a[i],i);
        }
    }
    return 0;
}
