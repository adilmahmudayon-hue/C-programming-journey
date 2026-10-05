#include<stdio.h>
int per( int a, int p)

{
  p=1;
    
    for (int i=1; i<=a ;i++)
   { 
    
    p=p*i;
   } 
     return p;

}
int main()
{
  printf("Enter a factorial = ");
  int a; scanf("%d",&a);

  int p = per(a,p);

   
   printf("%d!=%d",a, p);


    return 0;
}