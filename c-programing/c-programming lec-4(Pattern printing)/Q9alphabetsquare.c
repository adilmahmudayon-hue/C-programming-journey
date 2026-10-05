#include<stdio.h>
int main()
{

printf("Enter rows of the alphabet square= ");
int n; scanf("%d",&n);
for(int i=1; i<=n; i++)
{
  for( int j=65; j<=65+n-1; j++)
  {
    printf("%c ",j);

  }

   printf("\n");
}


// Another way- using typecasting

printf("Again Enter rows of the alphabet square= ");
int n1; scanf("%d",&n1);
for(int i=1; i<=n1; i++)
{
  for( int j=65; j<=65+n1-1; j++)
  {
    char a=(char)j;
    printf("%c ",a);

  }

   printf("\n");
}

     return 0;
}