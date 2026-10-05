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

 //Q6:: printing transpose of a matrix

      printf("Transepose of the matrix:\n");

     for(int i=0; i<c; i++)
    {
        for( int j=0; j<r; j++)  // c=r & r=c --> changing order of the matrix
        {
            printf("%d ",arr[j][i]);
        
        }
        printf("\n");
    }


  //Q-7::  storing transpose in another matrix and printing
     int brr[c][r];
     
         for(int i=0; i<c; i++)
    {
        for( int j=0; j<r; j++)  // c=r & r=c --> changing order of the matrix
        {
            brr[i][j]=arr[j][i];  // exchanging the values
         }
    }   
    
   

        printf("storing transepose in another array and printing it :\n");

     for(int i=0; i<c; i++)
    {
        for( int j=0; j<r; j++)  // c=r & r=c --> changing order of the matrix
        {
            printf("%d ",brr[i][j]);
        
        }
        printf("\n");
    }


 return 0;
}