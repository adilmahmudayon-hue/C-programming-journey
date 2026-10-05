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

    printf("wave print of the matrix:\n");

     for(int i=0; i<c; i++)
    {
        if(i%2==0)
        {
             for( int j=0; j<r; j++)
         
             printf("%d ",arr[j][i]);
           
         }
       
       else 
        {
             for( int j=r-1; j>=0 ;j--)
        
             printf("%d ",arr[j][i]);
           
        }
    
         printf("\n");
    }  
     
    return 0;
}
    