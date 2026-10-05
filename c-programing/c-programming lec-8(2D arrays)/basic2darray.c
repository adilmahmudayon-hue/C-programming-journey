#include<stdio.h>
int main()
{
    int brr[2][2];
    brr[0][0]=10; 
 brr[0][1]=20;
 brr[1][0]=30;  printf("%d \n",brr[1][0]);
 brr[1][1]=40; 



int crr[3][4]={{12,34,56,67},{43,21,67,98},{32,67,54,31}};

     for( int i=0; i<3; i++)
    {
        for( int j=0; j<4; j++)
        {
            printf("%d ",crr[i][j]);
        }

         printf("\n");

    }

    int arr[2][2];

    printf("\nEnter elements of a 2x2 2D array\n");

      for( int i=0; i<2; i++)
    {
        for( int j=0; j<2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
       printf("\n");
        

    }

      for( int i=0; i<2; i++)
    {
        for( int j=0; j<2; j++)
        {
            printf("%d ",arr[i][j]);
        }

         printf("\n");

    }

    




    return 0;
}