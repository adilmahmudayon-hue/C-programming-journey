#include<stdio.h>
#include<string.h>
int main()
{
    char str[30]="karrak";

    int f=0;
    int j=strlen(str)-1;
    for(int i=0; i<j; i++,j--)
    {
        if(str[i]!=str[j])
        {
            f=1;
            break;
        }

    }

    if(f==0)  printf("Palindrome\n") ;
    else printf("Not pallindrome");
}