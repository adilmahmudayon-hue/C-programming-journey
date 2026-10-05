#include<stdio.h>
int fibo(int n)
{
    if(n<=2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main()
{
      int n;
    printf("Enter the nth term of the fibonacci series:");
    scanf("%d",&n);
    int f=fibo(n);
    printf("%d ",f);
    printf("%d ",fibo(n));  // we can print the function directly cz it returns an integer


    return 0;
}