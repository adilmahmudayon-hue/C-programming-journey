#include<stdio.h>
int main()
{
    FILE* fpt=fopen("filetry.txt","r");
    printf("This text is redirected to stdout\n");
    FILE *fp=freopen("filetry.txt","w", stdout);
    // printf("This text is redirected to file.txt\n");
    // printf("This one too?\n");
    // printf("%d\n",1+2);
    printf("my urbiii\n");
    fclose(fp);

    return 0;
}