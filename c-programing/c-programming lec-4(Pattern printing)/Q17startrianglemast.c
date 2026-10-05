#include<stdio.h>
int main()
{
    printf("Enter row of triangle = "); // column number
int n; scanf("%d",&n); 

    for(int i=1;i<=n;i++)  
 {    
           for(int j=1; j<=n; j++)
         {  
            if (i+j<=n)
            
                  printf("  "); 

            else 
                printf("* ");
             
             }
       printf("\n"); // to enter after each line

}     
// another way


    for(int i=1;i<=n;i++)  
 {    
           for(int j=1; j<=n; j++)
         {  
            if (i+j>=n+1)
            
                  printf("* "); 

            else 
                printf("  ");
             
             }
       printf("\n"); // to enter after each line

}     

// another way(using only loops)


    for(int i=1;i<=n;i++)  
 {    
           for(int j=1; j<=n-i; j++)
         {  
            printf("  ");
             }

           for(int k=1; k<=i; k++)
         {  
            printf("* ");
             }


       printf("\n"); // to enter after each line

}    


// hw: star triangle  inverted mast

printf("\n Hw\n");
            
 for(int i=1;i<=n;i++)  
 {    
           for(int j=1; j<=i-1; j++)
         {  
            printf("  ");
             }

           for(int k=1; k<=n+1-i; k++)
         {  
            printf("* ");
             }


       printf("\n"); // to enter after each line

}     
    


     return 0;
}
