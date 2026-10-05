#include<stdio.h>
int main()
{
    char name[20],dept[20];
    int roll; float marks;

    printf("Enter name of the student:");
    scanf("%s",name);


     printf("Enter roll of %s:",name);
    scanf("%d",&roll);

     printf("Enter Department of %s:",name);
    scanf("%s",dept);

     printf("Enter marks of %s:",name);
    scanf("%f",&marks);

    FILE *fp=fopen("student.txt","w");
    if(fp==NULL)
    
    {
        printf("File not found");
        return 0;
    }
     
    else printf("File is created\n");
    fprintf(fp,"Name: %s\nRoll: %d\nDepartment: %s\nMarks: %f\n",name,roll,dept,marks);

     


    printf("Informations are written onto file");




    return 0;
}