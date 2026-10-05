#include<stdio.h>
int main()


{
printf("Enter rows of Floyd's triangle= ");
int n; scanf("%d",&n);
int a=1;

for( int i=1; i<=n; i++)
{
  for(int j=1; j<=i; j++)
  { 
    printf("%d ",a);
    a++;
  }
printf("\n");


}


// Hw- Odd floyds triangle


{
printf("Enter rows of  Odd Floyd's triangle= ");
int n1; scanf("%d",&n1);
int a1=1;

for( int i=1; i<=n1; i++)
{
  for(int j=1; j<=i; j++)
  { 
    printf("%d ",a1);
    a1=a1+2;
  }
printf("\n");


}

}
     return 0;

}