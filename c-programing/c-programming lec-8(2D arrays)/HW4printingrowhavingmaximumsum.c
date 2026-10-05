#include<stdio.h>
int main()
{
    int r,c,msum=0,mrow;
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

    
     for(int i=0; i<r; i++)
    {
        int sum=0; 
        for( int j=0; j<c; j++)
        {
            sum=sum+arr[i][j];
       
        }

        printf("Sum of row no.%d: %d",i+1,sum);
        
        if (msum<sum)
        {
            msum=sum;
            mrow=i+1;
        }
        printf("\n");
    }

    printf("row no.%d has the maximum sum of row = %d",mrow,msum);
    

    return 0;
}