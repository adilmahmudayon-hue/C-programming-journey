#include<stdio.h>
int factor( int x, int y)
{
    int f = x; int max ;
    if(x>y) f=y;
    for(int i=1; i<=f; i++)
    {
        if( x%i==0 && y%i==0)
         max = i;  // storing the factors in max
   }   
     
    return max; // returning the maximum/last value of i
   
} 
    
 

int factor2( int x, int y)
{
    int f = x; int max ;
    if(x>y) f=y;
    for(int i=f; i>=1; i--)
    {
        if( x%i==0 && y%i==0)
          max = i ; // storing the factors in max

          break;
    
    }   
     
    return max; // returning the maximum/last value of i
   
} 

    
    


int main()
{
 int x,y;
 printf("Enter two numbers x & y :");
 scanf("%d %d",&x,&y);
 printf("GCD/HCF of them: ");
 int gcd = factor(x,y);
 printf("%d",gcd);


 // another way - starting the loop from oppsite and getting the gcd at first
 
  int x2,y2;
 printf("\nAgain Enter two numbers x & y :");
 scanf("%d %d",&x2,&y2);
 printf("GCD/HCF of them: ");
 int gcd2 = factor2(x2,y2);
 printf("%d",gcd2);
 
 return 0;
}

