#include<stdio.h>
int stairs(int n)
{
   if(n==1 || n==2 ) return n;
   if(n==3) return 4;

   // if(n==1) return 1; if(n==2) return 2;
    
    int ways= stairs(n-1) + stairs(n-2) + stairs(n-3) ;
    return ways;
}
int main()
{
    int n;
    printf("Enter number of stairs:");
    scanf("%d",&n);

    int s=stairs(n);
    printf("Ways to reach stair no-%d = %d",n,s);

    return 0;
}