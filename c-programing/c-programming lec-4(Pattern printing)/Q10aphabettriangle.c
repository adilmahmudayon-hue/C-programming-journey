#include<stdio.h>
int main()
{

printf("Enter rows of the alphabet triangle= ");
int n; scanf("%d",&n);
for(int i=1; i<=n; i++)
{
  for( int j=65; j<=65+i-1; j++)
  {
    printf("%c ",j);

  }

   printf("\n");
}

// inverse alphabet triangle


printf("Enter rows of the inverse alphabet triangle= ");
int n1; scanf("%d",&n1);
for(int i=1; i<=n1; i++)
{
  for( int j=65; j<=65+n1-i; j++)
  {
    printf("%c ",j);

  }

   printf("\n");
}



     return 0;
 }