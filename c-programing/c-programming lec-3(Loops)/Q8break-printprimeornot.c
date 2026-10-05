
#include <stdio.h>

int main()
{
    printf("Enter a number =");
    int n; int a=0; scanf("%d",&n);
    for(int i=2;i<=n-1;i++)
   {
       if (n%i==0)
       {
           a=1;
     
         break;
      }
   }   
   if (n==1) printf("1 is neither prime nor composite");
   
   else  if (a==0)  printf("\nthe given number is a Prime number");
      else  printf("\nthe given number is a Composite number");
   

    return 0;
}