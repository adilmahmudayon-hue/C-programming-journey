#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Heart" , s2[]="art";

    char *pt=strstr(s1,s2);
    if(pt==NULL)
    {
        printf("Not found");
        
    }
    else
    printf("%u",pt-s1);

    return 0;
}