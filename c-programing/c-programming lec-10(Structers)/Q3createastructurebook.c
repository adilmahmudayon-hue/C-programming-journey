#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[50];
        float price;
        int pages;
    }chem;

    struct book phy;

    strcpy(phy.name,"Classical Physics");  // amazing way to tackle this problem

    // phy.name[0] ='P';
    //  phy.name[1] ='h';
    //   phy.name[2] ='y';
    //    phy.name[3] ='s';
    //     phy.name[4] ='i';
    //      phy.name[5] ='c';
    //       phy.name[6] ='s';
    phy.price=750.89;
    phy.pages=200;



     strcpy(chem.name,"Theoritical Chemistry"); 
      chem.price=1250.85;
      chem.pages=500;



    printf("%s\n%f\n%d  ",chem.name,chem.price,chem.pages);
    // printf("%f\n",chem.price);
    // printf("%d\n",chem.pages);

     printf("%s\n",phy.name);
    printf("%f\n",phy.price);
    printf("%d\n",phy.pages);
   
   
    return 0;
}