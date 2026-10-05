#include<stdio.h>
#include<string.h>
int main()
{
    char str[30]="asdf",str2[30]="asdf";
    // int r=strcmp(str2,str);

    int i=0,f=0;
    while(str[i]!='\0' && str2[i]!='\0')
    {
        if(str[i]!=str2[i])
        {
            f=1;
            break;
        }
        i++;
    }

    if(f==0) printf("Equal\n");
    else printf("Not equal\n");
}