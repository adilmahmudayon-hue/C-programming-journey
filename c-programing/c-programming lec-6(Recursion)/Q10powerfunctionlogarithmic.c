#include<stdio.h>
long long power(int a, int b)

{  long long p;
  if(b==0) return 1;
 
  if(b%2==0)
  p = power(a,b/2)*power(a,b/2);
  else 
   p = power(a,b/2)*power(a,b/2)*a;
      return p;
}   



long long power2(int a, int b)  // we can also write functions this way as p=power2

{   
     if(b==0) return 1;
 long long p=power2(a,b/2);
  if(b%2==0)
  return p*p;
  else
   return p*p*a; 
    
}



int main()
{
    printf("Enter two numbers:");
    int a,b;
    scanf("%d %d",&a,&b);
    long long p=power(a,b);
    printf("%d raised to the power %d = %lld",a,b,p);

    printf("\n%lld",power2(a,b));
    return 0;

}