#include<stdio.h>
int main()
{
    FILE *fp=fopen("Test3.txt","r");
    if(fp==NULL)
    {
        printf("Can not create file");
        return 0;
    }
    else printf("File is created\n");
    printf("Enter your text until enter key:\n");

    char ch=getchar();
    char c;
    while((c=getchar())!='\n')
    {
        fputc(c,fp);

    }
    fputc(c,fp);

    fputc(ch,fp);


    fclose(fp);

    return 0;
}