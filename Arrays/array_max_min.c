int main()
{
    int a[100],i,n,max,min;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("\nEnter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[1];

    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
        {
            max=a[i];
        }
        else if(a[i]<=min)
        {
            min=a[i];
        }
    }
    printf("\nMaximum and Minimum element of the array are %d and %d, respectively\n",max,min);

    return 0;
}
