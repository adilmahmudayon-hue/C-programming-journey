#include<stdio.h>
#include<string.h>
int main()
{
    char str[30]="Karimu";

    for(int i=0,j=strlen(str)-1; i<j; i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

    puts(str);
}