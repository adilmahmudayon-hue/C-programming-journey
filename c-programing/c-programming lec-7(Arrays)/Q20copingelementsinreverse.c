#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];  // taking size of array from user(user input size)
     int brr[n];

    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("element no.%d-",i+1);
         scanf("%d",&arr[i]);

      brr[n-1-i] = arr[i] ;   

    }

    printf("\nThe elements in reverse:");

     for(int j=0; j<n; j++)
     {
       printf("%d ",brr[j]);
     }
    
     return 0;
}
   
   
    
     
       
      
         
       
     

    

    



