#include<stdio.h>
void reverse( int arr[],int si,int ei)
{  int temp;

   for( int i=si,j=ei ; i<j ; i++,j--)
   { 
      temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
return;

}


int main()
{ 
   int arr[10]={1,2,3,4,5,6,7,8,9,10};

     reverse(arr,4,5);

     for( int j=0; j<10; j++)
    {
        printf("%d ",arr[j]);
    }

    return 0;
} 

  


