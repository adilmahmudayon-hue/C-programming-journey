#include<stdio.h>
int main()
{
    FILE* fp=fopen("Test.txt","w");
    if(fp==NULL)
    {
        printf("File not created");
        return 0;
    } 
    
    else
    printf("File is created");
    char str[]="I love My Urbijaan\nMy urbi best";

    fputs(str,fp);
    fclose(fp);




    return 0;
}