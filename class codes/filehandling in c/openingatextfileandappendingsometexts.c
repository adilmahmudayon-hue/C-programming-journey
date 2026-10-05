#include<stdio.h>
int main()
{
    FILE* fp=fopen("Test.txt","a");
    if(fp==NULL)
    {
        printf("Can not create file");
        return 0;
    }

    else
    {
        printf("File is created\n");

    }

    fputs(" I love my Urbi\ntooooooo much",fp);
    

    fclose(fp);



    return 0;
}