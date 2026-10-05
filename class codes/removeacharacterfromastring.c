#include<stdio.h>
#include<string.h>
int main()
{
    char str[30]="Karim";
    char ch;
    scanf("%c",&ch);
    char *pos=strchr(str,ch);  // returns address of the char
    int i=pos-str; // index of that char

    for(int j=i; j<strlen(str);j++)
    {
        str[j]=str[j+1];
    }

    puts(str);

}