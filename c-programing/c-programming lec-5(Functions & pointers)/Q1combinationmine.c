#include<stdio.h>

int factorial( int n)

{
  int f=1;
   for( int i=n; i>=1; i--)
 {
   f = f*i;
 }

 return f;
}

int combination( int n, int r)
{
  int nCr = factorial(n)/(factorial(r)*factorial(n-r));
  return nCr;
 
}

int main()
{
  int n,r;
  printf("Enter n and r for combination (n>r must): ");
  scanf("%d %d ",&n ,&r);
  int nCr = combination(n,r);

printf("%dC%d=%d",n,r,nCr);


}