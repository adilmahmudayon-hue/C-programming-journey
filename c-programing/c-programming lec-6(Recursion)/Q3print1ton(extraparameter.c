#include<stdio.h>

int inc(int n, int p )

{
       printf("%d\n",p);
     if(p<n)
    return inc(n,p+1);
       else
    return 0;
}

   

int main()
{
    printf("Enter a number:");
    int n; scanf("%d",&n);

    
    inc(n,1);

    
    return 0;
}
