#include<stdio.h>
#include<conio.h>

/**Bubble Sorting**/

void bubsort(int arr[], int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void printarr(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void main()
{
    int i,n,a[100];
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    bubsort(a,n);
    printf("\n\nAfter Bubble Sorting :\n ");
    printarr(a,n);
}


