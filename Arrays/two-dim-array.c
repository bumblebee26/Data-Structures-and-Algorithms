#include<stdio.h>

int main()
{
    int i,j,a[100][100],r,c;

    printf("Enter the no. of rows and columns : ");
    scanf("%d,%d",&r,&c);

    printf("Enter the elements : ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("2D array is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
