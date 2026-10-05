#include<stdio.h>

int dec(int n) // does both
{
   if (n==0) return 0;  // base
   else
   {
     printf("%d\n",n); // code
     dec(n-1);  // call
     printf("%d\n",n); // code
     
   }

   return 0;
}
   


int main()
{
    printf("Enter a number:");
    int n; scanf("%d",&n);

        dec(n);
      return 0;
}
   