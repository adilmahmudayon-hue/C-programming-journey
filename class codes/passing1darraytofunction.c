#include<stdio.h>
int minimum( int arr[],int n);
int maximum( int arr[],int n);
int main()
{
    printf("Enter array size:");
    int n; scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);

    int min=minimum(arr,5);
    printf("Minimun = %d\n",min);
    // int max=maximun(arr,5);
    printf("Maximum = %d\n",maximum(arr,5));
}

int minimum( int arr[],int n)
{
    int min=999999;
    for( int i=0; i<n; i++)
    {
        if(min>arr[i])
        min=arr[i];
    }

    return min;
}

int maximum( int arr[],int n)
{
    int max=-99999;
    for( int i=0; i<n; i++)
    {
        if(max<arr[i])
        max=arr[i];
    }

    return max;
}