#include<stdio.h>
int main()
{
  int arr[2][3]={{3,4,5},{2,6,7}}; 

     for( int i=0; i<2; i++)
    {
        for( int j=0; j<3; j++)
        {
            printf("%d ",arr[i][j]);
        }

         printf("\n");
    }

     int brr[2][3]={3,4,5,2,6,7}; 

     for( int i=0; i<2; i++)
    {
        for( int j=0; j<3; j++)
        {
            printf("%d ",brr[i][j]);
        }

         printf("\n");
    }


     int crr[][3]={{3,4,5},{2,6,7}}; 

     for( int i=0; i<2; i++)
    {
        for( int j=0; j<3; j++)
        {
            printf("%d ",crr[i][j]);
        }

         printf("\n");
    }

    



    return 0;
}