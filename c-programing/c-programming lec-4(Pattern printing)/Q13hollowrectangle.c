#include<stdio.h>
int main()
{
printf("Enter the values logically\n\n");
printf("Enter length = "); // column number
int l; scanf("%d",&l);
printf("Enter width = "); // row number
int w; scanf("%d",&w);

    for(int i=1;i<=w;i++)  // outer loop indicates lines
 {    

           for(int j=1; j<=l; j++)
         { 
            if((i==1 || i==w) || (j==1 || j==l))
            {
              printf("* ");
         }

          else 
          { 
            printf("  ");

          }
        
        }
        
     printf("\n");  // to enter after each line

}


// another way

printf("Again Enter the values logically\n");
printf("Enter length = "); // column number
int l1; scanf("%d",&l1);
printf("Enter width = "); // row number
int w1; scanf("%d",&w1);

    for(int i=1;i<=w1;i++)  // outer loop indicates lines
 {    

           for(int j=1; j<=l1; j++)
         { 
            if((i>1 && i<w) && (j>1 && j<l))
            {
              printf("  ");
         }

          else 
          { 
            printf("* ");

          }
        
        }
        
     printf("\n");  // to enter after each line

}
     return 0;
}