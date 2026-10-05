#include<stdio.h>
int main()
{
   typedef struct 
   {
     int m, d, y;
   }date;

   typedef struct records
   {
      char name[50],address[20],acctype;
       float ob,nb,p;
        date lp;
       
   } records;

   FILE *fpt=fopen("records2.txt","w");

   records customer;
  

  
printf("Enter todays date (dd/mm/yyyy): ");
scanf("%d/%d/%d", &customer.lp.d, &customer.lp.m, &customer.lp.y);
   fprintf(fpt,"Todays date:%d/%d/%d\n",customer.lp.d,customer.lp.m,customer.lp.y);

   printf("Customer name: ");
   scanf("%s",customer.name);
   fprintf(fpt,"Customer Name: %s\n",customer.name);


    printf("Customer Address: ");
   scanf("%s",customer.address);
   fprintf(fpt,"Customer Address: %s\n",customer.address);


    printf("Customer Account Type: ");
    fflush(stdin);
    scanf(" %c",&customer.acctype);
   fprintf(fpt,"Customer Account Type: %c\n",customer.acctype);

   printf("Old Balance:");
   scanf("%f",&customer.ob);
   fprintf(fpt,"Old Balance:%f\n",customer.ob);


   
   printf("Payment:");
   scanf("%f",&customer.p);
   fprintf(fpt,"Payment:%f\n",customer.p);

   
   printf("New Balance: %f",customer.ob+customer.p);
   
   fprintf(fpt,"New Balance:%f\n",customer.ob+customer.p);

   return 0;
    
}