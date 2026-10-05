#include<stdio.h>
#include<string.h>
int main()
{
    char str[30]="Karim";
    int pos;
    char ch;
    scanf("%d %c",&pos,&ch);
 
    if(pos>sizeof(str) ) printf("Invalid\n");
    
    else if(pos>strlen(str)) printf("Not Possible\n");
    
    else
    {
        for(int i=strlen(str); i>=pos; i--)
     {

        str[i+1]=str[i];
     }

     str[pos]=ch;

     puts(str);
    }

    return 0;
}