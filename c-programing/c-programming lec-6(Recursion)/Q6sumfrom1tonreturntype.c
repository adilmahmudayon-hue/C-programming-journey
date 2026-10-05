#include<stdio.h>

int summation(int n)
{
    if(n==1) return 1;
    int s = n+summation(n-1);
    return s;
}


int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
  
    int s = summation(n);
    printf("Sum from 1 to %d = %d",n,s);
    return 0;
}