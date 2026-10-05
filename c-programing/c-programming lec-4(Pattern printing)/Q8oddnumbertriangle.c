#include<stdio.h>
int main()


{
    // Q8: Odd Number triangle
printf("Enter rows of triangle= ");
int n; scanf("%d",&n);


for( int i=1; i<=n; i++)
{
  for(int j=1; j<=2*i-1; j=j+2)
  { 
     printf("%d ",j);
  }

printf("\n");

}


// another way

printf("Enter rows of triangle= ");
int n1; scanf("%d",&n1);


for( int i=1; i<=n1; i++)
{ 
  int a=1;
  for(int j=1; j<=i; j=j+1)
  { 
      printf("%d ",a);
      a=a+2;
     
  }

printf("\n");

}

     return 0;

}