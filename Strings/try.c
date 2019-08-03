#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k=0,n;
    char a[1000],temp=1,c='#';

    printf("Enter the string: ");
    gets(a);

    for(i=0;a[i];i++)
    {
        if(a[i]!=c)
        {
            for(j=i+1;a[j];j++)
            {
                if(a[i]==a[j])
                    a[j]=c;
            }
        }
    }
    printf("\nAfter adding special character in place of repeated words. \n");
    printf("\n%s\n",a);

    for(i=0;a[i];i++)
    {
        a[i]=a[i+k];
        if(a[i]==c)
        {
            k++;
            i--;
        }
    }
    printf("string after removing all duplicates:\n");
    printf("\n%s",a);
    return 0;
}
