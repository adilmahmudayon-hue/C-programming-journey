#include<stdio.h>
int main()
{
    int arr[7]={1,2,3,3,5,5,7};

    for( int i=0; i<7; i++)
    {
        for( int j=i+1; j<7; j++)
        {
             
            if ( j!=i && arr[i]==arr[j])
           {
              printf("Duplicate element: %d \n",arr[i]);
               break;
           }

            
        }
      
    }

    return 0;
}


