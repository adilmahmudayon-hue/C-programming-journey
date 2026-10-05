#include<stdio.h>
int main()
{
    typedef struct 
    {
        int m,y,d;
    }date;
    typedef struct record
    {
        char name[100],acc_type[10],address[100];
        int acc_no;
        float ob,nb,p;
        date lp;
    } record;

     FILE* fp=fopen("record.txt","w");


    record customer;
    printf("Enter customer name:");
    gets(customer.name);

    printf("\nEnter customer account type:");
    scanf(" %s",customer.acc_type);


    printf("\nEnter customer address:");
    scanf(" %s",customer.address);

    printf("\nEnter customer account number:");
    scanf("%d",&customer.acc_no);

    customer.ob=0,customer.nb=0;

        printf("\nEnter todays date (m/d/y):");
    scanf("%d %d %d",&customer.lp);

   
    if(fp==NULL)
    {
        printf("File not created");
        return 0;
    }

    fprintf(fp,"Name: %s",customer.name);
     fprintf(fp," %s",customer.acc_type);

    
    return 0;
}