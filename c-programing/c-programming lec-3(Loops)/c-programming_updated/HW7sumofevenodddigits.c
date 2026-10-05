#include<stdio.h>
int main()
{

printf("Enter a number= ");
long int n; scanf("%ld",&n);
int sum=0; int sum2=0; int ld; // last digit =ld
while(n>0)
{

ld= n%10;    // so we can separate the last digit

 if(ld%2==0)
  {
    sum =sum+ld;
  }
/* 
printf("the number now: %d\n",n);
printf("last digit: %d\n",ld);

printf(" sum of digits= %d\n",sum);
*/

else sum2=sum2+ld;
n=n/10; //  so last digit will be gone
   
}

printf("sum of the even digits of the number: %d\n",sum);
printf("sum of the odd digits of the number: %d",sum2);

}