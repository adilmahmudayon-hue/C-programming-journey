#include<stdio.h>
int main()
{

    char february;
    int days;
    printf("Enter 1 if this year is a Leap year otherwise enter any integer:\n");

    scanf("%c",&february);

     days = (february=='1')?  29:  28;

    printf("Number of days in February = %d",days);
    
    int a=10,b=5,c=0;

   c = (a>b)? a+b : a-b;
   printf("\n%d",c);

   int d= (a>b)?((a<b)?a:b):c;
   printf("\n%d",d);



    return 0;
}