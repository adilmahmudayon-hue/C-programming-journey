#include<stdio.h>
int main()
{
     int r,c;  // r=rows, c=columns
    printf("Enter number of rows & columns for 2D array:");
     scanf("%d %d",&r,&c);

 int arr[r][c];

 printf("\nEnter elements of the 2D array(%dx%d):\n",r,c);
  
 for( int i=0; i<r; i++)      // loop for taking input
 {
    for( int j=0; j<c; j++)
    {
        scanf("%d",&arr[i][j]);
    }
 }
 

  for( int i=0; i<r; i++)   // loop for printing values
 {
    for( int j=0; j<c; j++)
    {
        printf("%d ",arr[i][j]);

    }
    printf("\n");
 }

    return 0;
}
 






