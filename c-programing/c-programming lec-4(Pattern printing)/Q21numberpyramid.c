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

          for(int k=1; k<=2*i-1; k++)
         {  
            printf("%d ",k);
            
             }
             
          


     printf("\n");

}
     return 0;
}