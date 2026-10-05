#include<stdio.h>
int main()


{
printf("Enter rows of 0 and 1 triangle= ");
int n; scanf("%d",&n);
int a;


for( int i=1; i<=n; i++)
{
  for(int j=1; j<=i; j++)
  { 
    if( (i%2!=0 && j%2!=0) ||(i%2==0 && j%2==0) )
    
    printf("1 ");
   
    else 
    printf("0 ");
  }
printf("\n");

}


// another way

for( int i=1; i<=n; i++)
{

  if(i%2!=0) a=1;
  else a=0;
  for(int j=1; j<=i; j++)
  { 
    printf("%d ",a);
    if(a==0) a=1;
    else a=0;
    
  }
printf("\n");    
  
}

     return 0;

}