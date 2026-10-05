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
     for(int k=65; k<=n+65-i; k++)
         {  
            printf("%c",k);
             }

          for(int j=1; j<=nsp; j++)
         {  
            printf(" ");
             }
             nsp+=2;
         for(int k=n+64+i-1; k<=2*n+65-2; k++)
         {  
            printf("%c",k);
             }

    }

            else 
        {
            for(int k=65; k<=2*n+65-2; k++)
         {  
            printf("%c",k);
             }
        }


       printf("\n"); // to enter after each line

}     
    

     return 0;

}