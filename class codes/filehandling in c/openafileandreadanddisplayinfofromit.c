#include<stdio.h>
int main()
{
    char name[20],dept[20];
    int roll; float marks;


    FILE *fp=fopen("student.txt","r");
    if(fp==NULL)
    
    {
        printf("File not found");
        return 0;
    }
     
    else printf("File is created\n");
    fscanf(fp,"Name: %s\nRoll: %d\nDepartment: %s\nMarks: %f\n",&name,&roll,&dept,&marks);

     


    printf("Informations of the file:\n");



    printf("Name: %s\nRoll: %d\nDepartment: %s\nMarks: %f\n",name,roll,dept,marks);

    fclose(fp);


    return 0;
}