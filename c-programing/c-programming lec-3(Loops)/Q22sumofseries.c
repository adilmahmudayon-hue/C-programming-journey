#include<stdio.h>
int main()
{
 printf("The series:1-2+3-4+5-6.......upto n\n");
 printf("Enter the nth term: ");
 int n; scanf("%d",&n);
int i=1; int sum=0; int i1;
while(i<=n)
{
    if(i%2!=0)
    printf("+%d ",i1=i);
    else
    printf("%d ",i1=-1*i);

    sum=sum+i1;
    i++;
}
 
printf("\nSum of the series= %d",sum);

// same prob different way 
if(n%2==0) printf("\n\nSum of the series= %d",-n/2);
else printf("\n\nSum of the series= %d", n/2+1);



     return 0;
}