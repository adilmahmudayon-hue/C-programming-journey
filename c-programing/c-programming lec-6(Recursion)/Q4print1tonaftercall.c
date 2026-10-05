#include<stdio.h>

int incr(int n)
{
   if (n==0) return 0;  // base
   else
   {
     incr(n-1);  // call
     printf("%d\n",n); // code
     
   }

   return 0;
}
   


int main()
{
    printf("Enter a number:");
    int n; scanf("%d",&n);

        incr(n);
      return 0;
}
   
  
