#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct book
    {
        char name[50];
        float price;
        int pages;
    }book;   // renming structure book to book

     book phy;

    strcpy(phy.name,"Classical Physics");  // amazing way to tackle this problem

 
    phy.price=750.89;
    phy.pages=200;



     book chem;
     strcpy(chem.name,"Theoritical Chemistry"); 
      chem.price=1250.85;
      chem.pages=500;



    printf("%s\n%f\n%d\n",chem.name,chem.price,chem.pages);
    // printf("%f\n",chem.price);
    // printf("%d\n",chem.pages);

     printf("%s\n",phy.name);
    printf("%f\n",phy.price);
    printf("%d\n",phy.pages);
   
   
    return 0;
}




// #include<stdio.h>

// typedef float real;
// int main()
// {
//     real x=3.1416;
//     printf("%f",x);



//     return 0;
// }
