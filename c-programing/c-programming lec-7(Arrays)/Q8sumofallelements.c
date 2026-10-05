#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];  // taking size of array from user(user input size)
    int sum=0;
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("element no.%d-",i+1); scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    printf("sum of all elements: %d",sum);
    
    return 0;
}


