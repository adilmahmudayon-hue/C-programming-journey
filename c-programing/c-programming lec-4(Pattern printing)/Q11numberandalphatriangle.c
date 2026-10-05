#include<stdio.h>
int main()
{

printf("Enter rows of the number & alphabet triangle= ");
int n; scanf("%d",&n);
for(int i=1; i<=n; i++)
{
  for( int j=1; j<=i; j++)
  {
    if(i%2!=0)
    printf("%d ",j);

    else printf("%c ",j+64);

  }

  // for( int j=1; j<=i; j++)
  // {
  //   if(i%2==0)
  //   printf("%c ",j+64);

  // }

   printf("\n");
}



     return 0;
}