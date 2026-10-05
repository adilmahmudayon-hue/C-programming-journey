#include<stdio.h>

int factorial( int a)
{
    int f=1;
    for( int i=a; i>=1; i--)
    f=f*i;
    return f;
}

int comb( int n, int r)
{
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;

}

int main()
{
      int n;
    printf("Enter number of rows for Pascal Triangle: ");
    scanf("%d",&n);

    for( int i=0 ; i<=n; i++)
    {
        for ( int k=1 ; k<=n-i; k++)  // for spaces
        {
            printf(" ");
        }
        for( int j=0 ; j<=i; j++)  // for digits
        {
            int icj = comb(i,j);
            printf("%d ", icj);
        }

     printf("\n");
    }


    return 0;
}


   
 



   