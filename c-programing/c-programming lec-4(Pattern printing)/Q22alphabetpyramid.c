#include<stdio.h>
int main()
{
    printf("Enter row of pyramid = "); // column number
int n; scanf("%d",&n); 
int nst=1;

    for(int i=1;i<=n;i++)  
 {    
           for(int j=1; j<=n-i; j++)
         {  
            printf("  ");
             }

          for(int k=65; k<=2*i-1+64; k++)
         {  
            printf("%c ",k);      // using ascii values
            
             }
             
          


     printf("\n");

}

// using typecasting

   for(int i=1;i<=n;i++)  
 {    
           for(int j=1; j<=n-i; j++)
         {  
            printf("  ");
             }

          for(int k=65; k<=2*i-1+64; k++)
         {  
            char ch=(char)k;
            printf("%c ",ch);   // typecasting
            
             }
             
          


     printf("\n");

}
     return 0;
}