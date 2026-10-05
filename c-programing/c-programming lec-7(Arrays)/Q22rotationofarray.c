#include<stdio.h>

void reverse( int arr[], int si, int ei)
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
    int n,k;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];  // taking size of array from user(user input size)
   
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("element no.%d:",i+1);
         scanf("%d",&arr[i]);
    }

      printf("\nNumber of rotation:");
     scanf("%d",&k);
     if(k>n)
     k=k%n;

     reverse(arr,0,n-1);  // reversing whole array

     reverse(arr,0,k-1);  // reversing 1st block(index:0-k-1)

     reverse(arr,k,n-1);  // reversing 2nd block(index:k-n-1)


      printf("\nThe elements after rotation:");
          for(int j=0; j<n; j++)
     {
       printf("%d ",arr[j]);
     }
     
       return 0;
}    
 
 


 
  