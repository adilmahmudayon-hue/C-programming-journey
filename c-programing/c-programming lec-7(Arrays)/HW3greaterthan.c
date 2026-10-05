#include<stdio.h>
int main()
{
    int n; int c=0;
    printf("Enter a number:");
    scanf("%d",&n);

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Elements greater than %d---->",n);
    for(int i=0; i<10; i++)
    {
        if(arr[i]>n)
        {printf("%d ",arr[i]);
        c++;
         }
    }
    printf("\nNumber of elements greater than %d is %d",n,c);

    return 0;
}