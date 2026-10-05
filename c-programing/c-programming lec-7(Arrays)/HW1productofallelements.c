#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];  // taking size of array from user(user input size)
    int p=1;
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
    {
        printf("element no.%d-",i+1); scanf("%d",&arr[i]);
        p=p*arr[i];
    }

    printf("product of all elements: %d",p);
    
    return 0;
}


