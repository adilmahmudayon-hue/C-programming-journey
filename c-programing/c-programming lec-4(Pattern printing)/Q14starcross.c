#include<stdio.h>
int main()
{
   printf("Enter number of stars of the cross(must be odd number) = "); 
 int n; scanf("%d",&n);

    for(int i=1;i<=n;i++) 
 {    

           for(int j=1; j<=n; j++)
         {  
             if(i==j  || i+j==n+1)
             { printf("* ");
                
                }
             else
              printf("  ");
               //printf("# ");
               
         }
     printf("\n");  // to enter after each line

 }

      return 0;
}

           

          