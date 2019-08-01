#include<stdio.h>

int main()
{
    int i,j,k,a[100][100],b[100][100],prod[100][100],r1,c1,r2,c2;

    printf("Enter the no. of rows and columns of Matrix A: ");
    scanf("%d,%d",&r1,&c1);
    printf("Enter the elements of Matrix A : ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the no. of rows and columns of Matrix B: ");
    scanf("%d,%d",&r2,&c2);

    printf("Enter the elements of Matrix B : ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    if (c1==r2)
    {
        printf("Matrix A: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
        printf("Matrix B: \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<r2;k++)
                {
                    prod[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("Multiplication of Matrices A and B: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",prod[i][j]);
            }
            printf("\n");
        }

    }
    else
        printf("\nMultiplication is not possible");
    return 0;
}
