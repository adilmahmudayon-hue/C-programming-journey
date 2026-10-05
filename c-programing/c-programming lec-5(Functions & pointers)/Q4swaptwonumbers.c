#include<stdio.h>

int main()
{
  int a, b;
  printf("Enter two numbers a and b: ");
  scanf("%d %d", &a, &b);
  int extra = b;
  b=a;
  a=extra;
  printf("\n After swaping a:%d & b:%d",a,b);
  return 0;


}