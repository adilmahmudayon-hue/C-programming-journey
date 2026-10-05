#include<stdio.h>
int main()
{
    printf("Enter row of table = "); // column number
int n; scanf("%d",&n); 
int nsp=1;
    for(int i=1;i<=n;i++)  

 {     
    if(i!=1)
    { 
     for(int k=1; k<=n+1-i; k++)
         {  
            printf("*");
             }

          for(int j=1; j<=nsp; j++)
         {  
            printf(" ");
             }
             nsp+=2;
         for(int k=1; k<=n+1-i; k++)
         {  
            printf("*");
             }

    }

            else 
        {
            for(int k=1; k<=2*n-i; k++)
         {  
            printf("*");
             }
        }


       printf("\n"); // to enter after each line

}     
    


     return 0;
}
            
          
 
  

     
