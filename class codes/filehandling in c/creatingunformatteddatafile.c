#include<stdio.h>
int main()
{
    typedef struct creatingunformatteddatafile
    {
        char street[50],city[30],country[100];
        int accno;
        float ob;
        /* data */
    }record;
    

    record customer,customer2;
    FILE *fpt=fopen("unformatedrecords.txt","w");

    printf("Enter street:");
    scanf("%s",customer.street);

    printf("Enter city:");
    scanf("%s",customer.city);
    

    printf("Enter country:");
    scanf("%s",customer.country);
    
    printf("Enter account no:");
    scanf("%d",&customer.accno);

    printf("Enter Old Balance:");
    scanf("%d",&customer.ob);


    fwrite(&customer,sizeof(customer),1,fpt);

    while(fread(&customer2,sizeof(customer2),1,fpt)!=NULL)

    printf("\n%s\t%s\t%s\t%d\t%d",customer2.street,customer2.city,customer2.country,customer2.accno,customer2.ob);
    
    


    fclose(fpt);

    return 0;
}