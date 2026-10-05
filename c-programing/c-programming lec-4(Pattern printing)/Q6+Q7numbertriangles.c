#include<stdio.h>
int main()


{
    // Q6: Number triangle
printf("Enter rows of triangle= ");
int n; scanf("%d",&n);
int a;
a=n;
for( int i=1; i<=n; i++)
{
  for(int j=1; j<=i; j++)
  { 
    printf("%d ",j);
  }
printf("\n");

}

// Q7:Number triangle inverted



    printf("Enter row of triangle = "); // column number
int n1; scanf("%d",&n1);
// printf("Enter number of lines = "); // row number
// int l; scanf("%d",&l);


    for(int i=1;i<=n1;i++)  // outer loop indicates lines
 {    
            
           for(int j=1; j<=n1+1-i; j++)
         { 
              printf("%d ",j); 
             
         }
       printf("\n");


        
}



printf("\n\nAgain inverted triangle\n");


    for(int i=1;i<=n1;i++)  // outer loop indicates lines
 {    
            
           for(int j=1; j<=a; j++)
         { 
              printf("%d ",j); 
             
         }
       printf("\n");
 a=a-1;
}

     return 0;
}








