#include<stdio.h>
#include<string.h>
int main()
{
    char str[100]="March 25 1989 Saturday";
    

    int d,y;
    char  m[10],day[10];

    sscanf(str,"%s %d %d %s",m,&d,&y,day);

    printf("%s ,%d ,%d ,%s",m,d,y,day);

    return 0;
}