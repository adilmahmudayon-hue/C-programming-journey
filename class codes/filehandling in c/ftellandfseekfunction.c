#include<stdio.h>
int main()
{
    FILE *fp=fopen("student.txt","r");
    long int pos=ftell(fp);
    printf("%ld\n",pos);

    fseek(fp,0,SEEK_CUR);
    pos=ftell(fp);
    printf("%ld\n",pos);





    return 0;
}