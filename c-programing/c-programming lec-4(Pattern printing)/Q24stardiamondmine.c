#include<stdio.h>
int main()
{
    printf("Enter row of diamond = "); // column number
int n; scanf("%d",&n); 
int nst1=1; int nst2=n-2;

for(int i=1;i<=n;i++)  
 {    
    if (i<=n/2+1)
    {
        for(int j=1; j<=n/2+1-i; j++)
         {  
            printf(" ");
             }

          for(int k=1; k<=nst1; k++)
         {  
            printf("*");
            
             }

      nst1+=2;

     printf("\n");
    }            
          
    else

    {
         for(int j=1; j<=i-n/2-1; j++)
         {  
            printf(" ");
             }

          for(int k=1; k<=nst2; k++)
         {  
            printf("*");
            
             }
     nst2-=2;
 printf("\n");
    }
 }
     return 0;
}      
    
         
 
