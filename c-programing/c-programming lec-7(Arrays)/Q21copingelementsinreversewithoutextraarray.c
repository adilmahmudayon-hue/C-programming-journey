#include<stdio.h>

void reverse( int arr[], int n)
{  int temp;

   for( int i=0,j=n-1 ; i<j ; i++,j--)
   { 
      temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }


return;

}
int main()
{ 
   int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];  // taking size of array from user(user input size)
   

    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("element no.%d:",i+1);
         scanf("%d",&arr[i]);

     } 

     reverse(arr,n);

      printf("\nThe elements after rotation:");
          for(int j=0; j<n; j++)
     {
       printf("%d ",arr[j]);
     }
     
     
     return 0;
}
 
  
  
   
  
   
     

        
    

     

