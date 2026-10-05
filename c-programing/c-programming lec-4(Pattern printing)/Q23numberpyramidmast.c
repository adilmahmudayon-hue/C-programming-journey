#include<stdio.h>
int main()
{
    printf("Enter row of pyramid = "); // column number
int n; scanf("%d",&n); 
int l=1;

    for(int i=1;i<=n;i++)  
 {    
           for(int j=1; j<=n-i; j++)
         {  
            printf("  ");
             }

          for(int k=1; k<=2*i-1; k++)
         {    
            if(k<=i)
            {
             l=k;
               printf("%d ",l);
             }   
            
            else
            {  l--;
               printf("%d ",l);
            }
            
         }  
          


     printf("\n");

}

// another way
for(int i=1;i<=n;i++)  
 {    
           for(int j=1; j<=n-i; j++)
         {  
            printf("  ");
             }

          for(int k=1; k<=i; k++)
         {    
            printf("%d ",k);
         }  

         for (int l=i-1; l>=1;l--)
         {
            printf("%d ",l);
         }
          


     printf("\n");

}

// hw- Alphabet triangle

for(int i=1;i<=n;i++)  
 {    
           for(int j=1; j<=n-i; j++)
         {  
            printf("  ");
             }

          for(int k=65; k<=65+i-1; k++)
         {    
            printf("%c ",k); // ascii values
         }  

         for (int l=65+i-1-1; l>=65;l--)
         { 
            char ch=(char)l;  // typecasting
            printf("%c ",ch);
         }
          


     printf("\n");

}

     return 0;
}