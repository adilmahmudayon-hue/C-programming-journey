#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];  // taking size of array from user(user input size)
    int max;
    printf("Enter the elements-\n");
    max=INT_MIN;
    for(int i=0; i<n; i++)
    {

        printf("element no.%d)",i+1); scanf("%d",&arr[i]);
                
        if(arr[i]>max)
        max=arr[i];
        
    }

    printf("maximum of all elements: %d",max);
    printf("\n%d",INT_MIN);
     printf("\n%d",INT_MAX);
    return 0;
}


