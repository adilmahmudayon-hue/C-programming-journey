#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};  // 5 variables of integers created using arrays and initialized
    printf("%d\n",arr[0]); // works as an variable
    printf("%d\n",arr[3]); // printing
    arr[3]=100; arr[1]=9;  // updation-{1,9,3,100,5}
    printf("%d\n",arr[3]);
    printf("%d\n",arr[1]);

    float brr[3]={2.4,3.1416,5.8}; // 3 variables of float created using arrays and initialized
    printf("%.4f\n",brr[0]);
    printf("%f\n",brr[1]);

    char crr[3]={'a','b','c'}; // arrays of charecters
    printf("%c\n",crr[1]);
    printf("%c\n",crr[2]);

    int drr[4];
    drr[0]=4;
    drr[2]=34;
    drr[3]=43; // arrays can be declared in this ways too

    printf("%d\n",drr[2]);

    return 0;
}