#include<stdio.h>
int main()
{
   
        int n,i; int a; int b;
        printf("Armstrong numbers from 1 to 500: ");
 
    for( i=1;i<=500;i++)
    {  
        n=i;
        a=0;
        while(n>0)
        { 

            b = n%10;
            a = a + (b*b*b);

             n = n/10;

        }

      if( a==i)
      printf("%d ",a);


    }
    return 0;
}