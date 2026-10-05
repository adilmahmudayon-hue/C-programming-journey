#include<stdio.h>
int main()
{
    int r,c;
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


int minr=0,minc=0,maxr=r-1,maxc=c-1, te=r*c, count=0;


printf("\nSpiral printing of the elements:");

while(count<te)
{
     // 1) print minimum row
     for( int j=minc; j<=maxc && count<te; j++)
     {
        printf("%d ",arr[minr][j]);
        count++ ;
     }
      minr++ ;
    
   
     
      // 2) print maximum column
        for( int i=minr; i<=maxr  && count<te ; i++)
      
     {
        printf("%d ",arr[i][maxc]);
        count++ ;

     }
      maxc--;
 

          // 3) print maximum row(reverse)
        for( int j=maxc; j>=minc && count<te ; j--)
     {
        printf("%d ",arr[maxr][j]);
        count++ ;

     }
      maxr--;


          // 4) print minimum column
        for( int i=maxr; i>=minr && count<te ; i--)
     {
        printf("%d ",arr[i][minc]);
        count++ ;

     }
      minc++;

}
     

    return 0;
}