#include<stdio.h>
int main()
{
 printf("Q-9:printing odd numbers from 1 to 100\n");
    for (int i=1;i<=100;i++)
{
     if(i%2==0)
   {
    continue;
   }
  printf("%d ",i);

}

printf("\n\n HW-5:Printing even numbers from 1 to 100\n");
  for (int i=1;i<=100;i++)
{
     if(i%2!=0)
   {
    continue;
   }
  printf("%d ",i);

}

}