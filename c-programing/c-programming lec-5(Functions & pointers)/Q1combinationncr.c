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

int main()
{
    int n,r,ncr;
    printf("Enter n and r for combination (n>r must):");
    scanf("%d %d", &n,&r);
    int nfact = fact(n); printf("%d! = %d\n",n,nfact);
    int rfact = fact(r); printf("%d! = %d\n",r,rfact);
    int nrfact = fact(n-r); printf("%d! = %d\n",n-r,nrfact);

    int nCr = nfact/(rfact*nrfact);
    printf("%dC%d = %d",n,r,nCr);


    // another way
     ncr = fact(n)/(fact(r)*fact(n-r));
    printf("\n again ncr=%d",ncr);
    return 0;
    

}
