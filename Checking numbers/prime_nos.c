#include<stdio.h>
void main()
{
	int n,i,j,flag;
	printf("Enter the number up to which Prime numbers are required: ");
	scanf("%d",&n);
	printf("1 is neither a Prime Nor a Composite number\n");
	printf("Prime numbers are : \n");
	printf("2\n");

	for(i=3;i<=n;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d\n",i);
    }
}
