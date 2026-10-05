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
    printf("Contents(chars) of the file:\n");

    char c;
    while((c=fgetc(fp))!=EOF)
    {
        putchar(c);

    }
    // c=fgetc(fp);
    // printf("%c",c);




    fclose(fp);

    return 0;
}