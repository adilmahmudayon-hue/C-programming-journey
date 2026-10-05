#include<stdio.h>
int main( int argc, char *argv[])
{
    FILE *fp= fopen(argv[1],"r");
    if(fp==NULL)
    {
        printf("Cannot open file\n");
        return 0;
    }

    char ch;
 do
 {
    putchar(ch=fgetc(fp));
    /* code */
 } while (ch!='\n');

// char str[1000];
//  while(fgets(str,1000,fp)!=NULL)
//  printf("%s",str);
 
 fclose(fp);

 return 0;
    
}