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
            sum=sum+arr[i][j];
        }
        printf("\n");
    }

    printf("Sum of the matrix: %d",sum);

    return 0;
}