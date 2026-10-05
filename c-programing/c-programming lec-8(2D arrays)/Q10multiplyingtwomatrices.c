#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("Enter number of rows and columns of 1st matrix:\n");
    scanf("%d %d",&r1,&c1);

    int arr[r1][c1];
    printf("Enter elements of the matrix:");

    for(int i=0; i<r1; i++)
    {
        for( int j=0; j<c1; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The 1st matrix:\n");

     for(int i=0; i<r1; i++)
    {
        for( int j=0; j<c1; j++)
        {
            printf("%d ",arr[i][j]);
       
        }
        printf("\n");
    }

 printf("\nEnter number of rows and columns of 2nd matrix:\n");
    scanf("%d %d",&r2,&c2);

    int brr[r2][c2];
    printf("Enter elements of the matrix:");

    for(int i=0; i<r2; i++)
    {
        for( int j=0; j<c2; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }

    printf("The 2nd matrix:\n");

     for(int i=0; i<r2; i++)
    {
        for( int j=0; j<c2; j++)
        {
            printf("%d ",brr[i][j]);
       
        }
        printf("\n");
    }

    int c=r2; // minimum of order=number of products to add (or c=c1)

    if(c1==r2)  // condiotion of multiplication of two matrices

    {
        printf("Multiplication of these two matrix is possible\n");

           int crr[r1][c2];
       

        for(int i=0; i<r1; i++)
      {
         for( int j=0; j<c2; j++)
           {
             crr[i][j]=0;   // initializing with 0 so can add  products later
             for( int k=0; k<c; k++)  // loop for multipying and limiting number of product
             {
                crr[i][j] += arr[i][k]*brr[k][j];
             }

           }
      } 
     
 
        printf("The product matrix:\n");

      for(int i=0; i<r1; i++)
       {
        for( int j=0; j<c2; j++)
        {
            printf("%d ",crr[i][j]);
       
        }
        printf("\n");
      }

    }

   else
   printf("These two matrices cannot be multiplied");

    return 0;
}  


