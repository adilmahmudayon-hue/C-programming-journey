#include<stdio.h>
int main()
{
   printf("Enter number of stars of the plus(must be odd number) = "); 
int n; scanf("%d",&n);

    for(int i=1;i<=n;i++) 
 {    

           for(int j=1; j<=n; j++)
         {  
             if(i==n/2+1 || j==n/2+1)
             { printf("* ");
                
                
             }
              else
             
               printf("  ");
               //printf("# ");
               
         }
     printf("\n");  // to enter after each line

}


// another way 

printf("Enter number of stars of the plus(must be odd number) = "); 
int n1; scanf("%d",&n1);

    for(int i=1;i<=n1;i++) 
 {    

           for(int j=1; j<=n1; j++)
         {  
             if(i!=n/2+1 && j!=n/2+1)
             { printf("  ");
                
                
             }
              else
             
               printf("* ");
         }
      printf("\n");
}
     return 0;
}