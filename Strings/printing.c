#include<stdio.h>

int main()
{
    char text[100];
    int i;

    printf("Enter any string: ");
    gets(text);

    printf("String is: ");
    for(i=0;text[i]!='\0';i++)
    {
        printf("%c",text[i]);
    }
    printf("\n");
    return 0;
}
