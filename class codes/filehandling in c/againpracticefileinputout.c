#include<stdio.h>
int main()
{
    char h[50];
    int ah;
    char uh[20],dept[20];

    FILE* fp=fopen("Shongshar.txt","r");

    // fprintf(fp,"Husband: %s\nAge: %d\nUniversity: %s\nDept: %s",h,ah,uh,dept);

     fscanf(fp,"Husband: %s\nAge: %d\nUniversity: %s\nDept: %s",&h,&ah,&uh,&dept);
    printf("Husband: %s\nAge:%d\nUniversity: %s\nDept:%s",h,ah,uh,dept);
    

    return 0;
}