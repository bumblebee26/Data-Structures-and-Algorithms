#include<stdio.h>

void main()
{
    char ch='A';
    for(char i=ch; i<=(122); i++)
    {
        printf("%c : Ascii value = %d\n",i,i);
    }
}
