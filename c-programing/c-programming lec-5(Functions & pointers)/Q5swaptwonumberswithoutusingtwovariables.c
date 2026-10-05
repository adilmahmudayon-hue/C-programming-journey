#include<stdio.h>

void swap( int a, int b)
{
     printf("\nAfter swapping a:%d & b:%d",a,b);
    return ;
}
int main()
{

    int a, b;
    printf("Enter two numbers for a and b:");
 scanf("%d %d",&a,&b);

      swap(b,a); //swapped the values of a and b while passing them to swap


    a=a+b;
    b=a-b;   // a+b-b=a
    a=a-b;    // a+b-a=b
    printf("\nAfter swapping a:%d & b:%d",a,b);

    // another : using functions

  


    return 0;
}



