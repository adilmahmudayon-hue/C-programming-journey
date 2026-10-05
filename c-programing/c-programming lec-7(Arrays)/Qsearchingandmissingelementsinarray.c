#include<stdio.h>
#include<stdbool.h> // header file to use boolian data type 
int main()
{
    int arr[10]={1,5,3,4,5,6,7,5,9,0};
    int x, index;
    printf("Enter a number:"); scanf("%d",&x);
    bool check = false ; // boolian data can have only two values true & false 
    for( int i=0; i<10; i++)  // printing 1st index
    {
        if(arr[i]==x)
        {
            check = true;
            index=i;
            break;
        }
    }

    if(check==true)
    {
        printf("\nThe number is present in the array & its index no:%d",index);
    }
    else
    printf("\nThe number is abesent in the array");


    return 0;
}