#include<stdio.h>
int main()
{
    FILE *ptr=fopen("sample.txt","r");
    char str[100];
    while(fgets(str,100,ptr)!=NULL)
    printf("%s",str);

    FILE* pt=fopen("test2.txt","w");
    char s[]="CSE is so pathetic.\nI miss home.";
    fputs(str,pt);

    return 0;
}