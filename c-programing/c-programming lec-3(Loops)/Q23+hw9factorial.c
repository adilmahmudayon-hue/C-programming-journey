#include<stdio.h>
int main()
{

printf("Enter a number = ");
int n; scanf("%d",&n);
int i=1; int f=1;
while(i<=n)
{
    f=f*i;
    i++;
}
printf("\nFactorial of the given number: %d",f);
int f1=1;

for(int i=1; i<=n; i++)

{
    f1 =f1*i;
}

printf("\nAgain Factorial=%d",  f1);
// using for loop
//HW-9



  printf("\n\nHW-9:Factorial of first n numbers-\n");
int f2=1;
for(int i=1; i<=n; i++)

{
    f2 =f2*i;
    printf("Factorial of %d!=%d\n",i,f2);
  
}



     return 0;
}