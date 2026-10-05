#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of rows/columns of a matrix(nxn):\n");
    scanf("%d",&n);

    int arr[n][n];
    printf("Enter elements of the matrix:\n");

    for(int i=0; i<n; i++)
    {
        for( int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("The matrix:\n");

     for(int i=0; i<n; i++)
    {
        for( int j=0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        
        }
        printf("\n");
    }

// Q8:: convert a matrix into its transpose and print 

   

     for(int i=0; i<n; i++)
    {
        for( int j=i; j<n; j++)
        {
                int temp=arr[i][j];
                 arr[i][j]=arr[j][i];
                 arr[j][i]=temp;
         
           }
  
    } 
            
       
        printf("The transpose matrix:\n");

     for(int i=0; i<n; i++)
    {
        for( int j=0; j<n; j++)
        {
          printf("%d ",arr[i][j]);
        
        }
        printf("\n");
  
    }

 // reversing every row--> rotating 90 degree clockwise

         for(int i=0; i<n; i++)
    {
       
            for ( int j=0,k=n-1; j<k; j++,k--)
            {
                int temp=arr[i][j];
                arr[i][j]=arr[i][k];
                arr[i][k]=temp;
            }
           
    }       
        
  

                
        printf("The 90 degree clockwise roteted matrix:\n");

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
  




 