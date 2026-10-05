#include<stdio.h>
int main()
{

int x=1;

printf("%d",x); 
x++; // x=x+1
printf("\n%d",x);

printf("\n%d",x++); // here x is printed at first thn increament is  done(postincreament)

++x; // x=x+1
printf("\n%d",x);

printf("\n%d",++x); // here the increament is done at first thn the valus is printed (preincrement)

     return 0;
}