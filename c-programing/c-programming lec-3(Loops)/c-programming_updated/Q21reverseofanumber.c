#include<stdio.h>

int main()
{

    printf("Enter a number= ");
    int n; scanf("%d",&n);
    int ld;  // ld=last digit
    int r=0;    int r1; 

    while(n>0)
     {
       //  printf("Number now %d\n",n);

        ld=n%10;
        
        // printf("last digit %d\n",ld);
         r1=ld+r; 
      
        r=r1*10;
        
        // printf("%d\n",r);
        
        n=n/10;

     }

printf("Reverse number: %d\n",r1);


}