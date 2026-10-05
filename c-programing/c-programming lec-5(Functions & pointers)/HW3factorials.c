#include<stdio.h>

int fact (int n)
{
int f=1;
for(int i=1; i<=n; i++)

{
    f =f*i;
    printf("Factorial of %d!=%d\n",i,f);
}  
     return 0;
}
  
  

int main()
{
    int n;
    printf("Enter a number,n: ");
    scanf("%d",&n);
    printf("Factorials of the first n number:\n");
    fact(n);
    return 0;
}









