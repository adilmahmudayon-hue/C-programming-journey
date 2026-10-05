#include<stdio.h>
void sum(int n,int s,int p)
{
    if(p>n)
    {
        printf("sum from 1 to %d = %d",n,s);
        return;
    } 
  else
  {
    s=s+p;
    sum(n,s,p+1);
  } 
 
   return;
}

void add(int n,int s)
{
    if(n==0)
    {
        printf("\n%d",s);
        return;
    }

    add(n-1,s+n);
    return;

}

   

int main()
{
    printf("Enter a number:");
    int n; scanf("%d",&n);

    sum(n,0,1);
    add(n,0);

    

    
    return 0;
}
