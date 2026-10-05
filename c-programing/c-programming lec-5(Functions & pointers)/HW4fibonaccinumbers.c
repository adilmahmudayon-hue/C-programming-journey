#include<stdio.h>
int fibonacci(int n)
{
  int f1=1; int f2=1; int fn;

  for (int i=1; i<=n; i++)
  {  if( i<3)
    printf("%d ",f1);
    else 
     {
        fn=f1+f2;
        printf("%d ",fn);
        f1=f2;
        f2=fn;
     }
  }

}
int main()
{
    int n; 
    printf("Enter number of fibonacci numbers: ");
    scanf("%d",&n);
    printf("first n fibonacci numbers:");
    fibonacci(n);
    return 0;

}