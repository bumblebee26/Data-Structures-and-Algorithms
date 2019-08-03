#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100],temp;
    int i;
    printf("Enter the string: ");
    gets(a);
    strcpy(b,a);
    int n=strlen(a);
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("%s",a);

    if(strcmp(b,a)==0)
    {
        printf("\nString is Palindrome");
    }
    else
    {
        printf("\nString is not Palindrome");
    }
}
