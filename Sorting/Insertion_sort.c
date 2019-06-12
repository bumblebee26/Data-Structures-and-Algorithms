#include<stdio.h>
#include<conio.h>

/**Insertion Sorting**/

void insertionsort(int arr[], int size)
{
    int i,j,temp;
    for(i=1;i<size;i++)
    {
        j=i;
        while(j>0 && arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                j--;
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

    insertionsort(a,n);
    printf("\n\nAfter Insertion Sorting :\n ");
    printarr(a,n);
    getch();
}


