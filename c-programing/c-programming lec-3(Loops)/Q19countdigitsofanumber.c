#include<stdio.h>
int main()
{

printf("Enter a number= ");
int n; scanf("%d",&n);
int a=0;

while(n>0)
{
   n= n/10;
 
   a=a+1;

} 

   
printf("\nDigits of the number =%d",a);
     return 0;

}