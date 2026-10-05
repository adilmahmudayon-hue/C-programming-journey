#include<stdio.h>
int main()
{
    FILE *fp=fopen("student.dat","rb");

 
    if(fp==NULL)
    {
        printf("cannot create file");
        return 0;
    }

    typedef struct
    {
        int roll;
        char name[10];
        int marks;
    }student ;

  

     student stu2; 
      
     printf("\nRoll\tName\tMarks");

      while(fread(&stu2,sizeof(stu2),1,fp)>0);
     

  
         printf("\n%d\t%s\t%d",stu2.roll,stu2.name,stu2.marks);

      
     


     fclose(fp);
    return 0;
}