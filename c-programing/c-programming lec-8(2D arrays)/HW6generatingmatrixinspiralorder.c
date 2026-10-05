#include<stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    
 int arr[n][n];
    
 int minr=0,minc=0,maxr=n-1,maxc=n-1, te=n*n, count=0;

 printf("\nSpiral matrix(%dx%d) of the elements:\n",n,n);

 while(count<te)
{
     // 1) storing minimum row
     for( int j=minc; j<=maxc && count<te; j++)
     {
        arr[minr][j]=count+1;
        count++ ; }

     minr++ ;
     
   
     
      // 2) storing maximum column
        for( int i=minr; i<=maxr  && count<te ; i++)
      
     {
        arr[i][maxc]=count+1;
        count++ ;

     }
      maxc--;
 

          // 3) storing maximum row(reverse)
        for( int j=maxc; j>=minc && count<te ; j--)
     {
        arr[maxr][j]=count+1;
        count++ ;

     }
      maxr--;


          // 4) storing minimum column
        for( int i=maxr; i>=minr && count<te ; i--)
     {
        arr[i][minc]=count+1;
        count++ ;

     }
      minc++;

}

 for(int i=0; i<n; i++)
    {
        for( int j=0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        
        }
        printf("\n");
    }

return 0;
}





