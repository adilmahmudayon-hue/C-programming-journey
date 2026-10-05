#include<stdio.h>

void swap( int* x, int*y)
{
  int temp = *x; // temp =x
  *x=*y; // x=y
  *y=temp; // y=temp/x
  return;
}
 int main()
{
   int a=50;
   int* m=&a;
   printf("%p\n",&a);  // %p prints address of a variable in memory
   printf("%p\n",m);
    printf("%d\n",*m);
    *m=7;
        printf("%d\n",*m);

    // swapping 2 numbers using pointers

    int x,y;
    printf("Enter 2 numbers x and y:");
    scanf("%d %d",&x,&y);

    swap (&x,&y);
    printf("After swapping x=%d & y=%d",x,y);
    return 0;
}
    

