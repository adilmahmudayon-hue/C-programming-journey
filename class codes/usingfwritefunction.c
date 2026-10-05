#include<stdio.h>



int main()
{
    FILE *fp=fopen("student.dat","wb");

 
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

  

     student stu; 
      char ch;

    do
    {
        printf("Enter roll:");
        scanf("%d",&stu.roll);

        printf("Enter name:");
        scanf("%s",stu.name);

        printf("Enter marks:");
        scanf("%d",&stu.marks);

        fwrite(&stu,sizeof(stu),1,fp);

    
        printf("Do you want to add another data ? (y/n):");

        scanf(" %c",&ch);



        
    }
     while (ch=='y' || ch=='Y');

     printf("Data written successfully");

     fclose(fp);


    




    return 0;
}