#include<stdio.h>
int main()
{
    printf("Enter row of triangle = "); // column number
int n; scanf("%d",&n); 

// another way(using oly loops)


    for(int i=1;i<=n;i++)  
 {    
           for(int j=1; j<=n-i; j++)
         {  
            printf("  ");
             }

           for(int k=65; k<=65+i-1; k++)
         {  char ch=(char)k;
            printf("%c ",ch);   // using typecasting
             }


       printf("\n"); // to enter after each line

}     
            
   
   
     return 0;

}