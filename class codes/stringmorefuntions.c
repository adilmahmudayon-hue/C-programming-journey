#include<stdio.h>
#include<string.h>
int main()
{
    // strchr()
    char str[]="Hello World";
    char *ptr=strchr(str,'o');
    if(ptr!=NULL)
    {
        printf("%u\n",ptr-str);

    }

    else printf("Not found\n");

    //memove()
    char s[]="1234567890";
    memmove(s+2,s,4);
    puts(s);


    // strstr()
    char s1[]="Programming";
    char s2[]="gram";
    char *pt=strstr(s1,s2);

    if(pt!=NULL)
    {
        printf("%u",pt-s1);

    }
    return 0;
}