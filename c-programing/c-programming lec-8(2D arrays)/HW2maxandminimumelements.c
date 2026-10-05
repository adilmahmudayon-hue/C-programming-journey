#include<stdio.h>
#include<limits.h>
int main()
{
    int r,c,max=INT_MIN, min=INT_MAX, maxr, maxc, minr, minc;
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
        for( int j=0; j<c; j++)
        {
            if(arr[i][j]>max) 
            {
                max=arr[i][j];
                maxr=i; maxc=j;
            }     
          

              if(arr[i][j]<min) 
            {
                min=arr[i][j];
                minr=i; minc=j;
            }    
           
          
        }
   
    }

    printf("Maximum element: %d---->index(%d,%d) \n",max,maxr,maxc);
    printf("minimum element: %d---->index(%d,%d)",min,minr,minc);

    return 0;
}