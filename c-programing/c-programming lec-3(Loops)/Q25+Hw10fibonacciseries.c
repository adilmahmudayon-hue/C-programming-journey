#include<stdio.h>
int main()
{

printf("Enter a number= ");
int n; scanf("%d",&n);
int i=3; int t1=1; int t2=1 ; int tn=1; // tn=next term
printf("\nThe fibonacci series: 1, 1, ");  // 1st 2 terms are preoccupied:1,1
while (i<=n)

{
  
  tn =t1+t2;
  t1=t2; 
  t2=tn;  // bcz next two terms will be added

  printf("%d, ",tn);

  i++;

}
printf("\nthe %dth fibonacci number: %d",n,tn);
     return 0;

}