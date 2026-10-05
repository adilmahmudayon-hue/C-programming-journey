#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];  // taking size of array from user(user input size)
    int min;
    printf("Enter the elements-\n");
     min=INT_MAX;
    for(int i=0; i<n; i++)
    {
         printf("element no.%d)",i+1); scanf("%d",&arr[i]);
                
        if(arr[i]<min)
        min=arr[i];
        
    }  
    printf("minimum of all elements: %d",min);
    printf("\n%d",INT_MIN);
     printf("\n%d",INT_MAX);

     int brr[4]={4,5,6,7};
     printf("%d",brr[6]);
    return 0;
}
     

