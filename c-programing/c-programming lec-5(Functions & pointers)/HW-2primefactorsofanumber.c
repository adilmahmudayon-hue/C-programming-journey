#include<stdio.h>
int fact( int x)
{
    int max; int pf;
    for(int i=1; i<=x; i++)
    {
       
        if( x%i==0 )
      {    max=i; // storing the factors in max
         
        for ( int j=2; j<max; j++)
        {
           pf=max;
           pf=pf%j;
           if(pf!=0)
           printf("%d ",max);
           break;
        }
        
       
    }
      
    } 
    
   
} 


 


    
int main()
{
 
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);
      printf("prime Factors of the number: ");
      
    int f=fact(n);
    int pf;

    return 0;
}