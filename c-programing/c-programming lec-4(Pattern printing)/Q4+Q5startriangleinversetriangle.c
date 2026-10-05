#include<stdio.h>
int main()
{
    printf("Enter row of triangle = "); // column number
int n; scanf("%d",&n); int a;
// printf("Enter number of lines = "); // row number
// int l; scanf("%d",&l);
 a=n;
    for(int i=1;i<=n;i++)  // outer loop indicates lines
 {    

           for(int j=1; j<=i; j++)
         { 
              printf("*"); 
             
         }
       printf("\n"); // to enter after each line

}

//Q5: Inverted Star triangle



    printf("Enter row of triangle = "); // column number
int n1; scanf("%d",&n1);
// printf("Enter number of lines = "); // row number
// int l; scanf("%d",&l);


    for(int i=1;i<=n1;i++)  // outer loop indicates lines
 {    
            
           for(int j=1; j<=n1+1-i; j++)
         { 
              printf("*"); 
             
         }
       printf("\n");

        
}





printf("\n\nAgain inverted triangle\n");


    for(int i=1;i<=n1;i++)  // outer loop indicates lines
 {    
            
           for(int j=1; j<=a; j++)
         { 
              printf("*"); 
             
         }
       printf("\n");
 a=a+1;

}

     return 0;
}