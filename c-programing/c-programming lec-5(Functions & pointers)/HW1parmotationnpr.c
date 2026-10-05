#include<stdio.h>

int fact( int a)
{
  int f=1;
   for( int i=a; i>=1; i--)
   
   {
    f=f*i;
   }
   return f;

}

int permutation( int n, int r)
{
 int nPr = fact(n)/fact(n-r);
 return nPr;

}

int main()
{
    int n,r;
    printf("Enter n and r for permutation (n>r must):");
    scanf("%d %d",&n,&r);
    int npr= permutation(n,r);
    printf("Permutation : %dp%d = %d",n,r,npr);
    return 0;
}