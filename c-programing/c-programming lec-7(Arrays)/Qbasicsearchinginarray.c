#include<stdio.h>
int main()
{
    int arr[10]={1,5,3,4,5,6,7,5,9,0};
    int x;
    printf("Enter a number:"); scanf("%d",&x);

    for( int i=0; i<10; i++)  // printing 1st index
    {
        if(arr[i]==x)
        {
            printf("\nYes, the number lies in the array & its index no. %d",i);
            break;
        }
    }

  for( int i=0; i<10; i++) // printing all index
    {
        if(arr[i]==x)
        {
            printf("\nYes, the number lies in the array & its index no. %d",i);
           
        }
    }
  for( int i=9; i>=0; i--)  // printing last index
    {
        if(arr[i]==x)
        {
            printf("\nYes, the number lies in the array & its index no. %d",i);
            break;
        }
    }



    return 0;
}