#include<stdio.h>
int main()
{
    char str[250];
    scanf("%s",str);

    FILE *fp=fopen(str,"r");
    
    if(fp==NULL)
    {
        printf("Cannot open file.\n");
        printf("Reasons of error: Invalid file name\n, File does not exists\nPermisson denied");
        return 0;
    }

    char s[1000];
    while(fgets(s,1000,fp)!=NULL)
    {
        printf("%s",s);
    }

    fclose(fp);


    return 0;
}