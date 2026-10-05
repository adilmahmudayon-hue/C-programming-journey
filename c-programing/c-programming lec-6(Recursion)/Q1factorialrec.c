#include<stdio.h>
int fact(int n)
{
    if(n==1 || n==0) return 1;  // 1!=0=0!
    int recans= n*fact(n-1);
    return recans;
}
int main()
{
    int n;
     printf("Enter a number:");
     scanf("%d",&n);

     int f=fact(n);
     printf("Factorial of the number %d is :%d",n,f);


 return 0;

}