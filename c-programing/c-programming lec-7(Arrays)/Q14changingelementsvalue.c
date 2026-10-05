#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for( int i=0; i<=9; i++)
    {
           if(i%2!=0)
        {
            printf("Elemnt-%d:%d",i+1,arr[i]);
            arr[i]=arr[i]*2;
            printf("\tElemnt-%d:%d\n",i+1,arr[i]);
        }

        else
        { printf("Elemnt-%d:%d",i+1,arr[i]);
          arr[i]=arr[i]+10;
          printf("\tElemnt-%d:%d\n",i+1,arr[i]);
        }
    } 
  
    return 0;
}
  



