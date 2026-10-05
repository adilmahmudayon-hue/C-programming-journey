#include<stdio.h>
int main()
{
    FILE* fp=fopen("Test.txt","r");
    if(fp==NULL)
    {
        printf("Can not open file");
        return 0;
    }
    else printf("File is created\n");
    char str[100];
    printf("Text from the file:\n");
    while(fgets(str,80,fp)!=NULL)
    
    printf("%s",str);
    fclose(fp);





    return 0;
}