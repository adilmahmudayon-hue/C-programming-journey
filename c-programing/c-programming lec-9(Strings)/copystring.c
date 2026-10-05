#include<stdio.h>
#include<strings.h>
int main()
{
    char s1[]="Physics Wallah";
    char *s2=s1;
    // change in s1
    s1[0]='M';
    printf("%s",s2);



    return 0;
}