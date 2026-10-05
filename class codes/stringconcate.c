#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],str2[30];
    gets(str); gets(str2);

    strcat(str,str2);
    puts(str);
    puts(str2);
}