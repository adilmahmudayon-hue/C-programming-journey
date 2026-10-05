#include<stdio.h>

void fun( int a[]) // took an array as argument called a
{

    int temp=a[0];
    a[0]=a[1];
    a[1]=temp;

}

int main()
{
    int arr[2]={2,9};
    printf("%d & %d\n",arr[0], arr[1]);

    fun(arr); // passed an array called arr

    printf("%d & %d\n",arr[0], arr[1]);

    return 0;
}