#include<stdio.h>

int main()
{

    printf("Enter a number= ");
    int n; scanf("%d",&n);
    int ld;  // ld=last digit
    int r=0;    int r1; 
    int sum;   int n1=n;
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
 
     sum= n1+r1;

printf("Reverse number: %d\n",r1);
printf("Sum of the number and reverse= %d",sum);

     return 0;
}