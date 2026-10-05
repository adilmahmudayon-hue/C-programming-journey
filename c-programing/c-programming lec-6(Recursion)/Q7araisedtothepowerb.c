#include<stdio.h>
int power(int a, int b)

{
  if(b==0) return 1;
  int p= a*power(a,b-1);
    
    return p;
}



int main()
{
    printf("Enter two numbers:");
    int a,b;
    scanf("%d %d",&a,&b);
    int p=power(a,b);
    printf("%d raised to the power %d = %d",a,b,p);

    return 0;

}