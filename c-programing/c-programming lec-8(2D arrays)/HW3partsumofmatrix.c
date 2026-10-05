#include<stdio.h>
int main()
{
    int r,c,sum=0;
    printf("Enter number of rows and columns of a matrix:\n");
    scanf("%d %d",&r,&c);

    int arr[r][c];
    printf("Enter elements of the matrix:");

      for(int i=0; i<r; i++)
    {
        for( int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

      printf("The matrix:\n");

      for(int i=0; i<r; i++)
    {
        for( int j=0; j<c; j++)
        {
            printf("%d ",arr[i][j]);
          
        }
        printf("\n");
    }

     int r1,c1,r2,c2;
     printf("Enter 1st coordinate (r1,c1):");
     scanf("%d %d",&r1,&c1);

     printf("Enter 2nd coordinate (r2,c2):");
     scanf("%d %d",&r2,&c2); 

     for(int i=r1-1; i<r2; i++)
    {
        for( int j=c1-1; j<c2; j++)
        {
            sum = sum+arr[i][j];
        }  
        
        printf("\n");
    }


    printf("Sum of the rectangle from (%d,%d) to (%d,%d): %d",r1,c1,r2,c2,sum);

    return 0;
}