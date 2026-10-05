#include<stdio.h>
#include<strings.h>
int main()
{
    char s1[30],s2[30],str[30];
    gets(s1);
    gets(s2);

    int i=0;
    while(s1[i]!='\0')
    {
        str[i]=s1[i];
        i++;
    }
    str[i]=' ';
    int j=0;
    while(s2[j]!='\0')
    {
        str[i+j+1]=s2[j];
        j++;
    }
    str[i+j+1]='\0';

    puts(str);
}