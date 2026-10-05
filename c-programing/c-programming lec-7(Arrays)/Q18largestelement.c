#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];   // taking size of array from user(user input size)
      printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("element no.%d = ",i+1); scanf("%d",&arr[i]);
        
    }

    int max=INT_MIN; int max2=INT_MIN;
    
    for( int i=0; i<n; i++)
    {
        if(arr[i]>max)
     {
        //   max2=max;
         max=arr[i];
     }

    }

     for (int j=0; j<n; j++)
     {
         if(arr[j]>max2 && arr[j]!=max)
     {
        //   max2=max;
         max2=arr[j];
     }

     }

    printf("largest element:%d",max);
    printf("\n2nd largest element:%d",max2);



    // another using one loop

     int n1;
    printf("\n\n** Again Enter the size of array:");
    scanf("%d",&n1);
    int brr[n1];   // taking size of array from user(user input size)
      printf("Enter the elements:\n");
    for(int i=0; i<n1; i++)
    {
        printf("element no.%d = ",i+1); scanf("%d",&brr[i]);
        
    }

    int _max=INT_MIN; int _max2=INT_MIN;
    
    for( int i=0; i<n1; i++)
    {
        if(brr[i]>_max)
     {
          _max2=_max;
         _max=brr[i];
     }

     else  if(brr[i]>_max2 && brr[i]!=_max)
     {
        //   max2=max;
         _max2=brr[i];
     }


    }

    
    printf("largest element:%d",_max);
    printf("\n2nd largest element:%d",_max2);



     return 0;
}    
        
    
     

    
      

  
      
