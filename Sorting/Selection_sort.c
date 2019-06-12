#include<stdio.h>
#include<conio.h>

/**Selection Sorting**/

void selectnsort(int arr[], int size)
{
    int i,j,temp,index;
    for(i=0;i<size-1;i++)
    {
        index=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[j+1])
            {
                index=j;
            }
            if(index!=i)
            {
                temp=arr[index];
                arr[index]=arr[i];
                arr[i]=temp;
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

    selectnsort(a,n);
    printf("\n\nAfter Selection Sorting :\n ");
    printarr(a,n);
    getch();
}



