#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int c1=0,c0=1;
    int c=0;

    for(int i=0; i<strlen(str); i++)
    {
        if(str[i]==str[i+1])
        {
            c++;
        }

        else
        {
            if(c>=6) break;
            else 
           c=0; 
        } 
     
    }

    if(c>=6) printf("YES\n");
    else printf("NO\n");



    return 0;
}