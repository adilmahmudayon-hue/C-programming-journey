#include<stdio.h>
int main()
{
    printf("Enter row of table = "); // column number
int n; scanf("%d",&n); 
int nsp=1; int m;
    for(int i=1;i<=n;i++)  

 {     
    if(i!=1)
    { 
     for(int k=1; k<=n+1-i; k++)
         {  
            printf("%d",k);
             }

          for(int j=1; j<=nsp; j++)
         {  
            printf(" ");
             }
             nsp+=2;
         for(int l=n+1-i; l>=1; l--)
         {  
            printf("%d",l);
             }

    }

            else 
        {
            for(int k=1; k<=2*n-1; k++)
         {  
            if(k<=n)
            {  
                m=k;
            printf("%d",m);
            }
         
          
             else
             {
                m=2*n-k;
                
                printf("%d",m);
             }

            }
        }


       printf("\n"); // to enter after each line

       }     
    
     return 0;

 }

