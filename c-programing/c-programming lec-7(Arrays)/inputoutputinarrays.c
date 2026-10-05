#include<stdio.h>
int main()
{
    int arr[4];
    for( int j=0; j<=3; j++)
    {
        printf("Enter element number %d):",j+1);  scanf("%d",&arr[j]);
      
    }
    // printf("Enter 1st elemsent:"); scanf("%d",&arr[0]);
    // printf("Enter 2nd elemsent:"); scanf("%d",&arr[1]);
    // printf("Enter 3rd elemsent:"); scanf("%d",&arr[2]);
    // printf("Enter 4th elemsent:"); scanf("%d",&arr[3]);

    // printf("%d\n",arr[0]);
    //  printf("%d\n",arr[1]);
    //   printf("%d\n",arr[2]);
    //    printf("%d\n",arr[3]);


 for( int i=0;i<=3;i++)
 {
    printf("%d ",arr[i]);
 }

    return 0;
}







