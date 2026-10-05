#include<stdio.h>
#include<math.h>

int main()
{
printf("Enter two numbers a & b =");
int a; scanf("%d",&a);
int b; scanf("%d",&b);

int n= pow(a,b);
printf("The value of %d when raised to the power of %d = %d",a,b,n);
// another way same prob: solving with loops
int p=1;

for (int i=1; i<=b; i++)
{
    p=p*a; // multiplying a b times(what powers do)
}

printf("\nAgain The value of %d when raised to the power of %d = %d",a,b, p);
// HW: series of 2^n

printf("\n\nHW:\nEnter the power of 2=");
int n1; scanf("%d",&n1);

int p1=1;
printf("2^%d =",n1);

for (int i=1; i<=n1; i++)
{
    p1=p1*2; // multiplying a b times(what powers do)
    printf("%d,",p1 );
}

     return 0;
}